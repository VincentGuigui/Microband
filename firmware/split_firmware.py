#!/usr/bin/env python3
"""Splits a Microsoft Band "Envoy" firmware container into its sections.

The .bin firmware distributed for the Band is not a raw flash dump: it is a
proprietary container ("Envoy") holding a bootloader, a main application
image, several resource blobs, and one string table per supported language.

The container format below is not something this project reverse-engineered
from scratch. It is adapted from the `construct` schema documented by the
msband project (https://github.com/hire-marat/msband,
src/msband/firmware.py), released under The Good Idea 2 License -- see
LICENSE-THE-GOOD-IDEA-2.txt in this directory, redistributed here per that
license's own requirement.

Usage:
    pip install construct capstone
    python3 split_firmware.py envoy-2.0.5202.0.bin outdir/
"""

import json
import sys
from pathlib import Path

import construct
from construct import (
    Array,
    Const,
    CString,
    FixedSized,
    GreedyBytes,
    Hex,
    Int8ul,
    Int16ul,
    Int32ul,
    Pointer,
    Rebuild,
    this,
)

CARGO = Const(9, Int8ul)
ENVOY = Const(26, Int8ul)
Device = construct.Select(CARGO, ENVOY)

Version = construct.Struct(
    "Minor" / Int16ul,
    "Major" / Int16ul,
    "Patch" / Int32ul,
)

HeaderlessSection = construct.Struct(
    "_Data" / GreedyBytes,
)

Language = construct.Struct(
    "_Count" / Int32ul,
    "_Pointers" / Array(this._Count, Int32ul),
    "_Strings" / Array(this._Count, CString("utf_16_le")),
)

SectionHeader = construct.Struct(
    "Incantation" / Hex(Int32ul),
    "Version" / Version,
    "Base" / Hex(Int32ul),
    "Size" / Hex(Int32ul),
    "Stack" / Hex(Int32ul),
    "CRC" / Hex(Int32ul),
    "InterruptVector" / Hex(Int32ul),
    "Unk" / Hex(Int32ul),
    "Unk2" / Hex(Int32ul),
    "Unk3" / Hex(Int16ul),
    "Device" / Device,
    "Unk4" / Hex(Int8ul),
    "Unk5" / Hex(Int32ul),
)

Section = SectionHeader + HeaderlessSection
LanguageSection = SectionHeader + Language

_LANGUAGE_IDS = {
    0x1C, 0x1D, 0x1E, 0x1F, 0x20, 0x21, 0x22, 0x23,
    0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B,
}

SectionEntry = construct.Struct(
    "Id" / Hex(Int16ul),
    "Pointer" / Hex(Int32ul),
    "Size" / Hex(Int32ul),
    "Section"
    / Pointer(
        this.Pointer,
        FixedSized(
            this.Size,
            construct.Switch(
                this.Id,
                {0xC002: HeaderlessSection, **{i: LanguageSection for i in _LANGUAGE_IDS}},
                default=Section,
            ),
        ),
    ),
)

Header = construct.Struct(
    "Magic" / Hex(Int16ul),
    "UnkB" / Hex(Int8ul),
    "Device" / Device,
    "UnkB2" / Hex(Int8ul),
    "Unk" / Hex(Int32ul),
    "Unk2" / Hex(Int32ul),
    "Unk3" / Hex(Int16ul),
    "_SectionCount" / Rebuild(Int32ul, construct.len_(this.Sections)),
    "Size" / Hex(Int32ul),
    "CRC" / Hex(Int32ul),
    "Sections" / Array(this._SectionCount, SectionEntry),
)


# Well-known section IDs in Band 2 firmware 2.0.5202.0. Other IDs are dumped
# generically as `section_<id>.bin` -- this list isn't exhaustive, it's just
# what's been identified so far.
_KNOWN_NAMES = {
    0xC000: "bootloader",
    0xC001: "main_app",
    0xC002: "manifest",
}


def split(firmware_path: Path, out_dir: Path) -> None:
    data = firmware_path.read_bytes()
    fw = Header.parse(data)

    sections_dir = out_dir / "sections"
    strings_dir = out_dir / "strings"
    sections_dir.mkdir(parents=True, exist_ok=True)
    strings_dir.mkdir(parents=True, exist_ok=True)

    languages = {}
    for entry in fw.Sections:
        section = entry.Section
        if hasattr(section, "_Strings"):
            languages[f"0x{entry.Id:04X}"] = list(section._Strings)
            continue
        name = _KNOWN_NAMES.get(entry.Id, f"section_0x{entry.Id:04X}")
        (sections_dir / f"{name}.bin").write_bytes(section._Data)
        base = getattr(section, "Base", None)
        print(f"0x{entry.Id:04X} {name:12s} {entry.Size:>8} bytes  Base=0x{base:08X}" if base is not None
              else f"0x{entry.Id:04X} {name:12s} {entry.Size:>8} bytes")

    if languages:
        (strings_dir / "all_languages.json").write_text(json.dumps(languages, indent=2, ensure_ascii=False))
        print(f"wrote {len(languages)} language tables to strings/all_languages.json")


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print(__doc__)
        sys.exit(1)
    split(Path(sys.argv[1]), Path(sys.argv[2]))

# Firmware analysis: Band 2 2.0.5202.0

This directory holds a copy of the official Band 2 firmware the app downloads
and flashes at runtime (see `BandConnectionManager.LATEST_FIRMWARE_URL`), plus
the results of unpacking and disassembling it, kept here for reference. None
of this is used by the app itself -- the app still treats the `.bin` as an
opaque, SHA-256-verified blob before writing it to the Band, which remains
the correct and only safe approach for actually flashing firmware.

## What's here

- `envoy-2.0.5202.0.bin` -- the original firmware container, as downloaded.
  SHA-256: `2473896b8281b2ff81e462374a48be8a3e8901fb6b2c55af0fe9125930a60727`
  (matches the hash already pinned in `BandConnectionManager.kt`).
- `split_firmware.py` -- unpacks the container into its sections. Usage:
  `pip install construct && python3 split_firmware.py envoy-2.0.5202.0.bin .`
- `sections/` -- every section extracted from the container by that tool.
- `strings/all_languages.json` -- every UI string table extracted from the
  16 language sections (real, human-readable device UI text).
- `disassembly/` -- ARM Thumb/Thumb-2 disassembly of the two executable
  sections, produced with [Capstone](https://www.capstone-engine.org/).
  **This is disassembly, not decompiled C.** It's a naive linear sweep with
  no function-boundary or data/code separation, so literal pools and padding
  will show up as plausible-looking but meaningless instructions here and
  there -- that's an inherent limitation of linear disassembly, not a sign
  of a bad section. Getting from this to readable/compilable C would need a
  real decompiler (Ghidra, IDA) doing actual function and type recovery,
  which is a substantially bigger undertaking than what's captured here.

## The container format

The `.bin` is not a raw flash dump -- it's a proprietary container ("Envoy")
holding a bootloader, a main application image, several resource blobs, and
one string table per supported UI language. This format was **not**
reverse-engineered by this project: `split_firmware.py` is adapted from the
`construct` schema documented in
[msband](https://github.com/hire-marat/msband) (`src/msband/firmware.py`),
released under **The Good Idea 2 License** -- reproduced verbatim in
[`LICENSE-THE-GOOD-IDEA-2.txt`](LICENSE-THE-GOOD-IDEA-2.txt) per that
license's own redistribution requirement.

## Sections identified in 2.0.5202.0

| Id | Name | Size | Base | Notes |
| --- | --- | --- | --- | --- |
| `0xC000` | bootloader | 98,256 B | `0x00003000` | |
| `0xC001` | main_app | 1,200,080 B | `0x0001D000` | main application firmware |
| `0xC002` | manifest | 1,408 B | -- | headerless, likely signature/manifest |
| `0x1C`-`0x2B` (16 IDs) | language tables | ~5-7 KB each | -- | UI strings, one table per locale |
| `0x33`-`0x39`, `0x67`, `0x68`, `0x74` | resource blobs | varies | -- | not yet identified (fonts/assets/sub-firmware?) |

Both executable sections disassemble cleanly as **ARM Thumb/Thumb-2**
(idiomatic compiler-generated patterns: `push {r4,lr}` / `bl` / `cmp`+`bne` /
`pop {r4,pc}`), consistent with a Cortex-M class MCU. The bootloader's
`Stack`/`InterruptVector` fields sit in the `0x1FFF0xxx` range, which matches
Freescale/NXP Kinetis SRAM layouts rather than a generic ARM part.

`disassembly/main_app_sample.asm.txt` covers only the first 256 KB of the
1.17 MB main application section, as a representative sample -- re-run
`split_firmware.py` + Capstone with a higher (or no) byte limit for the rest.

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
  A naive linear sweep with no function-boundary or data/code separation, so
  literal pools and padding show up as plausible-looking but meaningless
  instructions here and there. Superseded in practice by `decompiled/`.
- `decompiled/` -- **C pseudocode from Ghidra's decompiler**, 7,644 functions
  for `main_app` and 268 for `bootloader`, plus a CSV index of every function
  (address, name, size, whether decompilation succeeded). See the caveats in
  "Can this be recompiled?" below before assuming more from it than it gives.
- `ghidra/` -- the scripts and exact load parameters that produced
  `decompiled/`, so the analysis is reproducible: `decompile.sh`,
  `SeedVectorTable.java` (seeds the Cortex-M vector table as entry points
  before auto-analysis), `ExportDecompiled.java` (dumps C + the index).

## Load parameters

These matter enormously -- loading at the wrong base silently produces
garbage, because every cross-reference resolves to the wrong place. They were
derived from the Envoy section headers and then *verified against the bytes*
by checking that the claimed vector table really is an array of valid Thumb
pointers landing inside the image.

| Section | Load base | Vector table | Entry point |
| --- | --- | --- | --- |
| `main_app` | `0x0001D000` | `0x0013FA00` | `0x00110260` |
| `bootloader` | **`0x1FFF0000`** | `0x1FFF0200` | `0x1FFF054C` |

Two findings worth knowing, neither of which is stated in the container
header itself:

1. **The bootloader is linked to run from RAM, not flash.** Its section
   header says `Base=0x00003000`, but that is only where it is *stored*; its
   `Stack`/`InterruptVector` fields point into `0x1FFF0xxx`, which is SRAM.
   Loading it at `0x3000` finds 159 functions and resolves almost no
   cross-references; loading it at `0x1FFF0000` finds 268 (+69%), and the
   vector table there checks out as 32/32 valid in-range Thumb pointers.
2. **`main_app` calls into the bootloader image at runtime.** It references
   seven functions in the `0x20006xxx` range, which is outside its own image
   but *inside* the RAM-resident bootloader (`0x1FFF0000`-`0x20007FD0`). So
   the "bootloader" isn't only a boot-time loader -- it stays resident and
   acts as a shared service layer the main application calls into.

The header field named `Stack` in the schema is, at least for these two
sections, an odd-valued address -- i.e. a Thumb function pointer with bit 0
set, not a stack pointer. It behaves like the entry point.

## Can this be recompiled into a new firmware image?

No -- and it's worth being precise about why, because "we have C now" invites
the opposite conclusion.

What Ghidra produces is *pseudocode reconstructed from machine code*, not the
vendor's source. Compiling a single decompiled function verbatim fails
immediately:

```
error: unknown type name 'undefined4'      # Ghidra placeholder, not a C type
error: unknown type name 'byte'
error: 'DAT_0001ed9c' undeclared           # no data layout recovered
warning: implicit declaration of 'thunk_EXT_FUN_2000620e'   # no prototypes
```

Multiply that across 7,644 functions. Beyond the syntax, a rebuildable source
tree would additionally need: recovered struct/type definitions, the hardware
register map for this (Kinetis-family) MCU, the RTOS it runs on, a linker
script reproducing the exact memory layout, and a toolchain whose codegen
lands everything where the existing binary expects it. None of that is
recovered here, and roughly 36% of `main_app` isn't even identified as code
yet (63.7% function coverage; 21.7% for the bootloader).

What this output *is* good for: reading and understanding what the firmware
actually does, and locating specific behavior precisely enough to make small,
surgical binary patches. Per-section integrity is a plain CRC-32 (`msband`'s
`sign_section()` just recomputes it), not a cryptographic signature -- so a
patched section can be made structurally valid. That says nothing about
whether the device itself accepts a modified image, which is untested and
would risk bricking hardware that has no documented recovery path.

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

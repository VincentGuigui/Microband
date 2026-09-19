#!/usr/bin/env bash
# Reproduces the Ghidra decompilation of the Band 2 firmware sections.
#
# The load parameters below are not guesses -- they were derived from the
# Envoy section headers and then verified against the actual bytes (see
# ../README.md, "Load parameters"). Getting them wrong silently produces
# garbage, so don't change them without re-verifying the vector table.
#
# Usage:
#   GHIDRA=/path/to/ghidra_12.x_PUBLIC ./decompile.sh <sections-dir> <out-dir>
set -euo pipefail

GHIDRA="${GHIDRA:?set GHIDRA to your Ghidra install directory}"
SECTIONS="${1:-$(dirname "$0")/../sections}"
OUT="${2:-$(dirname "$0")/../decompiled}"
SCRIPTS="$(cd "$(dirname "$0")" && pwd)"
HEADLESS="$GHIDRA/support/analyzeHeadless"
PROJ="$(mktemp -d)"

mkdir -p "$OUT"

# main_app: executes in place from flash at 0x1D000.
#   vector table 0x0013FA00, entry 0x00110260 (Thumb, low bit set in header)
"$HEADLESS" "$PROJ" main_app -import "$SECTIONS/main_app.bin" \
    -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x1D000 \
    -scriptPath "$SCRIPTS" \
    -preScript SeedVectorTable 0x0013FA00 0x00110261 128 \
    -postScript ExportDecompiled "$OUT" \
    -deleteProject

# bootloader: stored in flash at 0x3000 but LINKED TO RUN FROM RAM at
#   0x1FFF0000 -- its own header's Stack/InterruptVector fields point there.
#   Loading it at 0x3000 (the "Base" field) resolves almost no cross
#   references and finds ~40% fewer functions.
"$HEADLESS" "$PROJ" bootloader -import "$SECTIONS/bootloader.bin" \
    -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x1FFF0000 \
    -scriptPath "$SCRIPTS" \
    -preScript SeedVectorTable 0x1FFF0200 0x1FFF054D 128 \
    -postScript ExportDecompiled "$OUT" \
    -deleteProject

rm -rf "$PROJ"
echo "output in $OUT"

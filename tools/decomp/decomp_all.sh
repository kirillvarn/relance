#!/bin/sh
# Decompile every code module in porting scope into decomp/ (2 at a time;
# Ghidra needs ~2 GB each). Skips modules already done (README.txt exists)
# unless FORCE=1.
# Out of scope (see notes/porting_status.md "Skip"): resource-only DLLs,
# debuglib, unicows, drvmgt, EBUEula, dw15, UNINSTAL, flserver.
set -u
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
cd "$ROOT"
: "${GHIDRA_INSTALL_DIR:=$GHIDRA}"; export GHIDRA_INSTALL_DIR
MODS="system dacom x86math ximage readfile dalib imeui zlib soundmanager \
luaprofile soundstreamer deformable2 flmaterials rendcomp engbase movie \
shading rpclocal thorn remoteclient remoteserver gundll alchemy rp8 server \
common"
list() {
  for m in $MODS; do echo "game/EXE/$m.dll"; done
  echo game/DLLS/BIN/content.dll
  echo game/EXE/Freelancer.exe
}
mkdir -p decomp
list | while read -r f; do
  m=$(basename "$f" | tr 'A-Z' 'a-z')
  [ "${FORCE:-0}" != 1 ] && [ -f "decomp/$m/README.txt" ] && continue
  echo "$f"
done | xargs -P 2 -I{} sh -c \
  'venv/bin/python -I tools/decomp/decomp_module.py "{}" > "decomp/$(basename "{}" | tr A-Z a-z).log" 2>&1; tail -1 "decomp/$(basename "{}" | tr A-Z a-z).log"'

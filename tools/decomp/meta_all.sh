#!/bin/sh
# Rewrite decomp/<module>/meta/ for every module from the saved Ghidra
# projects in ghidra_mods/ (no re-analysis, no decompiling), 2 at a time.
set -u
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
cd "$ROOT"
: "${GHIDRA_INSTALL_DIR:=$GHIDRA}"; export GHIDRA_INSTALL_DIR
for d in decomp/*/; do
  m=$(basename "$d")
  f=$(find game -iname "$m" | head -1)
  [ -n "$f" ] && echo "$f"
done | xargs -P 2 -I{} sh -c 'venv/bin/python -I tools/decomp/decomp_module.py --meta-only "{}" 2>&1 | tail -1'

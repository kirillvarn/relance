#!/bin/sh
# Build the ported system.dll as a 32-bit Windows drop-in replacement using
# MSVC (VS 2022 Build Tools on the Windows host, driven from WSL).
# Output: build/win32/system.dll (+ .pdb, .map). Never writes into game/.
set -eu
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
OUT="$ROOT/build/win32"
mkdir -p "$OUT"
VCVARS='C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat'
w() { wslpath -w "$1"; }

# /Gz is NOT used: only DACOM methods are __stdcall (via DACOM_API); helpers
# and the varargs FDUMP stay cdecl, as in the original.
# /MT: static CRT, so the DLL needs nothing beyond what Windows ships.
# /fp:precise and no /Oi-style contractions: closest to -ffp-contract=off.
cat > "$OUT/build.bat" <<BAT
@echo off
call "$VCVARS" x86 >nul || exit /b 1
cd /d "%TEMP%"
lib /nologo /machine:x86 /def:"$(w "$ROOT/tools/win32/dacom.def")" /out:"$(w "$OUT")\\dacom.lib" || exit /b 1
cl /nologo /std:c11 /W4 /WX /O2 /MT /fp:precise /Zi /DDACOM_LINK_ORIGINAL ^
   /I"$(w "$ROOT/include")" ^
   "$(w "$ROOT/src/dalibs/system/system_container.c")" ^
   "$(w "$ROOT/src/dalibs/system/win32_dllmain.c")" ^
   /Fo"$(w "$OUT")\\\\" /Fd"$(w "$OUT")\\system_cl.pdb" ^
   /LD /Fe"$(w "$OUT")\\system.dll" ^
   /link /NOLOGO /MACHINE:X86 /DLL /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF /MAP:"$(w "$OUT")\\system.map" ^
   /PDB:"$(w "$OUT")\\system.pdb" "$(w "$OUT")\\dacom.lib" || exit /b 1
BAT
(cd /mnt/c && cmd.exe /c "$(w "$OUT/build.bat")")

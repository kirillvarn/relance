@echo off
call "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat" x86 >nul || exit /b 1
cd /d "%TEMP%"
lib /nologo /machine:x86 /def:"\\wsl.localhost\Ubuntu\home\kirill\port\tools\win32\dacom.def" /out:"\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\dacom.lib" || exit /b 1
cl /nologo /std:c11 /W4 /WX /O2 /MT /fp:precise /Zi /DDACOM_LINK_ORIGINAL ^
   /I"\\wsl.localhost\Ubuntu\home\kirill\port\include" ^
   "\\wsl.localhost\Ubuntu\home\kirill\port\src\dalibs\system\system_container.c" ^
   "\\wsl.localhost\Ubuntu\home\kirill\port\src\dalibs\system\win32_dllmain.c" ^
   /Fo"\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\\" /Fd"\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\system_cl.pdb" ^
   /LD /Fe"\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\system.dll" ^
   /link /NOLOGO /MACHINE:X86 /DLL /DEBUG /INCREMENTAL:NO /OPT:REF /OPT:ICF /MAP:"\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\system.map" ^
   /PDB:"\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\system.pdb" "\\wsl.localhost\Ubuntu\home\kirill\port\build\win32\dacom.lib" || exit /b 1

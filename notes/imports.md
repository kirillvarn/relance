# Imports of Freelancer.exe

Source: `objdump -p game/EXE/Freelancer.exe` and a read-only pyghidra dump of
Ghidra's external functions.
- Machine-readable tables:
  - `notes/iat.tsv` maps each IAT slot VA to its DLL and mangled import name.
    It has 1204 slots. Some names are imported from two DLLs, for example
    `stricmp` from both DACOM.dll and MSVCRT.dll.
  - `notes/externals.tsv` maps Ghidra's `EXTERNAL:000xxxxx` addresses to
    import names. It has 1105 rows.
- `externals.tsv` was for the old `export/` (removed 2026-10-15), whose
  callees held Ghidra EXTERNAL offsets such as `0000037b`. `decomp/*/meta`
  lists imported callees by name in the `imports` field instead, and its
  `callees`/`callgraph.json` hold only code addresses.
- Identification: the PE header has PDB path
  `\\aus-usp-02\builds\freelancer\symbols\020403_release_1336_Iretail_ver1223\Freelancer.pdb`,
  a timestamp of 2003-02-04, and linker 6.24 (MSVC 6). The binary is the
  retail **Freelancer** client, v1.0 build 1223.
- The exe also **exports** 69 symbols, listed by `objdump -p`. They include
  `CDPClient`, `CGunWrapper`, `CRemotePhysicsSimulation`,
  `CDeadReckonedVector`, `MD5Hash`, `pub::AI::ContentCallback` methods,
  `Client`, `GetClientInterface`, `GetChatClientInterface` and
  `HandleConnectError`. Other DLLs import these from the exe, so they form
  part of its API contract.

## Per-DLL counts (IAT slots)
| DLL | n | role |
|---|---|---|
| Common.dll | 829 | **Game-logic library**: archetypes, INI reader, physics, ships, AI, reputation, universe. Contains no platform code. |
| MSVCRT.dll | 92 | C runtime |
| MSVCP60.dll | 68 | MSVC6 STL: `std::basic_string<char/wchar>`, `basic_stringstream<wchar_t>` |
| DALib.dll | 51 | Engine facade. Exports global interface pointers (`DALib::Renderer`, `Sound`, `Engine`, …) plus DirectPlay/GUN networking wrappers. |
| USER32.dll | 47 | windowing, messages, cursor |
| KERNEL32.dll | 45 | process, sync, memory, modules |
| ImeUI.dll | 31 | IME text input boxes (`IMEFocus`, `IMEInputBox`, `CInputBox`) |
| GDI32.dll | 17 | GDI text and bitmaps (fonts rendered via DC → DIB, guess) |
| Movie.dll | 6 | `MediaPlayer::` intro movies |
| DACOM.dll | 6 | DA component-object manager, CRC32, logging |
| ADVAPI32.dll | 6 | registry |
| ole32.dll | 2 | CoInitialize/CoUninitialize |
| WS2_32.dll | 2 | by ordinal: 11 = `inet_addr`, 14 = `ntohl` (standard ws2_32 ordinals) |
| WINMM.dll | 1 | timeGetTime |
| DINPUT8.dll | 1 | DirectInput8Create |

## Graphics / audio API (answer)
The exe does not import D3D or DSound itself. Everything goes through DACOM
components named in `game/EXE/dacom.ini` and reached via `DALib::*` pointers.
- **Graphics: Direct3D 8.**
  - `dacom.ini` `[System]` lists `DirectX8 ; implements IID_IRenderPipeline,
    IID_IVertexBuffer under dx8`.
  - `rp8.dll` imports `d3d8.dll` and `DDRAW.dll`, and contains the string
    `Direct3DCreate8`.
  - The exe uses `DALib::Renderer` (IRenderer2), `Pipeline` (IRenderPipeline),
    `RPDraw`, `VertexBuffer`, `RPIndexBuffer`, `MaterialBatcher`,
    `TextureLib`, `MaterialLib` and `VMeshLibrary`.
  - A string `Client\cmn\OpenGL.cpp` exists in the exe. It is probably only a
    file name for a GL-style wrapper over RP (guess, not yet examined).
- **Audio: DirectSound (DSound3D)**, via `soundmanager.dll` and
  `soundstreamer.dll`.
  - Evidence is in the strings: "Couldn't create DSound device",
    "DSound3D SW buffers".
  - Both DLLs import MSACM32 for compressed audio.
  - The exe uses `DALib::Sound` (ISoundManager) and `DALib::Streamer`
    (IStreamer2).
- **Input:** DirectInput 8 (`DINPUT8!DirectInput8Create`) plus Win32 messages
  (`GetKeyState`, `MapVirtualKeyA`, cursor APIs).
- **Video:** `Movie.dll` uses MSVFW32/ole32 (DirectShow/VfW, guess) through
  the `MediaPlayer::PlayMovie(HWND,bool,const char*)` family.
- **Networking:** DirectPlay 8 (`CDPClient::GetClient → IDirectPlay8Client`,
  `CDPServer`) and the GUN/Gun2 lobby (`CGunWrapper`, gundll.dll →
  WS2_32/WININET), plus `remoteclient.dll` and `server.dll`. In single
  player the exe starts an in-process server (see `notes/startup.md`).

## Hidden imports (not in the PE import table)
- **MSLU/unicows static loader stubs.**
  - There are 12 function pointers in .data at 0061640c..00616438. Each is
    initialised to a stub at 005b7420..005b75b7 that resolves it on first
    call via `005b7b3d`.
  - The functions: `ExtTextOutW`, `GetCharWidthW`, `GetTextExtentPointW`,
    `GetProcAddress`, `MultiByteToWideChar`, `CharUpperW`, `EnableWindow`,
    `GetKeyNameTextW`, `GetWindowLongA`, `MessageBoxW`, `SetWindowLongA`,
    `SetWindowTextW`.
  - Full table in `notes/startup.md`.
- Runtime `LoadLibraryA`: `resources.dll` (string and dialog resources) and
  `EBUEula.dll`. The DACOM components listed in `game/EXE/dacom.ini` are
  loaded by DALib.

## Grouped imports (non-Common)

### Graphics / rendering
- DALib globals: `Renderer`, `Pipeline`, `RPDraw`, `RPIndexBuffer`,
  `VertexBuffer`, `VMeshLibrary`, `MaterialBatcher`, `MaterialLib`,
  `MatAnimLibrary`, `TextureLib`, `FxRuntime`, `FxEffectLibrary`, `Alchemy`,
  `Deform`, `Anim`, `Hardpoint`, `Engine`, `Engine2`.
- GDI32: `CreateFontIndirectA`, `SelectObject`, `GetStockObject`,
  `SelectClipRgn`, `CreateSolidBrush`, `SetTextColor`, `SetBkMode`,
  `SetBkColor`, `SetTextAlign`, `GetDIBits`, `CreateCompatibleBitmap`,
  `CreateCompatibleDC`, `DeleteDC`, `DeleteObject`, `GetTextMetricsA`,
  `BitBlt`, `GetObjectA`.
- USER32 paint: `BeginPaint`, `EndPaint`, `FillRect`, `InvalidateRect`,
  `UpdateWindow`, `GetDC`, `ReleaseDC`.
- Movie.dll: `MediaPlayer::Startup`, `Shutdown`, `PlayMovie`, `UpdateMovie`,
  `SetApproach`, `StopMovie`.

### Audio
- DALib globals: `Sound` (ISoundManager*), `Streamer` (IStreamer2*).
- No direct OS audio imports.

### Input
- DINPUT8: `DirectInput8Create`.
- USER32: `GetKeyState`, `MapVirtualKeyA`, `GetCursorPos`, `SetCursorPos`,
  `GetCursorInfo`, `ShowCursor`, `SetCursor`, `GetCursor`, `LoadCursorA`,
  `ClientToScreen`, `ScreenToClient`, `GetDoubleClickTime`, `GetFocus`,
  `GetForegroundWindow`.
- ImeUI.dll (31): `IMEFocus` (`ctor(HWND)`, `WndProc`, `OnChar`, `OnKeyDown`,
  mouse events, `SetFocus`, `GetFocus`, `Draw`, `GetSingleton`,
  `IgnoreHotKey`), `IMEInputBox` (`ctor(LOGFONTA*)`, `Resize`, `CalcCaretPos`,
  `ToggleInsertMode`, …) and `CInputBox` (`HandleKey`, `CharFilter`,
  `MoveCaret`, `SetInputBufferSize`, `HandleMultiByteChar`).

### Window / OS UI
- USER32:
  - Classes and window setup: `RegisterClassA`, `RegisterClassExA`,
    `CreateWindowExA`, `DestroyWindow`, `ShowWindow`, `SetWindowPos`,
    `GetWindowRect`, `GetClientRect`, `AdjustWindowRect`,
    `AdjustWindowRectEx`, `GetMenu`, `GetDesktopWindow`.
  - Message loop: `DefWindowProcA`, `PeekMessageA`, `GetMessageA`,
    `TranslateMessage`, `DispatchMessageA`, `PostQuitMessage`, `SendMessageA`.
  - Dialogs and other: `DialogBoxParamA`, `EndDialog`, `GetDlgItem`,
    `MessageBoxA`, `LoadIconA`, `LoadImageA`, `wsprintfA`.

### File I/O
- MSVCRT: `fopen`, `fclose`, `fgets`, `fprintf`, `_access`, `_splitpath`,
  `_makepath`.
- KERNEL32: `GetFileAttributesA`, `SetCurrentDirectoryA`,
  `GetModuleFileNameA`, `GetTempPathA`, `GetSystemDirectoryA`,
  `GetWindowsDirectoryA`, `CreateFileMappingA`, `MapViewOfFile`,
  `UnmapViewOfFile`.
- Resources: `FindResourceExA`, `LoadResource`, `LockResource`,
  `SizeofResource`.
- DALib: `OpenData(const char*)`, `CloseData()`, `Data` (IFileSystem*).
- Registry (ADVAPI32): `RegOpenKeyExA`, `RegCreateKeyExA`, `RegQueryValueExA`,
  `RegSetValueExA`, `RegDeleteKeyA`, `RegCloseKey`.
- Most game-data file access goes through Common.dll `INI_Reader`
  (23 imports) and `DALib::Data`.

### Networking
- WS2_32: ordinal 11 (`inet_addr`) and ordinal 14 (`ntohl`).
- DALib `CDPClient`: ctor/dtor, `EnumerateHost(s)`, `CancelEnums`,
  `DispatchMsgs`, `GetClient`, `SetGUID`, `SetSourcePort`, `GetPingDelay`,
  `GetLastMsgTimestamp`, `Cleanup`.
- DALib `CDPServer` (`CreateClientProxy`, `CrashCleanup`, dtor) and
  `CDPMsgList` (dtor).
- DALib `CGunWrapper` (ctor, dtor, `Read`, `Update`, `GetStatus`,
  `Shutdown`).
- DALib `MD5Hash` (dtor).

### Threading / sync
- KERNEL32: `CreateMutexA`, `ReleaseMutex`, `CreateEventA`, `SetEvent`,
  `WaitForSingleObject`, `InitializeCriticalSection`,
  `EnterCriticalSection`, `LeaveCriticalSection`, `DeleteCriticalSection`,
  `InterlockedExchange`, `GetCurrentThreadId`, `DuplicateHandle`, `Sleep`.
- Common: `SafeWaitForSingleObject`.
- No `CreateThread` import: threads, if any, are created inside DLLs (guess).

### Process / memory / misc
- Process: `CreateProcessA` (launches FLServer.exe, see startup), `_spawnl`,
  `GetCurrentProcess`, `GetCurrentProcessId`, `GetStartupInfoA`, `exit`,
  `_exit`.
- Modules and diagnostics: `LoadLibraryA`, `FreeLibrary`, `GetModuleHandleA`,
  `GetVersionExA`, `GlobalMemoryStatus`, `SetUnhandledExceptionFilter`,
  `OutputDebugStringA`, `IsBadWritePtr`, `GetLastError`, `SetLastError`,
  `CompareStringA`.
- Heap: `HeapAlloc`, `HeapFree`, `GetProcessHeap`.
- COM: `CoInitialize`, `CoUninitialize`.
- Time: `timeGetTime`, `clock`, `time`.
- DACOM: `DACOM_Acquire`, `DACOM_GetDllVersion`, `DACOM_CRC::GetCRC32`,
  `LogStream::LogEvent`, `FDUMP`, `stricmp`.
- DALib: `Startup(HWND,const char*)`, `Shutdown(HWND)`, `Dacom`
  (ICOManager*), `FatalErrorFn`, `CriticalWarningFn` (function-pointer
  globals set by WinMain).

### CRT (MSVCRT, 92) — map to libc/compat
- Memory: `malloc`, `free`, `realloc`, `operator new` (`??2@YAPAXI@Z`),
  `memmove`.
- Narrow strings: `strncpy`, `strstr`, `strrchr`, `strchr`, `strspn`,
  `_strdup`, `_strlwr`, `_stricmp`, `_strnicmp`.
- Wide strings: `wcs*`, `_wcsdup`, `_wcsicmp`, `_wcsicoll`, `towupper`,
  `towlower`, `iswcntrl`.
- Formatting: `sprintf`, `_snprintf`, `vsprintf`, `_vsnprintf`, `swprintf`,
  `sscanf`, `swscanf`.
- Conversion: `atoi`, `atof`, `_wtoi`, `_itow`, `_ltoa`, `_ltow`, `_ultow`,
  `wcstol`, `mbstowcs`, `wcstombs`, `toupper`, `isspace`.
- Math and FPU:
  - `ceil`, `floor`, `modf`, `_CIacos`, `_CIpow`, `_ftol`.
  - FPU control: `_control87`, `_controlfp`, `_clearfp`. These make the code
    precision-sensitive; see the x87 rule in `CLAUDE.dm`.
- Other: `qsort`, `rand`, `srand`, `setlocale`.
- C++ runtime: `_CxxThrowException`, `__CxxFrameHandler`, `__RTDynamicCast`,
  `exception` ctors/dtor, `type_info` dtor, `terminate`, `_purecall`,
  `_except_handler3`, `_XcptFilter`.
- Startup: `_initterm`, `__getmainargs`, `_acmdln`, `_onexit`,
  `__dllonexit`, `__set_app_type`, `__setusermatherr`, `_adjust_fdiv`,
  `__p__commode`, `__p__fmode`.

### Common.dll (829) — grouped by class (count)
These are calls into **another game binary**, not platform APIs. The full list
is in `notes/iat.tsv`.
- `(global functions)` 192: `CreateID`, `StringAlloc`, `SafeWaitForSingleObject`, …
- `IObjInspectImpl` 84
- `CShip` 42
- `PhySys` 34
- `Archetype` 26
- `INI_Reader` 23
- `IBehaviorManager` 22
- `Reputation::Vibe` 16
- `Universe` 12
- `EquipDesc` 10
- `CObject` 10
- `CmnAsteroid::CAsteroidField` 10
- `Fuse` / `FuseAction` 10 each
- `HardpointSummary` 9
- `pub::AI` 9
- `CArchGroup` 9
- `EngineEquipConsts` 9
- `Reputation` 8
- `Csys` 8
- `RoomData` 8
- `EquipDescList` 8
- `Timing` 7
- `CELauncher` 7
- `CEGun` 7
- `ThrusterEquipConsts` 7
- 95 further classes with 1–6 imports each, including `ErrorHandler`,
  `RenderDisplayList`, `TextRenderContext`, `FmtStr`, `ID_String`,
  `CPlayerAccount` and `PetalInterfaceDatabase`.

## Porting consequence (important)
The client exe is a thin layer over about 40 Digital Anvil DLLs:
`common.dll`, `server.dll`, `dalib.dll`, `engbase.dll`, `rendcomp.dll`,
`rp8.dll`, `soundmanager.dll`, `system.dll`, `thorn.dll`, `alchemy.dll`, …,
loaded via DACOM, as listed in `game/EXE/dacom.ini`. Much of the gameplay
logic (physics, AI, ship and equipment simulation, INI parsing) lives in
**Common.dll and Server.dll, not in Freelancer.exe**. A port of the exe alone
cannot run. See the open question in `notes/questions.md`.

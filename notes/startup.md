# Startup, main loop, shutdown — WinMain @ 005b2f50

- Evidence comes from `decomp/freelancer.exe/funcs/005b2f50.c` (formerly `export/funcs/`), plus the disassembly of
  005b32c1..005b33e6 for the loop and SEH tail.
- Functions marked † were **not in the old export/** (now replaced by decomp/, which has them). Ghidra never created them
  because they are reached only by pointer. They were decompiled in a
  transient, read-only Ghidra session.
- Signature: `int __stdcall WinMain(HINSTANCE hInst, HINSTANCE, LPSTR cmdline,
  int)` (ends in `ret 0x10`).
- The whole body is a `__try` (SEH frame `005e6de0`, `_except_handler3`).

## 1. Single-instance and working directory
1. `CreateMutexA(NULL, FALSE, "FreelancerClient")`. If
   `GetLastError()==0xb7` (ERROR_ALREADY_EXISTS), it does
   `CloseHandle(mutex)`, `return 1`.
   - On success the mutex handle is never closed; the OS releases it at exit.
2. `GetModuleFileNameA` → `_splitpath`/`_makepath` → `SetCurrentDirectoryA`.
   The CWD becomes the EXE directory, and all data paths are relative to it
   (`..\DATA\...`).
3. **Server-only install check:**
   - If `_access("..\\DATA\\CHARACTERS\\ANIMATIONS\\FACIALMALE.ANM",0)` fails,
     it does `CreateProcessA("FLServer.exe", …)`, closes the handles, and
     `return 1`.
   - So a client launched without character data starts the dedicated server
     instead.
4. `eula_check` 005b2d60:
   - Loads `..\EBUEula.dll`, falling back to `EBUEula.dll`.
   - Calls an export obtained through the MSLU `GetProcAddress` stub
     (`PTR_00616418`).
   - Touches `..\Warranty.rtf` via `GetFileAttributesA`.
   - If the DLL is missing → fatal message box (`MessageBoxW` stub
     `PTR_00616430`) + `exit(1)`.
   - If the user declines → `return 1`.
   - Port note: the EULA dialog can be dropped or replaced.

## 2. Global services
5. `DALib::FatalErrorFn = 005b08a0†` (wide "Freelancer Fatal Error"
   MessageBoxW then `exit(1)`).
   `DALib::CriticalWarningFn = 005b09b0†` ("Freelancer Critical Warning";
   if the user does not answer IDYES (6), it exits; otherwise it continues).
6. `CoInitialize(NULL)`.
7. **`atexit(005b2190†)`** registers the **main shutdown routine** (see §6).
   It runs from CRT `exit()` after WinMain returns.
8. `g_hInstance (0067eca4) = hInst`.
   `g_hResources (0067eca8) = LoadLibraryA("resources.dll")`. That DLL holds
   string tables and dialogs; 004347e0 = load wide string resource.
   `0057d800(g_hResources)` pushes the module onto a resource-module stack at
   0067c400 (std::vector, guess).
9. `DACOM_GetDllVersion(exe path, &maj,&min,&build)`.
   - If it returns 0, `005a5910(L"Freelancer")` stores the app name at
     0067e670 and calls `SetUnhandledExceptionFilter(005a54e0)`. This is a
     crash reporter, guess: `dw15.exe` = Dr. Watson 1.5 is shipped in EXE/.
   - Otherwise the version is forced to 1.0.11.
   - `g_version (0067ecb8) = 005b34b0(maj,min,build)` =
     `((maj<<8 | min&0xff) << 16) | (build & 0xffff)`.

## 3. Command line & config
10. `cmdline_init` 005b33f0 then `cmdline_parse` 005b3400 split `lpCmdLine`
    into a local `{int argc; char* argv[16]; char buf[]}`. Tokens are split on
    space/tab, and `"…"` quoting is honoured.
11. `cmdline_apply` 005b2cb0 reads `-x`/`+x` switches. It applies
    `toupper` to the switch letter, and the argument starts at the third
    character of the token.
    - `G` → `0067ecc0=1`
    - `P<port>` → `atoi`; if non-zero, `CDPClient::SetSourcePort`
    - `S<str>` → `(this=0067e7b8)->005ac710(str)` (direct-connect server
      address, guess)
    - Ghidra's C for this function is garbled. The behaviour above is
      verified from the asm at 005b2cb0..005b2d53.
12. `config_load_freelancer_ini` 005621a0(cfg):
    - Fills defaults: width 0x400 = 1024, height 0x300 = 768, bpp-ish 0x3c,
      `+0x25 = 1` (fullscreen, guess).
    - Then parses `freelancer.ini` sections `[Freelancer] data path`,
      `[Startup] movie_file` (×3 max) and `[Data] gate_tunnels`,
      `jump_effect`, ….
    - Ghidra mis-decodes params because 005b7e90 (`_alloca_probe`) is not
      modelled; `this` = WinMain local `local_5e4`.
13. `ErrorHandler::activate(MD5Hash::GetStatePtr(&0x679d00), 005b0b00†)`.
    005b0b00 is the error-report UI callback. It shows `MessageBoxA`, or
    routes into the in-game UI if a UI is up.
14. `log_init` 005b2800: `GetUserLocalDataPath()` + `"\FLSpew.txt"` →
    `ErrorHandler::new_log(path,-1,7,false,false)`.
15. `config_load_network` 005a82d0: reads `freelancer.ini`
    - `[Freelancer]`: `local_server` (replaces "Server.dll" at 00615aec) and
      `AppGUID` (DirectPlay GUID).
    - `[ListServer]`: `hostname`, `port`.
    - `[Login]`: `name`, ….
16. If `0067ecbc` is set, `fpu_set_exceptions(1)` 005b27c0 runs: it unmasks
    x87 exceptions via `_control87`. Otherwise the default control word is
    kept.
    - 005621a0 also scans argv for `+/-X` (asm 00562510: `cmp al,0x58`; it
      writes 0067ecbc at 00562514) and `+/-Q` (cfg+0x879).
    - Command-line switches are therefore parsed in **two** places, 005b2cb0
      and 005621a0.

## 4. Window creation
17. Window class:
    - `WNDCLASSA{style=CS_DBLCLKS(8), lpfnWndProc=005b2570†,
      hIcon=LoadIconA(hInst,0x67), hCursor=IDC_ARROW,
      hbrBackground=GetStockObject(BLACK_BRUSH=4), name="Freelancer"}`.
    - Registered with `RegisterClassA`.
18. `create_main_window` 004246e0("Freelancer", &g_display_cfg 00679bc0,
    "Freelancer"):
    - Width and height come from cfg+8 / +0xc, defaulting to 640×480.
    - Style is 0x02CA0000 = WS_CLIPCHILDREN(0x2000000)|WS_CAPTION(0xC00000)|
      WS_SYSMENU(0x80000)|WS_MINIMIZEBOX(0x20000).
    - If cfg+0x25 (fullscreen) is 0, the rect is grown with
      `AdjustWindowRect` and the window is placed at CW_USEDEFAULT. Otherwise
      it is placed at 0,0.
    - Result stored in 006679f4 and returned → `g_hWnd (0067eca0)`.
    - Not ShowWindow'd here (guess: the DALib/RP8 device does it).
19. `ShowCursor(FALSE)`; the game draws its own cursor.

## 5. Engine/app init — `app_init` 005b1300 (3.3 KB, returns bool)
Order of calls:
- `DALib::Startup(g_hWnd, NULL)` loads the DACOM components from `dacom.ini`
  (D3D8 RP, sound, …). Then `DALib::OpenData(0x679e0c)` (data root).
- It pumps messages; then requires the `DALib::Data`, `Hardpoint`,
  `Renderer`, `TextureLib`, `MaterialLib`, `VertexBuffer`, `Alchemy` and
  `MaterialBatcher` pointers to be non-NULL. If any is missing it calls
  `FDUMP` and returns false.
- `Async::Startup()`, `Timing::init()`.
- `004247a0`: `Pipeline->vtbl[3](0) >= 0` (device OK), otherwise a fatal box.
- `005b38d0` reads the user-data `PerfOptions.ini` (guess: `GetUserDataPath`
  + `_makepath`, file name not yet confirmed).
- `005b0220` system check: `GlobalMemoryStatus` < 120 MB triggers a warning
  string from resources.dll id 0xcb. If warnings exist, it shows
  `DialogBoxParamA(resources.dll, 0x82, …, 005b05a0)`; the user may cancel →
  return false.
- `004242e0`, `00424dd0`: set up the display mode via
  `Pipeline->vtbl+0x20/…`, otherwise fatal.
- `005b3ec0`, `Alchemy->vtbl+0x34()`.
- **Intro movies:**
  - `MediaPlayer::SetApproach`, `Startup`.
  - For each of up to 3 `[Startup] movie_file` entries (0x679f14 stride
    0x108 bytes): `PlayMovie(hWnd, fullscreen, file)` while `UpdateMovie()`,
    pumping messages; then `StopMovie`.
  - `MediaPlayer::Shutdown`.
- Sound/UI subsystem init: `00579180/00579220/00579290`,
  `00422610/004214d0`, `00565430` … `005650d0`.
- `srand(timeGetTime())` — **non-deterministic RNG seed**.
- `CreateID("Freelancer")` sanity check.
- `DataConfig::startup(&0x679d04, ICliObjFactory 006164a0, progressCB)`:
  Common.dll loads all game INI data.
- `00468c20`, `005b0c30` (more data loading), `0059d5a0`, `00564520`,
  `0067ecb4 = 0059db20()` (root UI/window manager, guess).
- `vtbl+0x20` (= init) on the four state singletons `00575430`, `0054bd30`,
  `00437420` and `0043d560` (see §7).
- `InitializeRichText`, `ReinitializeRichTextFonts`,
  `DeviceTRC::set_image_root`, `004690c0`, `004f70d0`, then one frame tick
  `0042d770`, `00579190`, `00565010`.
- It pumps messages between almost every step through the same inlined
  pump: `0041ef20` (input poll), `PeekMessage`/`GetMessage`,
  `IMEFocus::IgnoreHotKey`, `00577850` (keymap accelerator), then
  `Translate`/`Dispatch`. A `WM_QUIT` during loading aborts init.

## 6. Main loop (asm 005b330c..005b3380)
```
g_inited(0067ecc8)=1
if (g_close_requested 0067ecc9) show_exit_dialog 00471f30(0)   // "NN_Exit"
g_state(0067ecac) = state_switch 005b2a30( initial_state 005b20a0(), NULL )
keymap_activate 00577490("IDR_ALWAYS_PRESENT")   // loads interface\KeyMap.ini + <userdata>\UserKeyMap.ini
for (;;) {
    frame_tick 005b2360();          // frame limiter + accumulate time
    double dt = get_frame_dt 0042d680();
    if (!pump_messages 005b0b60(&exit_code)) break;   // WM_QUIT → exit_code = msg.wParam
    if (g_app_active 00615ba8) frame_update 005b2890(dt);
}
return exit_code;          // initial value 1 (local_20)
```
- **`frame_tick` 005b2360 → 0042d770:** the frame limiter.
  - It busy-waits with `Sleep(1)` on `Timing::Delta` (0x667cf8) until
    `dt >= 1.0/max_fps`. `max_fps` is the .data float 00610a0c, initial
    200.0.
  - dt is clamped to `1.0/min_fps` (00610a08 = 1.0 → max 1 s).
  - The result goes to 00667d40; FPS stats are kept in 00667d50/d60/d6c.
  - It then adds `get_frame_dt` (SP) or `0042d6a0` (MP) into a double at
    0067ecd8.
  - Divisions are done in x87 double (`fdivr QWORD`); Ghidra shows misleading
    `(float)` casts.
- **`get_frame_dt` 0042d680** returns 0.0 if paused (00667d68 != 0),
  otherwise 00667d40.
- **`frame_update` 005b2890(dt):**
  - `Timing::UpdateGlobalTime(dt)` unless paused.
  - MP disconnect handling (`0067ecbd/be/bf`, `00473cb0(0x737)`).
  - `0059e080(dt)` is the UI/world update (guess).
  - For the overlay state 0067ecd0: `vtbl+0x2c()`, `vtbl+0x30(dt)`.
  - For the current state 0067ecac: `next = vtbl+0x38(dt)`.
  - If `next != 0`, `g_state = state_switch(next, g_state)`.
  - If the state becomes NULL, `PostQuitMessage(0)`.
- **WndProc 005b2570†:** first offered to `IMEFocus::WndProc`.
  - `WM_DESTROY` → PostQuitMessage
  - `WM_CLOSE` → DestroyWindow
  - `WM_SETFOCUS`/`WM_KILLFOCUS` → 0041eac0/0041ecf0 (input focus)
  - `WM_ERASEBKGND` → 00425160
  - `WM_ACTIVATEAPP` sets `g_app_active` 00615ba8. In SP it is false while
    minimised; it calls `00424c60(active)`. On deactivation in fullscreen it
    calls `Pipeline->vtbl+0x38`.
  - `WM_SYSCOMMAND`: SC_CLOSE opens the exit dialog or sets 0067ecc9, and
    SC_SCREENSAVE is swallowed.
  - `WM_NCHITTEST` returns 1 in fullscreen.
  - `WM_SYSKEYUP` (0x105) is swallowed.
  - `WM_MOUSEMOVE` → 0041e890.
- **SEH filter (005b33a9):** on any exception it runs
  `restore_display 004247c0(1)`, then `ShowCursor(TRUE)`, then returns
  EXCEPTION_CONTINUE_SEARCH (0). The exception therefore reaches the
  unhandled-exception filter / crash reporter.

### Game states (`state_switch` 005b2a30, ids from `vtbl+0x38` return values)
The current state object is in 0067ecac. Every state has `vtbl+0x34` = leave,
`vtbl+0x30(arg)` = enter → bool, and `vtbl+0x20` / `+0x24` = init/shutdown
(from `app_init` and the atexit handler).

| id | action |
|---|---|
| 1 | leave current, `PostQuitMessage(0)`, state=NULL (quit) |
| 2 | stop music/sounds (00579280(1), 00579290), leave, → state `0054bd30()` enter(0) |
| 3 | stop sounds; drop "NN_Preferences"; → state `00437420()` enter(prev==2) |
| 4 | `00437420()->vtbl+0x28()` (no state change) |
| 5 | `0054bd30()->vtbl+0x28()` (no state change) |
| 6 | leave, → state `00575430()` enter(0) |
| 7 | MP: select character (`005ab1f0(&0x67ea78)`), "Selection of character id %s failed", → 00437420 or 0054bd30 |
| 8 | leave, → state `0043d560()` enter(0) |

`initial_state` 005b20a0 returns 6 by default; 2 or 3 if a saved/MP
environment is set up (`ComputeInitialEnvironment`); on failure it logs
"ComputeInitialEnvironment() failed - exiting Freelancer".
State identification (from the depth-3 review, see `notes/functions.tsv`):
- 00575430 → object `0067a598`, vtable `005e3034`, ctor 00573840. It is the
  **front-end / Intro** state. Its code references Intro.cpp and
  PAGE_CharacterSelect / ServerSelect / AccountSelect. It is the default
  state (6).
- 00437420 → object `006686a0`, vtable `005cae24`, set by initterm ctor
  00437140. It is the **Gameflow** (in-game) state. Its code references
  Gameflow.cpp: "Invalid non-empty location %d in multiplayer".
- 0043d560 → object `00668774`, vtable `005cb094`. Its method 0043d170
  builds a "BriefingParentWindow" with a black image. It is a transition or
  blank screen (guess).
- 0054bd30 → object `00678b98`, ctor 00549300. It is probably the **space-flight** state (guess). Nearby space.cpp methods reference "player", "third_person" and "death".

## 7. Shutdown — atexit handler 005b2190† (runs after WinMain returns)
Calls, in order:
1. `CGunWrapper::Shutdown`, `005791c0`, `Async::Shutdown`.
2. Leave the current state; `005a8260`, `005a9300`, `005abc60` (net/login
   teardown, guess).
3. `vtbl+0x24` (shutdown) on states 00575430, 00437420, 0054bd30, 0043d560.
4. Teardown calls: `00435500`; destroy object `0067244c`; `004b6580`,
   `00469b30`, `0045a140`, `00559d20`; destroy the window tree 0067ecb4;
   `0059d6d0`, `00564540`, `004284f0`.
5. `DataConfig::shutdown`, then `00419e50`, `004f7140`, `004f73b0`,
   `00595400`, `004174a0`, `ShutdownRichText`, `00530fa0`, `0040ef30`,
   `00431850`, `0042b4d0`.
6. `restore_display 004247c0(0)`, `005b4050`.
7. Leak check `Reputation::Vibe::Count()` ("%d REP_INSTANCE(s) orphaned").
8. `0041b150`, `00401380`, `DALib::CloseData`, `DALib::Shutdown(hWnd)`,
   `CDPClient::Cleanup(&0067e7bc)`, `FreeLibrary(resources.dll)`.
9. `ErrorHandler::deactivate`, `CFLIDMaker::Shutdown`, `StringShutdown`,
   `005641d0`, then a tail-jump to `CoUninitialize`.

Static destructors registered by the initterm constructors run around this,
in reverse registration order (see `notes/static_init.md`). Because this
handler was registered during WinMain, *after* all `_initterm` constructors,
**it runs before the static destructors**.

## Callee name table (depth 1)
| addr | proposed name | note |
|---|---|---|
| 005b2d60 | app_eula_check | EBUEula.dll |
| 0057d800 | res_push_module | resource-module stack |
| 005a5910 | app_install_crash_handler | SetUnhandledExceptionFilter(005a54e0) |
| 005b34b0 | app_make_version | packs maj/min/build |
| 005b33f0 | cmdline_init | argc=0 |
| 005b3400 | cmdline_parse | tokenizer |
| 005b2cb0 | cmdline_apply | -g -p -s |
| 005621a0 | config_load_freelancer_ini | |
| 005b2800 | log_init_flspew | FLSpew.txt |
| 005a82d0 | config_load_network | local_server/AppGUID/ListServer/Login |
| 005b27c0 | fpu_set_exceptions | _control87 |
| 004246e0 | platform_create_main_window | |
| 005b1300 | app_init | |
| 00471f30 | ui_show_exit_dialog | "NN_Exit" |
| 005b20a0 | app_initial_state | |
| 005b2a30 | app_state_switch | |
| 00577490 | input_keymap_activate | "IDR_ALWAYS_PRESENT", KeyMap.ini |
| 005b2360 | app_frame_tick | |
| 0042d680 | timing_get_frame_dt | |
| 005b0b60 | platform_pump_messages | |
| 005b2890 | app_frame_update | |
| 005b7e6c | crt_atexit | |
| 005b2570† | platform_wndproc | |
| 005b2190† | app_shutdown | atexit |
| 005b08a0† | app_fatal_error | DALib::FatalErrorFn |
| 005b09b0† | app_critical_warning | DALib::CriticalWarningFn |
| 005b0b00† | app_error_msgbox | ErrorHandler callback |

## Hidden imports (MSLU / unicows static stubs)
- Calls through `.data` pointers 0061640c..00616438 start out pointing to
  load stubs at 005b7420..005b75b7. Each stub calls `005b7b3d(dll, func,
  &slot, …)` and then jumps through the slot.
- These are 12 additional imports not visible in the PE import table:

| slot | dll!function |
|---|---|
| 0061640c | gdi32!ExtTextOutW |
| 00616410 | gdi32!GetCharWidthW |
| 00616414 | gdi32!GetTextExtentPointW |
| 00616418 | kernel32!GetProcAddress |
| 0061641c | kernel32!MultiByteToWideChar |
| 00616420 | user32!CharUpperW |
| 00616424 | user32!EnableWindow |
| 00616428 | user32!GetKeyNameTextW |
| 0061642c | user32!GetWindowLongA |
| 00616430 | user32!MessageBoxW |
| 00616434 | user32!SetWindowLongA |
| 00616438 | user32!SetWindowTextW |

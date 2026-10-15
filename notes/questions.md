# Open questions (recon phase, 2026-10-14)

## Blocking / scope
1. **Scope beyond Freelancer.exe.**
   - The exe imports 829 symbols from Common.dll: game logic such as
     archetypes, physics, AI, ships, INI_Reader and reputation.
   - It loads Server.dll in-process for single player (`local_server`,
     `GetServerInterface`, 005b6f40).
   - It renders through DACOM components (rp8.dll → d3d8) and plays sound
     through soundmanager.dll (DirectSound).
   - Is the port meant to cover Common.dll, Server.dll and DALib/engine
     DLLs too (each needs its own export), or to reimplement their APIs? A
     port of the exe alone cannot run.
2. **RESOLVED 2026-10-15:** `tools/decomp/decomp_module.py` seeds pointer-only
   starts; output in `decomp/`, old `export/` removed. Original note:
   **The Ghidra export is incomplete.**
   - About 24% of .text (440 KB) is outside any exported function.
     Roughly 2,278 function starts are referenced only by pointer
     (vtables, initterm, callbacks) and have no export.
   - Missing examples: WndProc 005b2570, the shutdown handler 005b2190,
     all 1134 initterm ctors, and the atexit dtors.
   - Proposal: re-run export.py after seeding functions from (a) the
     initterm table, (b) every .rdata/.data dword pointing into .text after
     padding or a ret (list in `notes/missing_function_starts.txt`), and (c) `push imm`
     before `call 005b7e6c` (atexit).
   - That changes `ghidra_proj` and `export/`. CLAUDE.dm says not to edit
     export/, so this needs your approval.
3. **RESOLVED 2026-10-15:** decomp_module.py applies the alloca_probe call
   fixup. Original note: **`_alloca_probe` (005b7e90) is not modelled.**
   - Every big-frame function decompiles with garbage `in_stack_*` and
     `extraout_ECX` params. Examples: 005621a0, 005a82d0, 005b1300,
     005b0c30, 005b38d0, 005b08a0, 0040eac0, 00425b30, 0042b030, 004afe30.
   - Fix in Ghidra: mark 005b7e90 as `_alloca_probe` / `__chkstk` (stack
     purge = EAX). This should happen before re-export.

## Decompiler / identification issues
4. **Identical-code folding.**
   - The exported empty function 0053aaa0 `IDPMsgHandler::OnReceive` has 68
     callers because the linker merged identical empty bodies. It appears
     in vector code, e.g. 0057d800, 004f7230 and 00576f40. Treat it as a
     no-op.
   - Likewise, 004d9980 `MD5Hash::GetStatePtr` (return this+4) is a folded
     accessor. WinMain uses it on 00679d00, which is probably not an MD5
     object.
   - 00401e90 is a shared empty `ret` that appears in many vtable slots.
5. Hidden `this`/register args:
   - 005a2990 passes ECX=0067dd90/0067dd68.
   - 0059db20 takes the instance name in EBX.
   - 005a89b0 takes a param in EDI.
   - 005ac710 reads an uninitialised local as an owner pointer.
   - Each needs an asm read before porting.
6. **Command-line switches are parsed in three places:**
   - 005b2cb0: G, P, S
   - 005621a0: X (FPU exceptions → 0067ecbc), Q (cfg+0x879)
   - 004242e0: B, F, M<width>, W (display)
   - The `+`/`-` semantics in 004242e0 are garbled; verify against the asm.
7. 004246e0 is typed `void` but returns the HWND, which WinMain stores in
   0067eca0.
8. What does EBUEula.dll's export return, and is the EULA gate kept in the
   port? (005b2d60)

## Behavioural questions for the port
9. **Message pumping is reentrant.**
   - `app_init` pumps messages between loading steps.
   - The modal error dialogs 00473e00/00473cb0 run nested loops that also
     tick the server (`0067ecd0` vtbl+0x2c).
   - An SDL main loop must allow nested pumping, or the code must be
     restructured. Which approach do you want?
10. **Determinism.**
    - `srand(timeGetTime())` runs in `app_init`, and `rand()%3` picks the
      front-end screen (00564b30).
    - The frame limiter uses `Sleep(1)` and x87 doubles, and FPU precision
      is switched with `_control87` (004249c0/00425080, values 0x18/0x35;
      005b27c0).
    - A Camera static ctor uses fptan/fpatan at init.
    - Must floating-point results match the original bit-for-bit?
11. **Resource strings and XML** come from resources.dll and the
    `[Resources] DLL=` list (0057d800 module table, 00434720 LoadStringW
    clone, RT_HTML type 23). Should they be extracted to files at build
    time, or parsed from the original DLLs at runtime?
12. **Asset cache thread safety.** It sits behind a CRITICAL_SECTION
    (`006166ec`; 0041ade0/0041b030). Which threads exist? `CreateThread` is
    not imported by the exe, so DLLs (Async::Startup, DirectPlay) create
    them.
13. **Shutdown leaves dangling globals.** 0045b380, 004b9bb0 and 005791c0
    destroy UI trees without NULLing the pointers. This is harmless only
    because the process exits; a port that restarts subsystems would hit
    it.
14. **States:** 0054bd30 = space flight and 0043d560 = briefing/black
    transition are guesses (see startup.md).

## Unidentified globals (guess-level)
- `0067c204`, `006107dc`, the map at `006754f8`, the effect cache at
  `00674ce4` (47 buckets), singleton `00672288` (vtable 005d5454) and
  objects `0066d320`/`0066d334`.
- The real logic behind thunk 00575440 is 00564b30 (the [Images] front-end
  loader). It is outside depth 3 and not yet in functions.tsv.

## DA libs port (added 2026-10-15, dacom.dll session)
15. **dacom RegExp component.** It is not ported. Its only user is
    debuglib.dll (dev HTTP server, `dacomsrv.ini`). Port it anyway, for
    completeness? It is a Henry Spencer-style regexp, about 2.5 KB of code
    (065b4a10..065b5e20).
16. **RESOLVED 2026-10-15:** the user said to check the tooling in. It
    lives in `tools/emu/` (`pe_emu.py`, generic, plus `emu_<module>.py`),
    with unicorn in the venv via `tools/requirements.txt`. `make golden`
    re-records the golden files. The dacom and readfile harnesses were
    already lost with their sessions' scratchpads; rebuild them on
    `pe_emu.py` if those ports change. Original question:
    **Differential test harness.** dacom was verified by running the
    original machine code under the unicorn emulator against the port.
    Should that harness be checked in under `tools/`? It needs `unicorn`
    added to the project venv. Today it lives only in the session
    scratchpad.
    - ximage.dll (2026-10-15) used the same approach. Its result is
      checked in as `tests/ximage_golden.txt`, so `make test` needs no
      emulator.
    - Regenerating that golden file after changing
      `tests/ximage_cases.py` does need the harness (`emu_ximage.py`).
      This makes the case for checking the harnesses in stronger.
17. **Shared-object model.** Each original DLL becomes `lib<name>.so`,
    loaded with dlopen by DACOM AddLibrary and exporting
    `dll_process_attach`. This keeps the DLL architecture, and Android can
    dlopen .so files bundled in the APK. The alternative is to link
    everything statically, with a table of built-in modules. Keep dlopen?
18. **Message boxes in headless mode.** The POSIX platform layer answers
    "Ignore" to every FDUMP error/warning box, so the program continues.
    Should an ERROR (severity 1) abort instead, until an SDL box exists?

## readfile.dll (added 2026-10-15)
19. **DOS FindFirstFile never works** in the original: the check after the
    path join is inverted (06b75360). The port keeps that. Does anything
    in the game rely on enumerating a DOS directory through IFileSystem?
    If so, the original behaviour would show up as missing files.
20. **The DOS destructor Releases its parent twice** (06b741b0). That is
    only reachable for "parent" DOS file systems, created when a file
    opened from a directory is not a UTF archive. The port keeps it. Fix
    it if it ever bites?
21. (answered 2026-10-15) `decomp/` is gitignored and regenerable
    (CLAUDE.md layout). `export/` and `export.py` are gone.

## ximage.dll (added 2026-10-15)
22. **x87 precision mode at run time.** The ximage port, like every float
    port so far, assumes MSVC's default 53-bit precision.
    - D3D8 switches the FPU to 24-bit precision unless the device is
      created with D3DCREATE_FPU_PRESERVE. The exe imports `_controlfp`.
    - In BigImage::Draw (06f82060), 24-bit precision changes the last bit
      of some tile step and quad values. That is 23 of the test's log
      lines.
    - Find the CreateDevice flags in rp8.dll, and the exe's `_controlfp`
      calls, before porting float-heavy game code. Then decide whether the
      port should emulate 24-bit rounding.

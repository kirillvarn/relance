# Porting status — what is done and what is next

Last updated: 2026-10-15 (ximage.dll done; readfile.dll done; whole-game decompile prework done). Update this file whenever a module changes state.
Per-module details live in `notes/<module>_dll.md`.

**Status legend:**

| status | meaning |
|---|---|
| **done** | Ported and verified as described |
| **partial** | Ported, with listed gaps |
| **recon** | Analysed only |
| **todo** | Not started |
| **skip** | Not ported, with the reason given |

## Done
| module | orig .text | port | verified | notes |
|---|---|---|---|---|
| system.dll | 2,974 B | `src/dalibs/system/` | asm-level review; smoke test (mock DACOM) under ASan/UBSan; MSVC drop-in build; **now also loads for real through the dacom port** (`make test`) | `notes/system_dll.md` |
| dacom.dll | 20,928 B | `src/dalibs/dacom/` → `build/linux/libdacom.so` | see below | `notes/dacom_dll.md` |
| ximage.dll | 6,880 B | `src/dalibs/ximage/` → `build/linux/libximage.so` | `make test`: 1000 random cases run through the factory against mocks, byte-identical to the original machine code under an x86 emulator (`tests/ximage_golden.txt`). Covers every error path; ASan/UBSan clean; 32-bit layout asserts. | `notes/ximage_dll.md` |
| readfile.dll | 29,758 B | `src/dalibs/readfile/` → `build/linux/libreadfile.so` | `make test`: 308 real UTF archives (98,334 nodes) walked and read through DACOM → DOS → UTF, identical to an independent oracle; API checks under ASan/UBSan; wildcard matcher identical to original code under emulation | `notes/readfile_dll.md` |

**dacom.dll verification:**
- CRC32, continued CRC and `stricmp` were run against the **original
  machine code under an x86 emulator** (unicorn). 308 vectors, including
  high-bit bytes, matched exactly.
- The INI lexer and parser were differentially fuzzed against the original
  `065b14b0` under the emulator:
  - 3,000 random documents per seed, plus the shipped `dacom.ini`. All
    resulting documents match.
  - Where the original hits `int3` or a NULL fault, the port aborts.
- `make test` (`tests/test_dacom.c`, ASan+UBSan) covers:
  - parsing the real `game/EXE/dacom.ini`;
  - SetINIConfig;
  - [Libraries] → AddLibrary, which dlopens `libsystem.so`;
  - SystemContainer creation, LoadSystemComponents, Initialize and Update;
  - EnumerateComponents, RemoveLibrary and ShutDown.
- Those harness scripts (`emu_dacom.py`, `emu_ini.py`) were lost with
  their session's scratchpad. Rebuild them on `tools/emu/pe_emu.py` if
  dacom changes.

**dacom.dll gaps:**
- RegExp component not ported. It is used only by debuglib.dll, a
  dev-only HTTP server loaded from `dacomsrv.ini`.
- No Win32 drop-in build yet. That needs a .def file mapping the C names
  to the mangled C++ exports.
- `DACOM_GetDllVersion` always fails on POSIX, because a shared object
  has no version resource.

## Decompile prework (all modules) — done 2026-10-15
- Every code module in scope is decompiled into `decomp/<module>/`. That
  is all DA DLLs, common, server, content (DLLS/BIN) and Freelancer.exe.
- **Produced by** `tools/decomp/decomp_all.sh`, which runs
  `decomp_module.py`. Its Ghidra projects live in `ghidra_mods/`
  (gitignored).
- **Fixes over `export/`:**
  - Function starts are seeded from every .rdata/.data pointer and every
    `push imm32` into .text: vtables, callbacks, initterm ctors, atexit
    dtors.
  - The MSVC `_alloca_probe` gets Ghidra's `alloca_probe` call fixup, so
    big-frame functions decompile cleanly.
  - For Freelancer.exe this answers questions.md #2/#3 without touching
    `export/` or `ghidra_proj/`: 11,737 functions instead of 8,269.
- **Per module:**
  - `funcs/<addr>.c`;
  - `meta/<addr>.json`: name, signature, calling convention, is_thunk,
    seeded, callees (code only), callers, imports (`DLL!name`, through
    thunks and IAT slots), bytes;
  - `index.tsv`, `callgraph.json`, `exports.tsv`, `imports.tsv`,
    `README.txt`.
- **Commands:**
  - `make decomp` regenerates everything (slow).
  - `tools/decomp/meta_all.sh` rewrites only `meta/`, from the saved
    projects.
- `decomp/` is gitignored (CLAUDE.md). The old `export/` is gone.
- **Still to be read from the asm:** `thiscall` calls through vtables with
  `ecx` implicit, and register-passed arguments. Both decompile badly.
- **Function counts:**

| module | functions | module | functions |
|---|---|---|---|
| system | 30 | rpclocal | 1,692 |
| x86math | 40 | thorn | 1,867 |
| ximage | 37 | remoteserver | 1,991 |
| dacom | 161 | remoteclient | 2,055 |
| zlib | 160 | gundll | 2,701 |
| soundmanager | 183 | server | 3,640 |
| readfile | 203 | alchemy | 5,038 |
| imeui | 218 | content | 7,557 |
| dalib | 224 | common | 8,604 |
| deformable2 | 305 | Freelancer.exe | 11,737 |
| soundstreamer | 339 | rp8 | 1,157 |
| luaprofile | 375 | shading | 651 |
| flmaterials | 433 | movie | 510 |
| rendcomp | 484 | engbase | 520 |

## Shared infrastructure
| piece | state | where |
|---|---|---|
| `include/dacom.h` | ICOManager, IProfileParser/2, factory, aggregation, DACOM exports | done for what dacom/system use |
| `include/dafile.h` | IFileSystem (42 slots), DAFILEDESC, DA_FIND_DATA, IDataBuffer, ISearchPath | done (readfile) |
| `include/platform.h` + `src/platform/platform_posix.c` | **started** | see the list below |
| `include/msvc_compat.h` + `src/compat/msvc_compat.c` | _stricmp, _strnicmp, _splitpath, _makepath, _ftol | grows per module |
| `include/bigimage.h`, `include/rendpipe.h` | IBigImage and BIGIMAGEDESC; partial IRenderPipeline (slots 8/45/46/53) and ITextureLibraryA (slot 44), from ximage's calls | slot names are guesses until rp8.dll is ported |
| DLL loading | DACOM `AddLibrary` → `platform_lib_load`: "x.dll" maps to `libx.so`, dlopen, then calls `dll_process_attach(handle)` (each module provides it, as in `src/dalibs/system/linux_dllmain.c`) | done |
| build | `make linux`, `make test` (check32, dacom, readfile, ximage), `make golden`, `make win32` (system.dll only) | Makefile |
| test tooling | `tools/emu/pe_emu.py` runs original DLL code under unicorn (mock imports, mock COM objects); `tools/emu/emu_<m>.py` per module records `tests/<m>_golden.txt`; `tools/stub32/` for `make check32`. How to use it: `notes/dll_porting.md` | done 2026-10-15 |

**platform_posix.c + platform_posix_file.c so far:**
- debug output
- message box: headless, answers "Ignore"
- debug break
- fopen that resolves `\` paths and is case-insensitive
- exe path
- SearchPath
- dlopen-based LoadLibrary and FreeLibrary
- Win32-style file handles: open, read, size, times, mmap, close
- GetFileAttributes, FindFirst/Next/Close, recursive locks
- a Win32 last-error mapping

## To do — DA engine DLLs (DACOM components, loaded from `[Libraries]` in dacom.ini)
The order is by dependency and size. Each one needs its vtables recovered
from .rdata, because Ghidra misses vtable-only methods. Seed functions from
.rdata pointers as the dacom session did (`notes/dacom_dll.md`, "How it
was analysed").

| # | module | .text | class (guess) | why this order |
|---|---|---|---|---|
| 1 | x86math.dll | 6,904 B | game/library (math) | Small leaf. Watch x87 precision (CLAUDE.md). |
| 4 | zlib.dll | 38,490 B | library | Check whether it is stock zlib; if so, link real zlib instead of porting. |
| 5 | dalib.dll | 24,389 B | game/platform facade | Imported by the exe, common, server. Exports `DALib::*` interface pointers. |
| 6 | engbase.dll | 95,168 B | game (engine base) | |
| 7 | soundmanager.dll, soundstreamer.dll | 32,658 + 44,198 B | platform (DirectSound) | Rewrite the backend on SDL audio and keep the interfaces. |
| 8 | deformable2, flmaterials, rendcomp, shading, thorn, alchemy | 65–302 KB each | game/render glue | |
| 9 | rp8.dll | 377,573 B | platform (Direct3D 8 renderer) | The biggest platform job: a new GL/GLES or Vulkan backend behind IRenderPipeline. |

## To do — game code
| module | .text | state | notes |
|---|---|---|---|
| Freelancer.exe | 1.85 MB | **recon** | `notes/startup.md`, `static_init.md`, `functions.tsv` (311-function depth-3 sample), `recon_summary.md`. Full decompile with vtable/initterm seeding and the `_alloca_probe` fix is in `decomp/freelancer.exe/` (questions #2/#3 resolved). |
| common.dll | 1.28 MB | todo | Game logic: archetypes, INI_Reader, physics, AI, reputation. The exe imports 829 symbols from it. |
| server.dll | 528 KB | todo | Single-player runs it in-process. |
| content.dll (DLLS/BIN) | 1.12 MB | todo | Missions and content scripting. |
| rpclocal.dll, remoteclient.dll, remoteserver.dll, gundll.dll | 200–300 KB each | todo | Networking. Single player needs rpclocal (guess). |
| movie.dll | 102 KB | todo | Intro movies (platform). |
| imeui.dll | 24 KB | todo | IME text input (platform). The exe imports 31 symbols from it. |
| luaprofile.dll | 44 KB | todo | |

## Skip (with reason)
| module | reason |
|---|---|
| resources.dll, equipresources.dll, infocards.dll, misctext*.dll, nameresources.dll, offerbriberesources.dll, serverresources.dll | No code, only resources. Extract the strings and HTML at build time, or parse them at runtime (`questions.md` #11). |
| debuglib.dll | Dev-only HTTP debug server (dacomsrv.ini). |
| unicows.dll | MSLU (Unicode layer for Win9x). |
| drvmgt.dll | Copy-protection driver management (guess). |
| EBUEula.dll | EULA dialog. Whether to keep the gate is `questions.md` #8. |
| dw15.exe, UNINSTAL.EXE | Dr Watson crash reporter and the uninstaller. |
| flserver.exe | Dedicated server. Revisit after the client runs. |

## Open decisions for the user
See `notes/questions.md`. The ones that block the next steps:
- #1: the scope beyond the exe. The table above assumes "port everything
  needed to run the client".
- dacom: should the RegExp component be ported for completeness?
- #22: which x87 precision mode the game runs in (D3D8 FPU handling).
  Settle it before porting float-heavy game code.

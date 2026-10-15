# system.dll — reference port (2026-10-14)

**Port:** `src/dalibs/system/system_container.c` plus the shared header
`include/dacom.h`.
**Original:** `game/EXE/system.dll`, the smallest DLL that contains code:
0xb9e bytes of .text, 7.5 KB file.
- PDB: `C:\work\builds\dalibs\dalibs-build\build\Lib\System.pdb`
- Source: `Src\System\SysContainer.cpp`

**How the port was made:**
- Ported from the full disassembly (`objdump -d`).
- Ghidra auto-analysis found only 15 of the ~30 functions; everything
  reached through a vtable was missing, the same problem as in
  Freelancer.exe.

## What it is
- The DLL exports nothing. `DllMain` (06f117f0) calls `DACOM_Acquire()` and
  registers a factory for the DACOM component class **"SystemContainer"**
  (priority 0x40000000).
- **A SystemContainer:**
  - Reads `dacom.ini` `[System]` through `IProfileParser`. Each line has the
    form `name [= args]`, and `;` starts a comment.
  - For each line, it calls `ICOManager::CreateInstance` with itself as the
    aggregating outer and logs
    `SystemContainer: LoadSystemComponents: Loading '%s' [%s] returned %s`
    through FDUMP.
  - Forwards `Initialize` (IAggregateComponent slot 3) and `Update`
    (ISystemComponent slot 4) to its children.
  - Forwards unknown QueryInterface calls and connection-point calls to its
    children.
- In Freelancer this is what instantiates the `[System]` list in
  `game/EXE/dacom.ini`: VMeshLibrary, DirectX8, SoundManager,
  SoundStreamer, TextureLibrary, MaterialAnimation, MaterialBatcher,
  Alchemy, FxRuntime.

## Function map
| orig | port | note |
|---|---|---|
| 06f11000 | sc_inner_query_interface | iface table @6f1205c {name,offset}; high bit = indirect; then asks children |
| 06f110e0 | sc_aggregate_init | rejects args=="SystemContainer" (-1); sets outer, inner_out, aggregated |
| 06f11130 | sc_destroy | calls **AddRef** on outer (orig), then RemoveAll |
| 06f11160/70/80 | sc_query_interface/addref/release | delegate to outer @+0x1c |
| 06f11190 | sc_remove_all | vtbl slot 6 |
| 06f111e0 | sc_load_system_components | slot 5; 0x2120-byte frame |
| 06f11480 | sc_format | _vsnprintf(buf, 0x2000) |
| 06f114b0 | sc_add_component | slot 7 |
| 06f115e0 | sc_update | slot 4 |
| 06f11610 | sc_initialize | slot 3 |
| 06f11690 / 06f11710 | sc_cpc_slot3 / sc_cpc_slot4 | IDAConnectionPointContainer @+4; initial result -1 / 1 |
| 06f117a0 | sc_register_factory | |
| 06f117f0 | system_dll_process_attach | was DllMain |
| 06f11830/990/870/8a0 | sf_query_interface/addref/release/create_instance | factory vtbl @6f120b8 |
| 06f11990 / 06f119a0 | sc_inner_addref / sc_inner_release | inner vtbl @6f120c8 (06f11990 shared with factory) |
| 06f119e0/f0, 06f11a00 | sc_cpc_query_interface/addref/release | this-4 adjustors |
| 06f11a0a, 06f11a10, 06f11b98 | — | thunks to delete/new/_initterm (compiler-artifact) |
| 06f11a20 | — | _alloca_probe (compiler-artifact) |
| 06f11a4f, 06f11afa | — | _CRT_INIT, _DllMainCRTStartup; the initterm table is empty |

**Layouts:**
- Container: 0x28 bytes.
- Node: 0x14 bytes `{next, iface, created, sys(weak), agg(weak)}`.
- DACOMDESC: 0x14 bytes `{size, component, outer, inner_out, args}`.

These are checked by `_Static_assert` under `-m32`.

## Verification
- **Compile:** clean with `-std=c11 -Wall -Wextra -Wpedantic -fwrapv
  -fno-strict-aliasing -ffp-contract=off` on x86-64.
- **32-bit layout:** asserts pass (`-m32 -ffreestanding`, stub headers;
  no i386 libc is installed).
- **Smoke test:** runs against a mock ICOManager, IProfileParser and child
  components under ASan+UBSan, and passes.
  - Covered: comment and blank lines, trimming, args after `=`, a failed
    create, a child whose Initialize fails being dropped, QI table and
    forwarding, CPC adjustor, the AddComponent desc save/restore, and the
    final release freeing every child.
  - The test is not in the repo; it lives in the session scratchpad
    (`sc_test.c`). Say if you want it under `tests/`.

## Original quirks kept (fidelity), worth deciding on
1. **Dangling `tail` in `sc_initialize`** (06f11610).
   - Unlinking a failed child does not update `tail`.
   - If the failed child was last, a later `AddComponent` or `Load` writes
     through freed memory.
   - This is real UB in the original, kept as-is.
2. **Initialize restarts from the head after dropping a child.**
   - Earlier, successful children get `Initialize` called again. The test
     trace shows VMeshLibrary initialised twice.
   - In aggregated mode it instead returns immediately with the error.
3. **`sc_destroy` calls `AddRef`, not `Release`, on the outer.** That is
   either a deliberate stabilisation or a bug. It is harmless when not
   aggregated.
4. **`DACOM_Acquire()` is called twice in DllMain**, which may leak one
   reference.
5. `Update` has no defined return value in the original (EAX is
   whatever was last loaded); it is ported as `void`.

## Deviations (deliberate, minimal)
- Node fields +8..+0x10 are zeroed. The original left them uninitialised;
  they are always overwritten or only read after a QI that writes them.
- OOM on node allocation in `Load` calls `abort()`. The original would
  dereference NULL+4.
- `vsnprintf` always NUL-terminates; MSVC `_vsnprintf` doesn't on overflow.
- `repz cmpsb` fixed-length compares became `strcmp`. This is equivalent
  because the pattern includes its NUL.
- Dropped Windows-specific calls: `DllMain` became
  `system_dll_process_attach(void*)`; `DisableThreadLibraryCalls` is gone.
- Methods take `void *self`, because the original shares one vtable across
  ISystemContainer, IAggregateComponent and ISystemComponent.

## Takeaways for the bigger port
- DACOM is a small COM clone: string IIDs, aggregation through DACOMDESC,
  and `ICOManager` slots 3 = CreateInstance, 4 = RegisterComponent.
  `include/dacom.h` is the start of that interface set.
- Porting a DLL means porting a DACOM component. Each component needs its
  vtables recovered from .rdata, because Ghidra will not find those
  methods by itself.

## Win32 drop-in build (MSVC) — 2026-10-14
- `tools/win32/build_system_dll.sh` drives VS 2022 Build Tools (MSVC 14.44,
  x86) on the Windows host from WSL. Output goes to `build/win32/system.dll`
  (with .pdb and .map).
- Inputs:
  - `src/dalibs/system/system_container.c`
  - `src/dalibs/system/win32_dllmain.c` (a DllMain shim, Win32 only)
  - `tools/win32/dacom.def`, which becomes the import library for the
    original DACOM.dll
- Flags: `/std:c11 /W4 /WX /O2 /MT /fp:precise /DDACOM_LINK_ORIGINAL`.
  The build is clean under `/WX`.
- **Calling convention:**
  - `DACOM_API` = `__stdcall` on 32-bit Windows only.
  - The map file's decorated names match the original `ret N` sizes, for
    example `_sc_inner_query_interface@12` = orig `ret 0xc` and
    `_sc_add_component@8` = orig `ret 8`.
  - Internal helpers stay cdecl.
- **Imports:** DACOM.dll!`DACOM_Acquire` and DACOM.dll!`FDUMP` (data,
  dereferenced the same way as the original: `mov eax,[imp]; mov eax,[eax];
  call eax`), plus KERNEL32 for the static CRT.
- **Exports:** none, same as the original.
- `/OPT:ICF` folded `sc_inner_addref` and `sf_addref` into one function,
  just as the original shares 06f11990.
- **Not yet run in the game:** Wine isn't installed, and no copy of `game/`
  exists to swap the DLL into.

## Update 2026-10-15: runs on the dacom port
- `libsystem.so` now links against `build/linux/libdacom.so`, the port in
  `notes/dacom_dll.md`. It is no longer left with undefined symbols.
- `src/dalibs/system/linux_dllmain.c` exports `dll_process_attach`, which
  DACOM's AddLibrary (`platform_lib_load`) calls after dlopen.
- `make test` loads it from a `[Libraries]` list and creates a
  SystemContainer. The container reads `[System]` through the manager's
  ProfileParser and creates its children aggregated. Initialize and Update
  then run under ASan/UBSan.
- The smoke test with the mock DACOM is superseded by this test.
- `include/dacom.h` now carries the full ICOManager and IProfileParser
  vtables. The Win32 drop-in still builds clean with `/W4 /WX`, and its
  imports are unchanged (DACOM_Acquire, FDUMP).

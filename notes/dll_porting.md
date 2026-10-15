# How to port a DA DLL — the short playbook

This is distilled from the system, dacom, readfile and ximage ports (2026-10-14/15).
Copy from those ports; don't reinvent. Per-module details live in
`notes/<module>_dll.md`, and the module order is in `notes/porting_status.md`.

## 1. Recon (about 15 min)
```sh
cat decomp/<m>/README.txt decomp/<m>/exports.tsv decomp/<m>/imports.tsv
cat decomp/<m>/index.tsv                       # sizes, seeded starts
objdump -d -M intel game/EXE/<m>.dll > <scratch>/asm.txt
objdump -s -j .rdata -j .data game/EXE/<m>.dll # vtables, strings, tables
```
- **Vtables:** look in .rdata for runs of pointers into .text. Each one is
  a vtable, often an abstract base full of `_purecall` next to the real
  one.
- **Interface tables:** QueryInterface usually walks a `{"1.11_IName",
  offset}` table that ends in NULL. A set high bit in the offset means an
  indirect pointer.
- **Strings:** the FDUMP strings give the source file name and the line
  numbers (`%s(%d) : WARNING:General:%s`).
- **Who calls it:**
  - `grep -l -a "<ComponentName>\|1.11_IFoo" game/EXE/*`
  - `grep -rl <name> decomp/*/funcs`

  The callers show the descriptor layout and how each slot is used.
- **DllMain** almost always does `DACOM_Acquire` → `new factory` →
  `RegisterComponent(f, "Name", prio)` → `Release`.

## 2. Trust the asm, not Ghidra, for
- **thiscall:** an implicit `ecx`, which shows up as `in_ECX` or
  `unaff_ESI` in the decompile.
- **`_alloca_probe` frames:** `mov eax,0x2020; call probe`. Args then sit
  at `[esp+frame+...]`.
- **Locals reused as other variables.** MSVC reuses stack slots and even
  argument slots. Recompute every `[esp+N]` against a fixed frame base: the
  esp after the prologue pushes, plus the pushes outstanding at that point.
- **Output parameters.** Ghidra sometimes writes to the wrong arg; this
  happened in ximage's QI.
- **Ignored return values.** Ghidra may treat a `ret N` stdcall as
  something else. `ret N` gives the arg count: N/4 including `this`.

Read the whole asm for any function longer than about 100 bytes. Keep a
running note of `slot → orig addr → meaning`.

## 3. Write the port
**Layout,** with `src/dalibs/ximage/` (small) or `readfile/` (bigger) as
the template:
```
src/dalibs/<m>/<thing>.c      component(s); `// orig: <addr>` on every function
src/dalibs/<m>/<m>_internal.h shared decls (if more than one .c)
src/dalibs/<m>/<m>_tables.c   GENERATED from the DLL by tools/gen/gen_<m>_tables.py
include/<iface>.h             public interfaces other modules will use
```
**Makefile:** copy the ximage rules: `XIMAGE_SRC`, `libximage.so`,
`asan/libximage.so`, `test_ximage` and `golden-ximage`. Then add the test
run to `test:` and the golden rule to `golden:`.

**Conventions, as the earlier ports did them:**
- **Methods:** `static ... DACOM_API name(void *self, ...)` with a typed
  `const XxxVtbl` table. The vtable is always the first field of the
  object.
- **Unknown vtable slots:** placeholders such as `void (*unkN_M[k])(void);`
  keep the indices right. Comment the slot number on every entry.
- **Object structs:** a comment with the original `new(size)` and the
  offset of every field. Add `_Static_assert`s inside
  `#if UINTPTR_MAX == 0xffffffffu`.
- **Entry point:** `int <m>_dll_process_attach(void*)`, plus
  `dll_process_attach` for `platform_lib_load`. On Linux that is the only
  export.
- **Data tables** (fold tables, CRC tables, pixel formats): extract them
  with a generator script; never retype them. Watch for signed-char
  indexing. dacom and readfile index with `movsx`, so bytes ≥ 0x80 read the
  128 bytes in front of the table.
- **Win32 and CRT calls:** use `platform_*` (`include/platform.h`) and
  `msvc_*` (`include/msvc_compat.h`); add to them as needed. Pure helpers
  like `SetRect` can be inlined.
- **`repz cmpsb` with the length of a NUL-terminated constant** is `strcmp`.

**Fidelity rules:**
- Keep the original's quirks and bugs. List each one in the notes under
  "quirks kept".
- The only allowed deviations: zeroing memory the original left
  uninitialized, `abort()` on OOM where the original crashes, and
  `snprintf` in place of `_vsnprintf`. List every one under "Deviations".
- **Signedness:** follow the asm. `jl`/`jg`/`idiv`/`sar` are signed;
  `jb`/`ja`/`div`/`shr` are unsigned. Use `uint32_t` arithmetic, then cast,
  when wrap-around matters.
- **x87:**
  - Evaluate in `double`, in the original's operation order, and round to
    `float` exactly where the asm does `fstp DWORD`.
  - A value that stays on the x87 stack is NOT rounded. One `fstp` decides
    whether the result matches.
  - `fild QWORD` of `{u32, 0}` is an unsigned → double conversion.
  - `fcomp` + `test ah,0x44` + `jnp` means "equal → skip"; NaN takes the
    other branch.
  - Precision mode is open: `questions.md` #22.

## 4. Verify: a differential test against the original
This is the most valuable step. It found zero bugs in ximage only because
it was there to prove it.
1. **Cases.** `tests/<m>_cases.py` writes random cases with a fixed seed.
   Include edge values and failure injection: the k-th mock call fails.
   Aim to hit every FDUMP line, and count them in the log.
2. **Port runner.** `tests/test_<m>.c`:
   - Load the module through DACOM `AddLibrary`.
   - Get the factory with `EnumerateComponents`, then call it directly.
     This bypasses name routing, so a wrong name or size can be tested.
   - Drive the component against C mocks, and log every mock call and
     every result.
   - Log floats as hex bits, and data pointers as offsets from a known
     base.
3. **Original runner.** Write `tools/emu/emu_<m>.py` on top of
   `tools/emu/pe_emu.py`, copying `tools/emu/emu_ximage.py`. It uses the
   same mocks and the same log format as the C runner.
   - `PeEmu(dll)` maps the DLL and stubs its imports.
   - `attach()` runs CRT init and DllMain. `e.factories[name]` then holds
     each registered factory.
   - `vtable()` builds mock objects; `vcall()`/`call()` run original code.
   - `put_*()` places test inputs in memory.
   - An import that isn't implemented raises with its name. Add it to
     `_default_imports` if it's generic CRT/Win32, or override it in the
     module harness.
   - Setup: `venv/bin/pip install -r tools/requirements.txt` (unicorn).
4. **Golden.** Add a `golden-<m>` rule to the Makefile, as for ximage:
   regenerate the cases, then record the original. `make golden` runs them
   all and writes `tests/<m>_golden.txt`. `make test` compares the port's
   log with it, so the emulator is not needed there. Fix the port until it
   matches.
5. **Mutation check.** Break 2 or 3 subtle things in a scratch copy of the
   port: a float rounding point, a quirk, a min/max. Confirm that each one
   changes the log. If one doesn't, add targeted cases.
6. **Layout.** `make check32`, which `make test` also runs, compiles
   every `src/dalibs/*/*.c` for 32-bit, so the `_Static_assert`s on original
   layouts are checked. It uses stub libc headers in `tools/stub32/`; add a
   declaration there when a port uses a new libc function.

Pure functions (CRC, wildcard matching, parsers) can be fuzzed directly
under the emulator. dacom and readfile did that.

## 5. Write down (before finishing)
- **`notes/<m>_dll.md`** — follow the structure of `notes/ximage_dll.md`:
  - what it is, and its callers;
  - descriptor and object layouts, with the evidence;
  - the slot table (orig → port);
  - algorithms;
  - quirks kept;
  - deviations;
  - verification;
  - the function map.
- **`notes/functions.tsv`** — one row per function. Status is `done`, or
  `skip` for thunks, CRT and compiler artifacts.
- **`notes/porting_status.md`** — move the module to Done and add any new
  shared headers.
- **`notes/questions.md`** — anything you had to guess, or that the user
  must decide.

## Known shared facts
- **ICOManager slots:** 3 = CreateInstance, 4 = RegisterComponent,
  6 = EnumerateComponents, 7 = AddLibrary.
- **Return codes:** GR_OK 0, -1 generic, -2 invalid params, -3 interface
  unsupported, -4 out of memory. -7 is a guess for "not implemented".
- **FDUMP flags:** 0x100001 ERROR, 0x100002 WARNING, 0x100003 NOTICE. The
  message is always `"%s(%d) : <SEV>:General:%s"`.
- **Factory pattern:** `{vtbl, refs, name}`. CreateInstance checks
  `desc->size` exactly, and the name with strcmp.
- **Release pattern:** if refs > 0, decrement; at 0, set refs = 1 and
  destroy.
- **Pixel formats** are int indices (`DAPIXFMT`, `include/rendpipe.h`). The
  tables are in `src/dalibs/ximage/xi_tables.c`; move them to a shared
  place when a second module needs them.
- **`DALib::Pipeline`** (exe) is the rp8 render pipeline. Every slot known
  so far is in `include/rendpipe.h`; extend it as modules call more slots.

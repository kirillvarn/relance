# Project: native port of a 32-bit Windows game (x86, MSVC, msvcrt imported)

Goal: reconstruct the game's logic as portable C that builds on Linux and
Android (arm64) with SDL. The original exe is the specification.

## Layout
- game/            original game files. READ-ONLY. Never modify.
- export/funcs/    Ghidra decompiled C, one file per function (named by address)
- export/meta/     JSON per function: name, signature, callers, callees, bytes
- export/callgraph.json
- notes/           your findings (markdown). This is your long-term memory.
- notes/functions.tsv   address<TAB>proposed_name<TAB>category<TAB>status<TAB>summary
- notes/structs.md      recovered struct layouts, with evidence (which functions)
- src/             ported code (later phases)
- include/         shared headers (types.h, structs.h, globals.h)

## Rules
1. Never edit export/ or game/. They are inputs.
2. Always write findings to notes/ before finishing a task. Assume your
   context will be lost; notes are the only thing that persists.
3. Every claim needs evidence: cite function addresses and the exact
   constants/strings that led to the conclusion. Mark guesses as "guess".
4. Entry point: FUN_005b2f50 is WinMain (confirmed from the CRT startup).
   The CRT startup itself (entry) is discarded. The initterm table from
   0x0060f000 to 0x006101bc holds C++ global constructors and must be ported.
5. The CRT (msvcrt) is imported, not compiled in. Map its calls to Linux libc
   or small compat wrappers; do not decompile it.
6. Classify every function as one of: game, platform (window/input/audio/
   graphics/file), library (zlib, libpng, STL, etc.), crt-wrapper, compiler
   artifact (SEH, thunk, stub). Only game and platform need porting.
7. Do not invent behavior. If the decompiled code is unclear, say so and
   record the open question in notes/questions.md.

## Code conventions (for porting phases)
- Use <stdint.h> types only. Never `long`, never `int` for pointers.
- Original is 32-bit: structs must be defined with explicit field offsets
  (static_assert on offsetof). Store original pointers as uint32_t when they
  are part of serialized data; use real pointers only in runtime-only structs.
- Compile flags: -fwrapv -fno-strict-aliasing -ffp-contract=off
- x87 floats: use float/double as the original did; note any precision-
  sensitive code in notes/.
- Replace all Windows API calls with platform_* functions declared in
  include/platform.h. Game logic must never include windows.h.
- Never hardcode values taken from test snapshots.

## Naming
- Functions: snake_case, prefixed by subsystem (render_, audio_, input_, game_, file_).
- Keep the original address in a comment: // orig: 005b2f50
- Names live in notes/functions.tsv; the tsv is the source

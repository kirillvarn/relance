# dacom.dll — port notes (2026-10-15)

**Original:** `game/EXE/dacom.dll`. It has 0x51c0 bytes of .text and image base 0x065b0000.
- PDB: `C:\work\builds\dalibs\dalibs-build\build\Lib\DACOM.pdb`
- Source file named in FDUMP calls: `Src\DACOM\Dacom.cpp`

**Port:** `src/dalibs/dacom/`, together with `include/dacom.h`.

**How it was analysed:**
- From `objdump -d -M intel` plus a scratch Ghidra project. The scratch
  project was created by a session tool and lives in the scratchpad, so
  `ghidra_proj/` and `export/` were not touched.
- Ghidra found 160 functions after seeding from .rdata/.data pointers.
- Big-frame functions call `_alloca_probe` (065b5ee0). The decompiler
  output for those (065b17d0, 065b25b0, 065b2b20, 065b30e0, 065b3460)
  is garbage, so each of them was read from the asm.

## Exports (ordinal: name, RVA)
| export | orig | port |
|---|---|---|
| DACOM_Acquire | 065b31d0 | returns the static COManager (lazy ctor 065b1f80, onexit dtor 065b3210) |
| DACOM_GetDllVersion | 065b3320 | GetModuleHandle → GetFileVersionInfo → VS_FIXEDFILEINFO: maj=MS>>16, min=MS&0xffff, build=LS&0xffff |
| DACOM_GetVersion | 065b3460 | GetDllVersion("DACOM.DLL"); on success 2 NOTICEs, "compiled against 1.11.173" (consts 1, 0xb, 0xad) |
| FDUMP (data) | .data 065b8a34 | fn ptr; DllMain sets it to the standard dump 065b30e0 |
| stricmp | 065b5e60 | own ASCII-only tolower table @065b8428; returns -1/0/1 |
| DACOM_CRC::GetCRC32(const char*) | 065b4380→60f0 | CRC with case-fold; table @065b8530 is NOT the standard 0xEDB88320 table |
| DACOM_CRC::GetCRC32(const char*, const char*) | 065b4390→60b0 | orig bug: returns 0 if begin==end, else loops forever (never compares with end). Used by no game module. |
| DACOM_CRC::GetContinuedCRC32(ulong, const char*) | 065b43a0→6140 | |
| DACOM_CRC::GetContinuedCRC32(ulong, char) | 065b43b0→6190 | |
| DACOM_CRC::CompareStringsI | 065b43c0 | jmp _stricmp (MSVCRT, locale-aware) |
| LogStream::Startup | 065b43d0 | returns false |
| LogStream::FlushToDisk/LogEvent/LogNamedEvent/Update | 065b43e0 | all one empty `ret` |

**CRC case-fold quirk:**
- The fold table at 065b8930 is indexed with a *signed* char (`movsx`).
- Bytes >= 0x80 therefore read 128 bytes *before* the table, which is the
  tail of the CRC table at 065b88b0..065b892f.
- The port reproduces this with a 384-byte table extracted from the DLL.

**Who imports what:**
- Every DACOM consumer imports some of `DACOM_Acquire`, `FDUMP`,
  `stricmp`, `GetCRC32(const char*)`, `CompareStringsI` and
  `LogStream::LogEvent`.
- The exe and flserver.exe also import `DACOM_GetDllVersion`.
- Nobody imports `GetCRC32(a,b)`.
- This was checked with `objdump -p` on every DLL and exe under `game/EXE`.

## Standard dump 065b30e0 (default FDUMP)
1. Formats with `vsprintf` into a 0x1000-byte stack buffer. This is
   unbounded in the original.
2. Calls `OutputDebugStringA(buf)`.
3. Takes `sev = sign_extend(flags & 0xf)`.
4. If `sev` < 3 (unsigned), it also outputs `"\n"`.
5. For sev 0 or 1, and for sev 2 unless sev-2 was ignored before (flag
   .data 065b8a30), it calls
   `MessageBoxA(NULL, buf, "DACOM::STANDARD_DUMP", 0x40012)`.
   0x40012 = ABORTRETRYIGNORE | ICONHAND | TOPMOST.
6. Handles the answer:
   - **IDABORT:** `PostQuitMessage(-1)` then `abort()`.
   - **IDRETRY:** `int3`, then returns 1.
   - **IDIGNORE:** if sev == 2, sets the ignore flag.
7. Returns 0.

**Flag values seen:**

| flags | severity |
|---|---|
| 0x100001 | ERROR |
| 0x100002 | WARNING |
| 0x100003 | NOTICE |

The text is always `"%s(%d) : <SEV>:General:%s"` with the Dacom.cpp path
and line number.

## COManager (static object at .data 065b8a40, 0x138 bytes)
- vtbl 065b70cc. AddRef and Release (065b20f0) both return 1.

| off | field |
|---|---|
| +0x00 | vtbl |
| +0x04 | u8 initialized (set by initialize 065b2b20) |
| +0x08 | std::map<u32 crc, std::list<FactoryEntry>> (MSVC6 _Tree: head +0xc, nil +0x10, multi +0x14, size +0x18) |
| +0x1c | std::list<Library> (head +0x20, size +0x24); node 0x10 = {next, prev, HMODULE, char *name (fname w/o ext)} |
| +0x28 | IProfileParser* parser (CreateInstance out) |
| +0x2c | parser inner unknown (aggregated; owns the ref) |
| +0x30 | char cur_dll[0x104] — fname of DLL being loaded; stamped into every factory registered during LoadLibrary |
| +0x134 | char* dllpath (operator new) |

**FactoryEntry** (list node 0x18, entry at +8) is
`{IComponentFactory *factory (ref held), char *name, u32 priority, char *dll}`.
The list is sorted by priority, descending. A new entry is inserted
*before* the first entry whose priority is <= its own, so among equal
priorities the newest comes first.

**Vtable slots.** Names come from FDUMP strings where one exists;
otherwise they are guesses.

| slot | orig | name | behaviour |
|---|---|---|---|
| 0 | 2090 | QueryInterface | "1.11_ICOManager" → self; else forward to parser inner (+0x2c) if set; else -3 |
| 3 | 2100 | CreateInstance(desc, out) | desc NULL / comp NULL / comp=="COManager" → self+AddRef. Else lookup crc(comp); missing/empty → -3; try each factory slot 3 until 0; return last result |
| 4 | 21e0 | RegisterComponent(factory, name, prio) | NULL arg → -2; AddRef factory; dll = copy of cur_dll |
| 5 | 23a0 | UnregisterComponent(factory, name) (guess) | name NULL → search all buckets; first entry with that factory removed (+Release); empty bucket erased; not found -2 |
| 6 | 24e0 | EnumerateComponents(name, cb, ctx) (guess) | cb NULL → -2; cdecl cb(factory, name, prio, ctx), 0 stops; name given & missing → 0; always 0 |
| 7 | 25b0 | AddLibrary(name) | see below |
| 8 | 2870 | RemoveLibrary(name) (guess) | match _splitpath fname with stricmp; unregister its factories (2ff0), FreeLibrary; -1 not found |
| 9 | 2940 | ShutDown (guess) | release parser inner, drop all factories, FreeLibrary all, free dllpath, initialized=0 |
| 10 | 2a30 | SetINIConfig(arg, flags) | see below |

**AddLibrary 065b25b0:**
1. Calls `SearchPathA(dllpath, name, NULL, 260, full, NULL)`. On failure it
   logs ERROR line 0x25a and returns -1.
2. Copies the `_splitpath` fname into cur_dll and calls `LoadLibraryA`. The
   DLL's DllMain registers its factories, stamped with cur_dll. On failure
   it logs ERROR line 0x264 and returns -2, and cur_dll is *not* cleared.
3. Calls `GetDllVersion(full)` and logs NOTICE line 0x26a
   `"DLL '%s' [%d.%d.%d]\n"` with the full path.
4. Appends {hmod, fname} to the library list, clears cur_dll and returns 0.

**SetINIConfig 065b2a30:**
1. Calls `DACOM_GetVersion` first and ignores the result.
2. flags&3 == 3 → -2.
3. flags&2: QI "1.11_IProfileParser2" on the parser, then slot 4
   `InitializeFromMemory(arg, strlen(arg))`.
4. Otherwise: parser slot 3 `Initialize(arg, flags&1)`.
5. If the result is 0, calls initialize (065b2b20) and returns 0.
6. Otherwise logs WARNING line 0x2e6 and returns the result. The return
   value of initialize is ignored.

**initialize 065b2b20:** returns at once if already initialized. Otherwise
it works on section [DACOM]:
- **`DllPath`:**
  - An absolute value (starts with `\` or `/`, or has `:` second) is used
    as is.
  - Otherwise the value is relative to the exe dir (GetModuleFileName,
    split, make), with its trailing separator stripped:
    - A leading `..\` pops one directory. The "invalid path" branch at
      2c57 is dead code, because the pointer is never NULL.
    - A leading `.\` is skipped.
    - **Orig bug:** `.` followed by any other char loops forever.
    - The result is `dir + "\" + rest`.
- **`IgnoreDACOMEnv`:**
  - `true` (strncmp 4) or a nonzero `atoi` → skip the env.
  - `false`, any other value, a missing key or a missing [DACOM] section
    → `getenv("DACOM")`, which overrides dllpath when set.
- Logs NOTICE line 0x354 with the dllpath, then runs `load_libraries`
  (065b2eb0). If that fails it logs WARNING line 0x357 and returns 0;
  otherwise it sets initialized=1.

**load_libraries 065b2eb0:**
- Missing [Libraries] → ERROR line 0x369, return false. Otherwise NOTICE
  line 0x370.
- For each line (ReadLine index 0..):
  - Trims leading whitespace and skips `;` lines.
  - Quoted names are broken: the quote loop tests the first char (the
    quote) and stops, so the name becomes `"`.
  - Otherwise the name is cut at whitespace or `;`.
  - Calls AddLibrary.
- Returns true if any AddLibrary returned >= 0. An empty section returns
  false.

**ctor 065b1f80:**
1. Registers factories "ProfileParser" (vtbl 065b7108) and
   "ProfileParser2" (vtbl 065b70f8), both at priority 0x80000000, with
   cur_dll "".
2. Creates "ProfileParser2" aggregated: desc {0x14, "ProfileParser2",
   outer=this, inner_out=&+0x2c, args=0}, out=&+0x28.

**dtor 065b3210 (onexit):**
- Frees the library list *without* FreeLibrary.
- Erases every bucket, which Releases the factories.
- Does not touch the parser or dllpath.

## ProfileParser component (0x28 bytes, factory 065b4750)
- The factory checks `desc->size == 0x14` and that `desc->component`
  equals the factory name (strcmp); otherwise it returns -3.
- Aggregation is supported.
- The initialise hook 065b4420 always returns 0.

| off | field |
|---|---|
| +0x00 | IProfileParser vtbl 065b7144 |
| +0x04 | IProfileParser2 vtbl 065b7118 |
| +0x08 | IniDoc (list<Section*> head +0xc, size +0x10, current section +0x14) |
| +0x18 | outer (desc->outer or &inner) |
| +0x1c | inner vtbl 065b7168 {QI 4860, AddRef 4740, Release 4920}, refs +0x20, owner +0x24 |

**IProfileParser** (065b7144):

| slot | method |
|---|---|
| 0–2 | delegate to the outer |
| 3 | Initialize(file, flags) (4430). flags&1 → -1; else load file, 0 or -1. A NULL file just clears the doc. |
| 4 | EnumerateSections(stdcall fn(parser, name, ctx), ctx) (4460). Stops when fn returns 0 (result 0); otherwise 1. A NULL fn gives 0. |
| 5 | CreateSection(name, mode) (44b0). mode != 3 → NULL; else sorted case-insensitive lookup. Returns the Section* as the handle. |
| 6 | CloseSection (44d0). Returns 1. |
| 7 | ReadLine(sec, i, buf, len) (44e0). |
| 8 | ReadKey(sec, key, buf, len) (4540). |

**ReadLine** (44e0):
- i is 0-based. A NULL buf returns the line length without the NUL:
  `strlen(k)`, or `strlen(k)+3+strlen(v)` for `"k = v"`.
- A key-only line is strncpy'd and terminated.
- A `k = v` line uses **unbounded** `sprintf("%s = %s")`.
- Returns strlen(buf), or 0.

**ReadKey** (4540):
- Finds the first key by `_stricmp` and copies its value (strncpy,
  terminated).
- A key with no value gives "".
- Returns strlen(buf), or 0 when the key is missing.
- A NULL buf returns strlen(value), or 0.

**IProfileParser2** (065b7118) is the same, plus:
- slot 4 = InitializeFromMemory(data, size) (45a0);
- slot 9 = EnumerateSections(cbobj, ctx) (45c0), calling
  `cbobj->vtbl[0](cbobj, IProfileParser2*, name, NULL, ctx)`;
- slot 10 = EnumerateKeys(cbobj, sec, ctx) (4620), calling
  `cb(cbobj, pp2, key, value, ctx)`.

## INI document / lexer / parser (065b1000..065b1f80)
- **Section** (0x10): `{char *name, list<Pair*> pairs}`.
- **Pair** (8): `{char *key, char *value or NULL}`.
- Sections are kept sorted with `_stricmp`. A new section goes after any
  equal names, so duplicates are kept; lookup returns the first.
- Pairs keep file order. Duplicate keys are kept; ReadKey finds the first.

**Lexer** (0x418 bytes):
- Fields: `{data, size, cursor, cur char (signed), text[0x400], len, last token}`.
- Tokens:

| token | meaning |
|---|---|
| 0 | word |
| 1 | `@include` (stricmp) |
| 2 | `[` |
| 3 | `]` |
| 4 | `=` |
| 0x65 | `\n` |
| 0x66 | EOF |

- ` \t\r` are skipped.
- `;` skips to `\n`, which is then returned as 0x65.
- Words end at any char of `" \r\n\t[];="`, at NUL (strchr matches the
  terminator) or at EOF.
- **Orig:** there is no bound on word length, so a word of 0x400+ chars
  overwrites `len`. The port truncates instead (deviation).

**read_until 065b1650(lex, stop, 0x400, out):**
- Joins tokens' texts with single spaces until it sees `stop`, `\n`,
  EOF or 100.
- Returns: EOF → 0x65; overflow (`out_len + tok_len + 1 >= size-1`) → 100.

**parse 065b17d0:**

| token | action |
|---|---|
| word | key = word + (rest up to `=`/EOL, joined with " "). On `=`, the value is the rest of the line. Appended to the *current* section. |
| `[` | Reads to `]`, then adds a section and makes it current. A missing `]` (EOL) is ignored; overflow → fail. |
| `@include` | The next token must be a word, else fail. The path is resolved against the includer's drive+dir when it has no drive and its dir doesn't start with `\`. The file is parsed with the same doc, so the current section carries over; its result is ignored. Then one char is skipped. |
| `\n` | ignored |
| `]`, `=` or overflow | `int3` |

- **Orig:** a key before any section dereferences NULL. The port aborts.

## Not ported yet
- **RegExp component** (factory registered from DllMain via 065b5c40,
  priority 0x40000000):
  - Implemented by 065b4a10..065b5e20. Spencer-style regcomp/regexec:
    startp[10] at +0, endp[10] at +0x28.
  - Only debuglib.dll uses it (string "RegExp"). DebugLib is listed only
    in dacomsrv.ini, the dev HTTP server, so it is not needed by the client.
- **Win32 drop-in build of dacom.dll.** It would need a .def file that
  maps the C names to the mangled C++ export names.

## Compiler artifacts / library (not ported)
- 065b3570..065b4100: MSVC6 std::map _Tree internals (insert, find,
  erase, iterator ++, buynode, copy).
- 065b5ec2 operator delete thunk, 065b5ece operator new, 065b5ee0
  _alloca_probe, 065b5f0f/5f3b _onexit/atexit, 065b5f5a _CRT_INIT,
  065b6005 _DllMainCRTStartup, 065b5eb0.. import thunks.
- The initterm table 065b8000..065b8004 is empty.

## Function map (orig → port)
| orig | port | file |
|---|---|---|
| 065b1000/1080 | pair_new / pair_free | ini_doc.c |
| 065b10b0/1110 | section_new / section_free | ini_doc.c |
| 065b11c0 | section_add_pair | ini_doc.c |
| 065b1230 / 12a0 | ini_section_read_line / ini_section_line_length | ini_doc.c |
| 065b1300 / 1380 | ini_section_read_key / ini_section_key_length | ini_doc.c |
| 065b13e0 / 1420 / 14f0 | ini_doc_init / ini_doc_destroy / ini_doc_clear | ini_doc.c |
| 065b1480 / 14b0 | ini_doc_load_file / ini_doc_load_memory | ini_doc.c |
| 065b1550, 1570 | ini_doc_find_section (1550 is a jmp thunk) | ini_doc.c |
| 065b1560 | — (identity: handle → section) | — |
| 065b15c0 | ini_doc_add_section | ini_doc.c |
| 065b1650 | read_until | ini_doc.c |
| 065b16f0 / 1760 | parse_file / parse_memory | ini_doc.c |
| 065b17d0 | parse / parse_frame | ini_doc.c |
| 065b1b40/1b60/1b80/1c30/1c90/1ca0 | lex_init/lex_free/lex_load_file/lex_load_memory/lex_terminate/lex_reset | ini_doc.c |
| 065b1cc0 / 1f70 | lex_scan / lex_token | ini_doc.c |
| 065b1f80 | com_construct | comanager.c |
| 065b2090..2a30 | com_* vtable methods (see the COManager table above) | comanager.c |
| 065b2490, 4210, 4320 | entry_free | comanager.c |
| 065b27e0 | dacom_format | dacom_exports.c |
| 065b2810 | — (Library copy ctor, inline) | comanager.c |
| 065b2b20 | com_initialize (+ com_resolve_dllpath) | comanager.c |
| 065b2eb0 | com_load_libraries | comanager.c |
| 065b2ff0 | com_remove_dll_factories | comanager.c |
| 065b30e0 | dacom_standard_dump | dacom_exports.c |
| 065b31a0 | DllMain → static init of FDUMP (RegExp registration not ported) | dacom_exports.c |
| 065b31d0 | DACOM_Acquire | comanager.c |
| 065b3210 | com_destruct (atexit) | comanager.c |
| 065b3320 / 3460 | DACOM_GetDllVersion / DACOM_GetVersion | dacom_exports.c |
| 065b3520 | — (list erase, inline in com_destruct) | comanager.c |
| 065b3570..4100 | bucket_* (std::map replaced) | comanager.c |
| 065b4160, 4260 | — (entry / list copy ctors used by map insert) | — |
| 065b4380..43e0 | DACOM_CRC_*, LogStream_* | dacom_exports.c |
| 065b43f0 / 4400 | ini_doc_init / ini_doc_destroy at ProfileParser+8 | profile_parser.c |
| 065b4420 | — (init hook, always 0) | profile_parser.c |
| 065b4430..4a00 | pp_*, pp2_*, pp_inner_*, ppf_* | profile_parser.c |
| 065b46a0 / 46d0 | profile_parser_factory_new | profile_parser.c |
| 065b4a10..5aa0, 5ac0..5e20, 5c40 | RegExp engine, component and registration — **not ported** | — |
| 065b5c90 | ppf_release (shared with the RegExp factory) | profile_parser.c |
| 065b5e60 | DACOM_stricmp | dacom_exports.c |
| 065b60b0/60f0/6140/6190 | DACOM_CRC_GetCRC32Range/GetCRC32/GetContinuedCRC32/…Char | dacom_exports.c |

## Platform mapping
| Win32 / CRT in the original | port |
|---|---|
| OutputDebugStringA, MessageBoxA, PostQuitMessage, int3 | platform_debug_output, platform_message_box_abort_retry_ignore, platform_post_quit, platform_debug_break |
| SearchPathA / LoadLibraryA / FreeLibrary | platform_search_path / platform_lib_load / platform_lib_free |
| GetModuleFileNameA(NULL) | platform_exe_path |
| GetModuleHandleA + GetFileVersionInfo* + VerQueryValueA | platform_lib_version (always -1 on POSIX) |
| fopen | platform_fopen (handles `\` paths, case-insensitive) |
| _stricmp, _splitpath, _makepath | msvc_stricmp, msvc_splitpath, msvc_makepath |

## Deviations (deliberate)
- **Unbounded writes became bounded:**
  - a lexer word longer than 0x400 chars (orig corrupts `len`);
  - `ReadLine`'s `sprintf("%s = %s")`;
  - the standard dump's `vsprintf`;
  - `_vsnprintf` → `vsnprintf`, which always NUL-terminates.
- **`int3`, NULL faults and infinite loops become `abort()` via
  `dacom_trap`:**
  - a `]` or `=` token at the start of a line;
  - an over-long key or value;
  - a key before any `[section]`;
  - `DllPath` of the form `.x`;
  - `GetCRC32(a, b)` with a != b.
- **FDUMP** is initialised statically instead of in DllMain.
- **COManager construction:** the original builds the COManager during
  DACOM's DllMain, through the RegExp registration. The port builds it on
  the first `DACOM_Acquire` call. Nothing observable happens in between.
- **Headless message box:** answers Ignore, so ERROR/WARNING dumps do not
  stop the program. An SDL message box will replace it.
- **Search order (guess):** a name with its own `.\`/`..\` prefix or an
  absolute path is resolved only from the cwd (`platform_search_path`).
  In Freelancer the two readings agree.

## Original quirks kept (fidelity)
- Quoted names in `[Libraries]` become `"`.
- `cur_dll` is not cleared when LoadLibrary fails.
- A relative DllPath leaks the old string.
- After `ShutDown`, `parser` dangles.
- The onexit dtor releases factories but neither unloads libraries nor
  releases the parser.
- The `ReadLine` length is `strlen` of the formatted line.
- `@include` drops the character after the file name.
- An include is resolved against the includer's dir only when its dir
  does not start with `\` (a `/`-rooted path counts as relative).
- `stricmp` export returns -1/0/1 while `CompareStringsI` returns the
  byte difference.

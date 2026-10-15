# Static initializers — _initterm table 0x0060f000..0x006101bc

> 2026-10-15: `export/` was replaced by `decomp/freelancer.exe/`, which includes the
> functions this note lists as missing from export/. Counts below are from the old export.

- **Full per-entry table:** `notes/static_init.tsv`, 1134 rows.
  - Columns: slot, init_fn, kind, target_globals, detail, atexit_dtor,
    constructs, evidence.
- **How the table was produced:**
  - Pointers were read from the exe. Each target was disassembled with
    objdump and decompiled in a transient read-only Ghidra session.
  - The `kind` and `detail` columns are mechanical.
  - Object rows were hand/agent-annotated.
- **Not in export/:** Ghidra had **no function at any of the 1134 targets**,
  and none of their atexit destructors exist either. None of this code is in
  export/.
- **Layout:**
  - Slot 0x0060f000 is NULL, the MSVC `__xc_a` sentinel. 1134 non-null
    entries follow, ordered by address (= link order of translation units).
  - The table is merged; there is no separate `__xi` C-initializer table in
    this range.

## Summary by kind
| kind | n | what it is | port action |
|---|---|---|---|
| const_copy | 574 | `g = <float/dword from .rdata>`: header constants that MSVC6 initialised dynamically | make them `static const` in C; no runtime init |
| scalar_init | 252 | stores immediates/other globals into BSS (zero, -1, flags, bitfields, vtable ptrs) | static initializers in C |
| object_ctor | 222 | real construction, often + `atexit(dtor)` | explicit `static_init()` in slot order |
| create_id | 74 | `g = CreateID("name")` (Common.dll string → hashed ID) | compute at init (needs CreateID port) |
| crc32_id | 4 | `g = DACOM_CRC::GetCRC32("…")` e.g. "font" | same |
| empty | 6 | bare `ret` (00421150, 0048d6f0, 004c3ad0/ae0/af0, 004cf020) | drop |
| other | 2 | see below | port |

**Per-TU header constants:**
- 185 triples of `(-0.6f, -0.6f, +0.6f)` (0xbf19999a, 0xbf19999a,
  0x3f19999a) appear, one per TU. Example: slots 0060f004..0060f00c copy
  .rdata 005c732c/5c7330 → 0061645c/58/54.
- So **≈185 translation units** include a common header that defines three
  float constants.
- Port note: one shared definition.

## Object constructors (222 + 2 "other")
- **UI window/control class factories (65):**
  - Each is a static object `{vtbl; next; uint namelen; char name[32]}`.
    The base vtable 005cb554 is overwritten by a per-class factory vtable
    whose slot 0 is `create(a, b)`.
  - Registered by `FUN_0059dab0` into an intrusive LIFO list at
    `DAT_0067dcec`.
  - Looked up by `FUN_0059db20(…, className, a, b)` (61 callers). It does a
    strcmp, then `vtbl[0](a, b)`, then copies the instance name (EBX) to
    obj+0x18.
  - Names include NN_* NeuroNet dialogs, generic controls (ButtonControl,
    ScrollControl, …), UI* widgets and Wire*. Examples: 0060f29c "NavBar",
    0060f4e4 "MsgWin", 0060f514 "NN_CommodityByBase", 00610014
    "UIStaticText".
  - The atexit dtor is `mov ecx,obj; jmp 00579380`, which resets the vtable
    and unlinks via `FUN_0059dad0`.
- **HUD component factories (12):**
  - Names: Steer, Button, Receiver, ContactList, Core, CruiseProgress,
    DamageIndicator, Maneuvers, Status, Target, Targetable_Objects,
    Waypoint.
  - Same node layout, base vtable 005d6e30. They are appended FIFO to
    `DAT_00673510`/`00673514` (head/tail) via `FUN_004c72b0`.
  - Consumed by the HUD ini loader `004c73d0`: for each section it calls
    `is_header(name)`, then `vtbl[0]()`.
- **PerfOption registrations (36):**
  - 25 are contiguous at slots 0061014c–006101ac, for example
    "AtmosphereMaterialConfig", "max_submitted_sounds",
    "DIFFICULTY_SCALE". The other 11 are scattered: "mouse_speed",
    "gamma_ramp", "SunEffect".
  - Each does `new` of an object {vtbl, name, string id, …,
    float value=-1.0 @+0x14} and pushes it onto a function-static
    `std::list<PerfOption*>` at `DAT_0067ed04`. That list is created lazily
    with guard bit 1 of `DAT_0067ed0c`, and its atexit handler is 005b3640.
  - The list is persisted by `005b3ec0` (sections `[PerfOptions]
    "%s = %.2f"`, [PerfVersion], [Display]) and loaded by `005b38d0` from
    PerfOptions.ini.
  - The objects are never freed.
- **std::list heads (29):**
  - 27 are inlined (`new(N)` self-linked sentinel). Most have 0xc nodes,
    i.e. pointer values.
  - Examples:
    - 0060f094: node 0x170, element dtor 00416490
    - 0060f6b8/bc: lists of `FmtStr`
    - 0060f3cc: `list<BaseWatcher>`
- **std::map/set (MSVC _Tree) (24):**
  - Ctors are 004706b0 (node 0x1c), 004c5a10 (0x18), 0041dd20 (0x5c, also
    caches begin) and others. value_type size = node size − 0x10.
  - Layout: +0 allocator/compare bytes, +4 head, +8 **per-instance nil
    node**, +0xc `_Multi=0`, +0x10 size.
  - Key and value types are not yet derived.
- **3-dword zero headers (11):** `FUN_00542320` {count, head, tail}, an
  intrusive list. Objects 00678a3c..00678ab4 (stride 0xc), slots
  0060fbf0..0060fc18, no dtor.
- **std::vector (5):**
  - 0059ec40 ×3: 0060fbec, 00610060, 0060f968
  - 0060f088: vector + extra dword
  - 0060fa64: `vector[5]` via `eh vector constructor iterator` 005b7fba
- **RenderDisplayList (5):** Common.dll ctor/dtor imports, slots
  0060f4ec..0060f4fc.
- **Event listeners (4):** 0060f504, 0060fd84, 00610044, 0061013c.
  - Each calls `FUN_005760d0(id)`, which goes to 00575e00. That inserts
    (id, this) into a lazily created global multimap `DAT_0067c3a4`.
- **UI window singletons (7):** 0060fee8..0060ff04 (base 00591ae0/00591e30).
  The state objects come from separate ctors: Gameflow state vtable
  005cae24 via 00437140; 0043d120 sets vtable 005cb094.
- **Common.dll class instances:**
  - `Timing::Delta` (0060f18c)
  - `EquipDescList` (0060f720)
  - `CacheString` ×2 (0060fce8/fcec)
  - `BaseWatcher` ×2 (0060f730, 0060fcd0)
- **One-offs:**
  - `CRITICAL_SECTION` (0060f0b8; `InitializeCriticalSection`; guards the
    asset cache, see functions.tsv 0041ade0)
  - guess: Camera (00610040; 320×240, fov 35°, 4/3; uses `fptan`/`fpatan`
    at init — **x87 precision-sensitive**)
  - CDPClient-derived MP client (006100fc; "SinglePlayer",
    "FLListServer2"). Its dtor uses ecx=0067e7bc while the init writes
    0067e7b8; the base is at +4.
  - guess: vertex-buffer wrapper, FVF 0x142 (0060fd00)
  - a large world/system composite (0060fcd4)
  - list+tree composites (0060f1e0, 0060f248)
  - fixed arrays (0060f1a0 8×3 floats = -1; 0060f918 47×12 zero;
    0060f350 64 dwords + 64 bytes; 0060ffa0 100×{buf,n} freed by dtor)
  - wide-char buffer `L"-.0123456789MK%/"` (0060f08c, atexit 004135e0)
- **Rows reclassified to scalar_init:**
  - 0060f188 `timeGetTime()` start stamp
  - 0060ffb0 table lookup `005b7010(0)`
  - 0060faa8 `StringAlloc("ROOT")`

### The two "other" rows
- **0060f8c4 (004f5310):** `Vector{0,0,2.0f}` at 00674bcc. The 2.0 comes
  from .rdata 005d97f0.
- **0060fe58 (00562750):** fills a .data table of 5×0x20-byte records at
  0061482c..006148cb.
  - Contents: floats -0.2, 0.0 and ±0.06/±0.12, ids 0x60073..78 and
    7000..7005.
  - It **reads 0067a440/0067a43c, which slots 0060fe50/0060fe54 set just
    before it.**
  - guess: the ServerFilterDialog layout table, since the dialog registers
    at 0060fe4c.

## Ordering & porting notes
- Keep slot order in a generated `static_init_all()`. Known hard dependency:
  0060fe58 after 0060fe50/54.
  - The 574 const_copy rows were not scanned for other readers. They become
    compile-time constants anyway, which removes the issue.
- The registries (UI LIFO, HUD FIFO) only need zeroed heads. Lookup order
  matters only with duplicate names; none were observed.
- Common.dll types must exist before static init: CreateID, GetCRC32,
  Timing::Delta, RenderDisplayList, EquipDescList, CacheString,
  StringAlloc, CDPClient.
- **Destructors:**
  - atexit dtors run in reverse registration order. The app shutdown
    handler 005b2190 is registered in WinMain, after all of these, so it
    runs **first**.
  - Some dtors are guarded by "destroy once" flags (0066dab8, 0066da8c,
    00675010, 00675098, 006753fc, 006797c8), probably template statics.
  - Three dtors are empty (00421280, 00452f60, and slot 00610134).
- **Accounting:**
  - The 1134 init functions plus their ≈150 atexit dtors are ≈1300 tiny
    functions that are **not** counted in export/.
  - Most become declarative C data, not ported code.

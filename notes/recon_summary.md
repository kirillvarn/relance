# Recon summary — function counts (2026-10-14)

## Functions in export/ (Ghidra): 8269
| group | n | how identified |
|---|---|---|
| `Unwind@…` SEH unwind funclets | 3501 | name prefix; all at 0x5b8350..0x5c5a80; compiler artifact |
| Ghidra thunks (`is_thunk`) | 65 | meta `is_thunk` (e.g. 005b7e84 operator new → IAT) |
| `thunk_FUN_*` jmp stubs | 20 | name prefix (5-byte `jmp`) |
| statically linked CRT tail (≥ 0x5b7000) | 43 | address range: _alloca_probe 005b7e90, atexit 005b7e6c, eh vector iterators 005b7fba, MSLU stubs 005b7420.., startup |
| everything else (`FUN_*` + 105 named) | 4640 | game + platform + inlined library templates |

## Not in export/ (missing from Ghidra's analysis)
- **2278** function starts are referenced only by pointer (.rdata/.data)
  and start after padding or a ret (`notes/missing_function_starts.txt`).
  Of these, 1134 are the initterm ctors; the remaining ≈1144 are mostly
  vtable methods and callbacks (WndProc, shutdown).
- About 150 atexit dtors are referenced only as `push imm`.
- Cross-check: 440 KB of .text (24%) is not covered by any exported
  function body. A boundary count by `ret`+padding inside those gaps gives
  ≈2,476 pieces.

**Estimated total: ≈10,700 function bodies.** Of these, ≈3,500 are unwind
funclets, so there are ≈7,200 real functions.

## Classification estimate
| class | estimate | reasoning |
|---|---|---|
| compiler artifact (unwind, thunks, stubs, CRT tail) | ≈3,650 | 3501 + 65 + 20 + 43 + a few; exact |
| static-init stubs + atexit dtors | ≈1,300 | 1134 + ≈150; ~85% are constant copies or registrations that become C data, not code |
| library (STL templates: _Tree/list/vector/basic_string, inlined) | ≈1,000–1,300 | 18% of the depth-3 sample (55/311) were library. Applied to ≈5,800 non-init real functions → ≈1,050. The 24 distinct `_Tree` node sizes in static init alone suggest many instantiations |
| crt-wrapper | ≈100 | 2% of the sample |
| platform (window/input/D3D-via-Pipeline/GL-emu/sound/file) | ≈600–900 | 17% of the sample (54/311). The sample is biased high near WinMain, so the true share is probably 10–15% overall |
| **game logic** | **≈3,500–4,000** | the remainder of ≈5,850 real non-init functions (4,640 exported + ≈1,150 missing vtable methods) after library, CRT and platform. 55% of the sample was game; deeper code (UI screens, HUD, space objects, gameflow) is almost all game |

**Depth-3 sample** (`notes/functions.tsv`, 311 functions from WinMain plus
pointer roots 005b2570, 005b2190, 005b08a0, 005b09b0, 005b0b00):

| category | count |
|---|---|
| game | 171 |
| platform | 54 |
| library | 55 |
| compiler-artifact | 25 |
| crt-wrapper | 6 |

**Caveat:** "game" in Freelancer.exe is mainly client-side code: UI/NeuroNet
screens, HUD, gameflow, client space objects and rendering glue. The
simulation itself (physics, AI, ships, economy) lives in **Common.dll and
Server.dll** and is not counted here (see questions.md #1).

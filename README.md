# Nintendogs Dachshund decompilation (USA)

<!-- bytematch:start -->
[![Code](https://bytematch.dev/liolu/nintendogs-dachshund-decomp.svg?label=Code&measure=matched_code_percent)](https://bytematch.dev/liolu/nintendogs-dachshund-decomp) [![Data](https://bytematch.dev/liolu/nintendogs-dachshund-decomp.svg?label=Data&measure=matched_data_percent)](https://bytematch.dev/liolu/nintendogs-dachshund-decomp) [![Functions](https://bytematch.dev/liolu/nintendogs-dachshund-decomp.svg?label=Functions&measure=matched_functions)](https://bytematch.dev/liolu/nintendogs-dachshund-decomp)
<!-- bytematch:end -->

Nintendo DS, game code `ADGE`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████████░░░░░░░░░░░░` **41.04%** of the code matched · data 100.00% · 5369/8610 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Game code: `src/open/` | 2168 | 1438/2168 | 19.96% |
| Auto-matched (raw m2c output, to clean up) | 3654 | 3654/3654 | 18.10% |
| Reused from other decompilations, not merged into files yet | 277 | 277/277 | 2.98% |
| Game code: `src/data/` | 5034 | 0/0 | 0.00% |

*Updated 2026-11-07 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py usa
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

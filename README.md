# Nintendogs decompilation (JP)

Nintendo DS, game code `AD3J`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`████████░░░░░░░░░░░░` **39.98%** of the code matched · data 100.00% · 5049/8615 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Reused from other decompilations, not merged into files yet | 3064 | 3064/3064 | 33.62% |
| Auto-matched (raw m2c output, to clean up) | 1985 | 1985/1985 | 6.36% |
| Game code: `src/data/` | 4618 | 0/0 | 0.00% |

*Updated 2026-11-07 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

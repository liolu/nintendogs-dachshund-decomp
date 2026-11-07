# Nintendogs decompilation (JP)

Nintendo DS, game code `ADGJ`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`███████░░░░░░░░░░░░░` **35.71%** of the code matched · data 99.92% · 4575/8614 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Auto-matched (raw m2c output, to clean up) | 3520 | 3520/3520 | 18.48% |
| Reused from other decompilations, not merged into files yet | 1055 | 1055/1055 | 17.23% |
| Game code: `src/data/` | 5167 | 0/0 | 0.00% |

*Updated 2026-11-07 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

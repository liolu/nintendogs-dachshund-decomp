# Nintendogs decompilation (JP)

Nintendo DS, game code `AD2J`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`███████████░░░░░░░░░` **54.78%** of the code matched · data 100.00% · 6454/8615 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Reused from other decompilations, not merged into files yet | 2703 | 2703/2703 | 30.37% |
| Auto-matched (raw m2c output, to clean up) | 3750 | 3750/3750 | 24.41% |
| NitroSDK (Nintendo's system library) | 1 | 1/1 | 0.00% |
| Game code: `src/data/` | 4650 | 0/0 | 0.00% |

*Updated 2026-11-11 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py jp
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

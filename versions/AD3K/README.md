# Nintendogs (AD3K) decompilation (KOR)

Nintendo DS, game code `AD3K`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

## Progress

<!-- progress:start -->
`░░░░░░░░░░░░░░░░░░░░` **0.00%** of the code matched · data 100.00% · 0/8651 functions

| Part of the code | Files | Functions | Share of all code |
|---|---|---|---|
| Game code: `src/data/` | 4962 | 0/0 | 0.00% |

*Updated 2026-11-11 by `python tools/match.py progress` ([DS Decomp Studio](https://github.com/liolu/ds-decomp-studio)). A function counts only when it compiles to the exact same bytes and the ROM still rebuilds byte for byte.*
<!-- progress:end -->

```shell
python tools/configure.py kor
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

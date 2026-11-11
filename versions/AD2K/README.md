# Nintendogs (AD2K) decompilation (KOR)

Nintendo DS, game code `AD2K`. Matching decompilation with Metrowerks mwccarm (compiler version still to be identified: `python tools/probe_compiler.py`).

No game assets in this repository: see `extract/README.md`.

```shell
python tools/configure.py kor
ninja
python tools/match.py status
```

Created from the rayman-rr template. See `AGENTS.md` for the rules.

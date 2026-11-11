# Instructions for AI agents

Matching decompilation of Nintendogs (AD3P) (EU, `AD3P`): C compiled with the original compiler must rebuild a byte-identical ROM.

## Hard rules
1. Only the build decides: a function is matched only at 100% (`python tools/match.py verify` prints `VERIFY PASSED`). Never commit otherwise.
2. Clean room: only the game binary and public projects; never leaked sources or Nintendo SDK source.
3. Natural C; `asm` only for instructions compilers never generate.
4. ASCII only in `src/`, `include/`.
5. Never commit the ROM, BIOS, `extract/` or `build/`.
6. Do not contribute AI-generated code to projects that forbid it.

## Workflow
```shell
python tools/configure.py eu
ninja
python tools/match.py verify
python tools/auto_match.py        # m2c drafts + assembly-only functions
```

## TODO for a new project
- Identify the compiler (`tools/probe_compiler.py`) and set `mwcc_version`, `opt`, `lang` (C or C++) in `game.toml` (never edit the shared `tools/configure.py`).
- Check `docs/compiler.md`, `docs/troubleshooting.md`.

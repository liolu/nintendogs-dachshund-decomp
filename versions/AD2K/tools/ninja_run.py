#!/usr/bin/env python3
"""Runs the commands ninja would run, one at a time, and keeps `build.ninja` up to date itself.

Some locked-down Windows environments (a sandboxed shell, an antivirus/EDR hook) make ninja hang right after it
spawned its first child process: the command runs, but ninja never notices that it exited. This driver takes the
command list from `ninja -n` (which does not spawn anything) and runs it with subprocess in the same order, serially.

It also takes over the two jobs ninja does around the build, because this driver never writes ninja's build log:

* the `build.ninja` generator edge would see a stale log entry and regenerate forever: the driver regenerates
  `build.ninja` with `tools/configure.py` whenever a file under `config/` is newer, then drops the generator edge;
* the `build .\\tool: download_tool` edges run on every build and always re-download: dropped too (tools exist).

    python tools/ninja_run.py [targets and options of ninja]

The real ninja binary is $NINJA_BIN if set, else `ninja` from PATH.
`build/agents/pyfix/sitecustomize.py` makes `subprocess` calls to ninja go through this file automatically.
"""
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
REAL = os.environ.get("NINJA_BIN") or shutil.which("ninja")
STEP = re.compile(r"^\[\d+/\d+\] (.*)$")

GEN_EDGE = re.compile(r"(?m)^build build\.ninja: configure[^\n]*\n(?:(?:[ \t]+|[^ \t\r\n])[^\n]*\n)*")
DL_EDGE = re.compile(r"(?m)^build \.[\\/][A-Za-z0-9_.-]+: download_tool\r?\n(?:  [^\r\n]*\r?\n)*(?:\r?\n)?")


def quote_exe(cmd: str) -> str:
    """cmd.exe needs the executable path quoted when it contains spaces (ninja passes it raw to CreateProcess)."""
    if cmd.startswith('"'):
        return cmd
    m = re.match(r"^(.+?\.exe)(\s.*)$", cmd, re.IGNORECASE)
    if m and " " in m.group(1):
        return '"' + m.group(1) + '"' + m.group(2)
    return cmd


def strip_generated_edges() -> None:
    f = ROOT / "build.ninja"
    try:
        text = f.read_text(encoding="utf-8", errors="replace")
    except OSError:
        return
    new = DL_EDGE.sub("", GEN_EDGE.sub("", text))
    if new != text:
        f.write_text(new, encoding="utf-8", newline="\n")


def ensure_configured() -> None:
    """Regenerate build.ninja when a config file changed (what ninja's generator edge would do)."""
    bn = ROOT / "build.ninja"
    if not bn.exists():
        return
    try:
        newest = max([p.stat().st_mtime for p in (ROOT / "config").rglob("*") if p.is_file()]
                     + [(ROOT / "tools" / "configure.py").stat().st_mtime])
    except OSError:
        return
    if newest <= bn.stat().st_mtime:
        return
    sys.path.insert(0, str(Path(__file__).resolve().parent))
    import project  # noqa: E402
    # configure.py embeds the interpreter it runs under in the build rules; the project venv has ndspy/toml
    venv = Path("D:/... logiciel/decomp/decomp ds/.venv/Scripts/python.exe")
    py = str(venv) if venv.exists() else sys.executable
    print("ninja_run: config changed, running tools/configure.py", flush=True)
    subprocess.run([py, str(ROOT / "tools" / "configure.py"), project.VERSION], cwd=ROOT)
    strip_generated_edges()


def dry_run(args: list[str]) -> list[str] | None:
    r = subprocess.run([REAL, "-n", *args], cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace")
    if r.returncode != 0:
        sys.stdout.write(r.stdout or "")
        sys.stderr.write(r.stderr or "")
        return None
    return [m.group(1) for m in map(STEP.match, (r.stdout or "").splitlines()) if m]


def execute(cmd: str) -> int:
    if "download_tool.py" in cmd:  # runs on every build and always re-downloads: the tools are already there
        m = re.search(r"--path (\S+)", cmd)
        if m and (ROOT / m.group(1).replace("\\", "/")).exists():
            print("  (tool already present: download skipped)")
            return 0
    print(f"  $ {cmd}", flush=True)
    p = subprocess.run(quote_exe(cmd), cwd=ROOT, shell=True, stdin=subprocess.DEVNULL)
    if p.returncode == 0 and re.search(r"tools[\\/]configure\.py", cmd):
        strip_generated_edges()
    return p.returncode


def main() -> int:
    if not REAL:
        print("ninja_run: no ninja binary found ($NINJA_BIN)", file=sys.stderr)
        return 1
    args = sys.argv[1:]
    if "-t" in args:  # subtools (targets, commands, ...): just defer
        return subprocess.run([REAL, *args], cwd=ROOT).returncode
    lock = ROOT / ".ninja_lock"
    if lock.exists():  # left by a ninja that was killed: it is a lock file, not build state
        lock.unlink(missing_ok=True)
    strip_generated_edges()
    ensure_configured()
    for attempt in range(4):
        cmds = dry_run(args)
        if cmds is None:
            return 1
        if not cmds:
            print("ninja: no work to do.")
            return 0
        todo = [c for c in cmds if "download_tool.py" in c or re.search(r"tools[\\/]configure\.py", c)]
        if not todo:
            break
        if attempt == 3:
            print("ninja_run: build.ninja keeps being regenerated", file=sys.stderr)
            return 1
        for cmd in todo:
            rc = execute(cmd)
            if rc:
                print(f"ninja: build stopped: command failed with {rc}:\n{cmd}", file=sys.stderr)
                return rc or 1
    width = len(str(len(cmds)))
    for i, cmd in enumerate(cmds, 1):
        print(f"[{i:>{width}}/{len(cmds)}] {cmd}", flush=True)
        rc = execute(cmd)
        if rc:
            print(f"ninja: build stopped: command failed with {rc}:\n{cmd}", file=sys.stderr)
            return rc or 1
    return 0


if __name__ == "__main__":
    sys.exit(main())

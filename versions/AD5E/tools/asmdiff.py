#!/usr/bin/env python3
"""asmdiff.py: live side-by-side diff of one function with asm-differ (github.com/simonlindholm/asm-differ), for
matching by hand. Run from the game folder:

    python ../../studio/gametools/asmdiff.py NAME [FILE.c] [--profile "1.2/sp3"]   # watch: rebuilt on every save
    python ../../studio/gametools/asmdiff.py NAME FILE.c --once                    # print the diff once and quit
    python ../../studio/gametools/asmdiff.py NAME FILE.c -- -3                     # extra asm-differ flags after --

Without FILE.c the starting draft (matched file, best try, near miss or m2c) is copied to build/asmdiff/NAME.c and
that file is watched: edit it in any editor, the diff refreshes when it is saved. Without --profile, the compiler
profile is the one workbench.judge finds best. Left = the game, right = your C; bl targets and literal pool words are
masked like workbench.judge does (they only differ because the object is not linked), so a clean diff is a match
(check it with `workbench.py judge`, which also applies the fake-match gate).

asm-differ keys in watch mode: q quit, arrows/PgUp/PgDn scroll (it runs `less`). Its useful flags: -3 (three-way:
also shows the previous build), -I (ignore address differences), -s (stop at the return), --format plain.
Needs tools/asm-differ (git clone) and `pip install colorama watchdog levenshtein` in the venv.
"""
import argparse
import json
import os
import shutil
import struct
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
import probe_compiler as pc  # noqa: E402
import workbench as wb  # noqa: E402

DIFF_PY = Path(os.environ.get("ASM_DIFFER", ROOT.parent.parent / "tools" / "asm-differ")) / "diff.py"
SETTINGS = '''import json
from pathlib import Path


def apply(config, args):
    config.update(json.loads((Path(__file__).parent / "settings.json").read_text(encoding="utf-8")))
'''


def pool_words(words: tuple) -> set[int]:
    """Indices of the literal pool words (targets of `ldr rX, [pc, #imm]`), same rule as probe_compiler.compare."""
    pool = set()
    for i, w in enumerate(words):
        if (w & 0x0F7F0000) == 0x051F0000:
            off = (w & 0xFFF) // 4
            pool.add(i + 2 + (off if w & 0x00800000 else -off))
    return pool


def masked(target: bytes, cand: bytes) -> bytes:
    """The candidate with the game's word where judge ignores the difference: pool words loaded at the same place on
    both sides and bl/blx calls with the same condition (unlinked objects have no call targets)."""
    n = min(len(target), len(cand)) // 4
    tw = struct.unpack(f"<{len(target) // 4}I", target[:len(target) // 4 * 4])
    cw = list(struct.unpack(f"<{len(cand) // 4}I", cand[:len(cand) // 4 * 4]))
    shared_pool = pool_words(tw) & pool_words(tuple(cw))
    call = lambda w: (w & 0xFE000000) == 0xFA000000 or (w & 0x0F000000) == 0x0B000000  # noqa: E731
    for i in range(n):
        if i in shared_pool or (call(tw[i]) and call(cw[i]) and (tw[i] >> 28) == (cw[i] >> 28)):
            cw[i] = tw[i]
    return struct.pack(f"<{len(cw)}I", *cw) + cand[len(cw) * 4:]


def build(name: str, cfile: Path, profile: str, out: Path) -> int:
    """asm-differ's make step: compile FILE.c, write the function's (masked) bytes to OUT."""
    wb.select_module(name)
    f = wb.function(name)
    thumb = f["mode"] == "thumb"
    objbytes, msg, obj, tmp = wb.compile_one(cfile.read_text(encoding="utf-8", errors="replace"), profile)
    try:
        if objbytes is None:
            print(msg or "compile failed")
            return 1
        cand = pc.compiled_function(obj, name)
        if cand is None:
            print(f"{name} is not in the object (renamed? static?)")
            return 1
    finally:
        tmp.cleanup()
    target = pc.target_bytes(f["addr"], f["size"])
    out.write_bytes(cand if thumb else masked(target, cand))
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[0])
    ap.add_argument("name")
    ap.add_argument("file", nargs="?", type=Path, help="C file to watch (default: build/asmdiff/NAME.c from the draft)")
    ap.add_argument("--profile", help='compiler profile, e.g. "1.2/sp3" or "2.0/sp1p5 -O2,p" (default: judge picks)')
    ap.add_argument("--once", action="store_true", help="print the diff once, no watching")
    ap.add_argument("--build", nargs=3, metavar=("CFILE", "PROFILE", "OUT"), help=argparse.SUPPRESS)
    argv = sys.argv[1:]
    rest = argv[argv.index("--") + 1:] if "--" in argv else []  # extra asm-differ flags
    a = ap.parse_args(argv[:argv.index("--")] if "--" in argv else argv)
    if a.build:
        rc = build(a.name, Path(a.build[0]), a.build[1], Path(a.build[2]))
        if rc == 0:  # every saved try goes through judge too: a miss lands in the miss database (AGENTS.md rule 7)
            wb.MISS_SOURCE = "asmdiff"
            wb.judge(a.name, Path(a.build[0]).read_text(encoding="utf-8", errors="replace"), a.build[1])
        return rc
    if not DIFF_PY.exists():
        sys.exit(f"asm-differ not found at {DIFF_PY}: git clone https://github.com/simonlindholm/asm-differ there "
                 "(or set ASM_DIFFER)")
    objdump = shutil.which("arm-none-eabi-objdump")
    if objdump is None:
        sys.exit("arm-none-eabi-objdump not found in PATH: dot-source env.ps1 (or source env.sh) first")

    module = wb.select_module(a.name)
    f = wb.function(a.name)
    work = ROOT / "build" / "asmdiff" / a.name
    work.mkdir(parents=True, exist_ok=True)
    cfile = a.file
    if cfile is None:
        cfile = ROOT / "build" / "asmdiff" / f"{a.name}.c"
        if not cfile.exists():
            matched = wb.covered(f["addr"])
            src = ((ROOT / matched).read_text(encoding="utf-8", errors="replace") if matched
                   else wb.starting_draft(a.name)[0])
            if not src:
                sys.exit(f"{a.name}: no draft to start from, give a C file")
            cfile.write_text(src, encoding="utf-8", newline="\n")
    cfile = cfile.resolve()

    profile = a.profile
    if not profile:
        r = wb.judge(a.name, cfile.read_text(encoding="utf-8", errors="replace"))
        profile = r.get("profile") or ""
        print(f"profile {profile} ({r['status']}{', %d diffs' % r['diffs'] if r.get('diffs') else ''})", flush=True)
    thumb = f["mode"] == "thumb"
    (work / "base.bin").write_bytes(pc.target_bytes(f["addr"], f["size"]))
    if build(a.name, cfile, profile, work / "my.bin"):
        print("(fix the C and save: the diff appears once it compiles)")
    (work / "diff_settings.py").write_text(SETTINGS, encoding="utf-8")
    me = [sys.executable, str(Path(__file__).resolve()), a.name, "--build", str(cfile), profile]
    (work / "settings.json").write_text(json.dumps({
        "arch": "armel",
        "baseimg": "base.bin",
        "myimg": "my.bin",
        "objdump_executable": objdump,
        "objdump_flags": ["-marm", *(["-Mforce-thumb"] if thumb else []), f"--adjust-vma=0x{f['addr']:x}"],
        "make_command": me,  # asm-differ appends the target (my.bin)
        "source_directories": [str(cfile.parent)],
        "source_extensions": [".c", ".h"],
        "show_line_numbers_default": False,
    }, indent=1), encoding="utf-8")

    print(f"{a.name} ({module}, 0x{f['addr']:08x}, {f['size']} bytes) <- {cfile}", flush=True)
    end = f["addr"] + 0x100000  # objdump stops at the end of each file: a longer candidate is shown whole
    cmd = [sys.executable, str(DIFF_PY), f"0x{f['addr']:x}", f"0x{end:x}"]
    cmd += ["--no-pager"] + rest if a.once else ["-w", "-m"] + rest
    env = dict(os.environ, DSD_PROJECT=str(ROOT))
    if not (shutil.which("less") and shutil.which("tail")) and shutil.which("git"):
        # watch mode pipes through `tail` and `less`: from PowerShell they are only in Git's usr/bin
        git = Path(shutil.which("git")).resolve().parent.parent
        env["PATH"] = str(git / "usr" / "bin") + os.pathsep + env["PATH"]
    return subprocess.call(cmd, cwd=work, env=env)


if __name__ == "__main__":
    sys.exit(main())

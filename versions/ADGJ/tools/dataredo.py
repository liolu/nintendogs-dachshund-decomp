"""Remove data files that `match.py verify` refused, so that datagen writes them again after a fix.

    python tools/match.py verify | python dataredo.py     # reads the "FAIL: src/data/... is marked complete" lines
    python dataredo.py src/data/main_data_02077824.c ...

Deletes each file and its block in the delinks.txt of its module. Files outside src/data/ are never touched.
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import modules  # noqa: E402


def main() -> None:
    names = sys.argv[1:] or re.findall(r"^FAIL: (src/data/\S+) is marked complete", sys.stdin.read(), re.M)
    names = sorted({n for n in names if n.startswith("src/data/")})
    removed = 0
    for folder in modules().values():
        d = folder / "delinks.txt"
        text = d.read_text(encoding="utf-8")
        new = text
        for n in names:
            new = re.sub(rf"^{re.escape(n)}:\n(?:[ \t]+.*\n?)*\n?", "", new, flags=re.M)
        if new != text:
            d.write_text(new, encoding="utf-8", newline="\n")
    for n in names:
        p = project.ROOT / n
        if p.exists():
            p.unlink()
            removed += 1
    print(f"{removed} files removed")


if __name__ == "__main__":
    main()

"""Where does the linked layout drift from symbols.txt? One line per CHANGE of offset (= one root cause), per module.

    python tools/datashift.py            # after `ninja` failed its symbol check (reads build/<ver>/arm9.o.xMAP)

dsd's check prints every shifted symbol (hundreds after one bad object); this prints only the objects where the
delta changes: the first symbol placed off its address and the object that holds it. Overlays start AFTER(ARM9),
so a shift at the end of main's .bss (rounded to 32) moves every overlay as a whole: fix main first.
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import project  # noqa: E402
from bssgen import modules  # noqa: E402

SYM = re.compile(r"^(\S+) kind:(\w+)\S* addr:0x([0-9a-f]+)", re.M)


def main() -> None:
    xmap = (project.ROOT / "build" / project.VERSION / "arm9.o.xMAP").read_text(encoding="utf-8", errors="replace")
    placed: dict[str, tuple[int, str]] = {}
    for ad, nm, obj in re.findall(r"^  ([0-9A-F]{8}) [0-9A-F]{8} \.\w+\s+(\S+)\t\((\S+)\)", xmap, re.M):
        placed.setdefault(nm, (int(ad, 16), obj))
    changes = 0
    for name, folder in modules().items():
        syms = sorted((int(a, 16), n) for n, k, a in SYM.findall((folder / "symbols.txt").read_text(encoding="utf-8"))
                      if k.startswith(("data", "bss")))
        delta, prev = 0, "-"
        for a, n in syms:
            if n not in placed:
                continue
            pa, obj = placed[n]
            if pa - a != delta:
                changes += 1
                print(f"{name:6} {n:28} expected 0x{a:08x} got 0x{pa:08x} delta {pa - a:+d} (was {delta:+d}) "
                      f"in {obj}; previous {prev}")
                delta = pa - a
            prev = f"{n} ({obj})"
    print("changes:", changes)


if __name__ == "__main__":
    main()

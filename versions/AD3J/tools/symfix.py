"""symfix.py FILE.c... - rename stale func_ovNNN_ADDR / func_ADDR / data_* names in C files to the current names of
symbols.txt (functions renamed later, e.g. by profrename from -profile records). Run from the project dir."""
import re, sys, pathlib
by = {}
for p in pathlib.Path("config").rglob("symbols.txt"):
    for m in re.finditer(r"^(\S+) kind:(\w+)\S* addr:0x([0-9a-f]+)", p.read_text(encoding="utf-8"), re.M):
        mod = p.parent.name if p.parent.name.startswith("ov") else ""
        by[(mod, int(m.group(3), 16))] = m.group(1)
names = set(by.values())
for f in sys.argv[1:]:
    t = open(f, encoding="utf-8-sig", errors="replace").read()  # agent files may start with a BOM
    def rn(m):
        if m.group(0) in names:
            return m.group(0)
        mod = "ov" + m.group(2) if m.group(2) else ""
        return by.get((mod, int(m.group(3), 16)), m.group(0))
    t2 = re.sub(r"\b(func|data)_(?:ov(\d{3})_)?([0-9a-f]{8})\b", rn, t)
    if t2 != t:
        open(f, "w", encoding="utf-8", newline=chr(10)).write(t2)
        print(f, "renamed", len(set(re.findall(r"\b\w+\b", t)) ^ set(re.findall(r"\b\w+\b", t2))) // 2)

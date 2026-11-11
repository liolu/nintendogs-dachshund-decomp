#!/usr/bin/env python3
"""Plan a "similar-shape family" wave: unmatched functions whose target assembly has the same instruction count and a
high mnemonic similarity are likely built from the same source shape; matching one gives the C for the whole family.

    python tools/famsim.py [--agents 12] [--min-family 3] [--ratio 0.85] [--max-size 2000]

Candidates: unmatched functions with a non-empty best C draft (build/hunt/best), status "size" or an unattempted
"near" (not parked/refused). Families are grouped greedily by SequenceMatcher ratio on the mnemonic sequence (same
instruction count), whole families are distributed over the workers, and a brief is generated per function
(`<out>/fam-<k>.txt` + `<out>/briefs/<name>.md`).
"""
import argparse
import concurrent.futures
import difflib
import json
import os
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
os.chdir(ROOT)
sys.path.insert(0, str(Path(__file__).resolve().parent))

import agentbatch as ab  # noqa: E402
import hunt  # noqa: E402


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--agents", type=int, default=12)
    ap.add_argument("--min-family", type=int, default=3)
    ap.add_argument("--ratio", type=float, default=0.85)
    ap.add_argument("--max-size", type=int, default=2000)
    ap.add_argument("--out", default="build/agents/famsim")
    a = ap.parse_args()
    out = Path(a.out)
    (out / "briefs").mkdir(parents=True, exist_ok=True)

    led = hunt.load()
    have = {p.stem for p in (ROOT / "src" / "auto").glob("*.c")}
    have |= {p.stem for p in (ROOT / "build" / "agents" / "matched").glob("*.c")}
    attempted = {p.stem for p in (ROOT / "build" / "agents" / "work").glob("*/*.c")}
    shapes = json.loads((ROOT / "build" / "hunt" / "shapes.json").read_text(encoding="utf-8"))
    sizes = hunt.unmatched_sizes()
    cands = []
    for n, e in led.items():
        if n in have or e.get("parked") or e.get("status") == "refused":
            continue
        if sizes.get(n, 99999) > a.max_size:
            continue
        if e.get("status") == "size" or (e.get("status") == "near" and n not in attempted):
            p = ROOT / "build" / "hunt" / "best" / f"{n}.c"
            if p.exists() and p.stat().st_size > 0 and n in shapes:
                cands.append(n)

    # greedy families: same instruction count, mnemonic ratio >= threshold
    by_len = {}
    for n in cands:
        by_len.setdefault(len(shapes[n][0]), []).append(n)
    fams = []
    used = set()
    for n in sorted(cands, key=lambda x: len(shapes[x][0])):
        if n in used:
            continue
        fam = [n]
        used.add(n)
        sm = difflib.SequenceMatcher(None, shapes[n][0], [], autojunk=False)
        for m in by_len[len(shapes[n][0])]:
            if m in used:
                continue
            sm.set_seq2(shapes[m][0])
            if sm.quick_ratio() >= a.ratio and sm.ratio() >= a.ratio:
                fam.append(m)
                used.add(m)
                if len(fam) >= 10:
                    break
        if len(fam) >= a.min_family:
            fams.append(fam)
    print(f"{len(cands)} candidates, {len(fams)} families >= {a.min_family}, "
          f"{sum(len(f) for f in fams)} functions", flush=True)

    buckets = [[] for _ in range(a.agents)]
    for fam in sorted(fams, key=len, reverse=True):
        buckets.sort(key=len)
        buckets[0].extend(fam)
    names = [n for b in buckets for n in b]
    judged = {}
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        for n, r in zip(names, ex.map(ab.judge_one, names)):
            judged[n] = r
    for i, b in enumerate(buckets, 1):
        (out / f"fam-{i}.txt").write_text("\n".join(b))
        for n in b:
            r = judged.get(n)
            if r and r.get("status") in ("near", "size", "compile"):
                (out / "briefs" / f"{n}.md").write_text(ab.brief(n, r), encoding="utf-8", newline="\n")
        print(f"fam-{i}: {len(b)} functions")
    (out / "judged.json").write_text(json.dumps(judged))


if __name__ == "__main__":
    main()

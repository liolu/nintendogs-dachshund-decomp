#!/usr/bin/env python3
"""Plan a "family" wave: functions with the SAME target shape (identical mnemonic sequence) are one family; matching
one function of a family gives the C for all of them by transplant.

Reads the hunt ledger + shapes, keeps unmatched functions of status "size" (a draft that compiles but has the wrong
size), groups them by exact mnemonic sequence, keeps families of >= --min-family, splits whole families over
--agents workers and writes one list per worker plus the briefs (judged on the fly).

    python tools/familyplan.py [--agents 12] [--min-family 4] [--out build/agents/fam]
"""
import argparse
import concurrent.futures
import json
import os
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
os.chdir(ROOT)
sys.path.insert(0, str(Path(__file__).resolve().parent))

import agentbatch as ab  # noqa: E402
import hunt  # noqa: E402


def judge(name: str) -> dict:
    return ab.judge_one(name)


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--agents", type=int, default=12)
    ap.add_argument("--min-family", type=int, default=4)
    ap.add_argument("--out", default="build/agents/fam")
    a = ap.parse_args()
    out = Path(a.out)
    (out / "briefs").mkdir(parents=True, exist_ok=True)

    led = hunt.load()
    have = {p.stem for p in (ROOT / "src" / "auto").glob("*.c")}
    have |= {p.stem for p in (ROOT / "build" / "agents" / "matched").glob("*.c")}
    sh = json.loads((ROOT / "build" / "hunt" / "shapes.json").read_text(encoding="utf-8"))
    cands = [n for n, e in led.items()
             if n not in have and e.get("status") == "size" and not e.get("parked")
             and (ROOT / "build" / "hunt" / "best" / f"{n}.c").exists() and n in sh]
    families = {}
    for n in cands:
        families.setdefault(tuple(sh[n][0]), []).append(n)
    fams = sorted((v for v in families.values() if len(v) >= a.min_family), key=len, reverse=True)
    print(f"{len(cands)} size candidates, {len(fams)} families >= {a.min_family}, "
          f"{sum(len(f) for f in fams)} functions", flush=True)

    # distribute whole families over the workers, biggest families first, to balance function counts
    buckets = [[] for _ in range(a.agents)]
    for fam in fams:
        buckets.sort(key=len)
        buckets[0].extend(fam)
    names = [n for b in buckets for n in b]
    print(f"{len(names)} functions on {a.agents} workers", flush=True)

    judged = {}
    with concurrent.futures.ThreadPoolExecutor(8) as ex:
        for n, r in zip(names, ex.map(judge, names)):
            judged[n] = r
    for i, b in enumerate(buckets, 1):
        (out / f"fam-{i}.txt").write_text("\n".join(b))
        for n in b:
            p = out / "briefs" / f"{n}.md"
            if not p.exists() and n in judged and judged[n].get("status") in ("near", "size", "compile"):
                p.write_text(ab.brief(n, judged[n]), encoding="utf-8", newline="\n")
        print(f"fam-{i}: {len(b)} functions")
    (out / "judged.json").write_text(json.dumps(judged))


if __name__ == "__main__":
    main()

#!/usr/bin/env python3
"""Try extra compiler profiles on the best known C of unmatched functions, looking for free matches.

Many functions in build/hunt/best/ were judged only with the default profiles (2.0/sp1p5, 1.2/sp2p3). Some match
1.2/sp3, `-O4,s`, thumb, or `-profile` instead (the project itself builds ~800 files with 1.2/sp3). This pass re-judges
each candidate with those extra profiles and keeps the matches.

    python tools/deepsweep.py [--names FILE] [--jobs 6] [--limit N] [--out build/agents/deep]

Matches go to <out>/matched/ (with <out>/matched/results.json) for `workbench.py submit-many`. Nothing is submitted.
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

import hunt  # noqa: E402

PROFILES = ["1.2/sp3", "1.2/sp3 -thumb", "1.2/sp2p3 -thumb", "2.0/sp1p5 -O4,s", "1.2/sp3 -O4,p"]


def judge(name: str, profile: str) -> dict | None:
    cmd = [sys.executable, str(Path(__file__).resolve().parent / "workbench.py"), "judge", name,
           str(ROOT / "build" / "hunt" / "best" / f"{name}.c"), "--profile", profile]
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, encoding="utf-8", errors="replace")
    lines = [l for l in (p.stdout or "").splitlines() if l.strip()]
    try:
        return json.loads(lines[-1])
    except (ValueError, IndexError):
        return None


def probe(name: str) -> dict | None:
    for prof in PROFILES:
        r = judge(name, prof)
        if r and r.get("match"):
            return {"match": True, "profile": prof}
    return None


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--names")
    ap.add_argument("--jobs", type=int, default=6)
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--sample", type=int, default=0)
    ap.add_argument("--out", default="build/agents/deep")
    a = ap.parse_args()
    out = Path(a.out)
    (out / "matched").mkdir(parents=True, exist_ok=True)
    led = hunt.load()
    have = {p.stem for p in (ROOT / "src" / "auto").glob("*.c")} | {p.stem for p in (out / "matched").glob("*.c")}
    if a.names:
        names = [l.strip() for l in Path(a.names).read_text().split() if l.strip()]
    else:
        names = [n for n, e in led.items()
                 if n not in have and not e.get("parked") and e.get("status") != "refused"
                 and (ROOT / "build" / "hunt" / "best" / f"{n}.c").exists()]
    if a.sample:
        import random
        random.seed(7)
        names = random.sample(names, min(a.sample, len(names)))
    if a.limit:
        names = names[:a.limit]
    print(f"{len(names)} candidates, profiles {PROFILES}", flush=True)
    res = {}
    done = 0
    with concurrent.futures.ThreadPoolExecutor(a.jobs) as ex:
        futs = {ex.submit(probe, n): n for n in names}
        for f in concurrent.futures.as_completed(futs):
            n = futs[f]
            try:
                r = f.result()
            except Exception:  # noqa: BLE001
                r = None
            done += 1
            if r:
                src = (ROOT / "build" / "hunt" / "best" / f"{n}.c").read_text(encoding="utf-8", errors="replace")
                (out / "matched" / f"{n}.c").write_text(src, encoding="utf-8", newline="\n")
                res[n] = {"match": True, "profile": r["profile"], "who": "deepsweep"}
                print(f"  MATCH {n} ({r['profile']})", flush=True)
            if done % 100 == 0:
                print(f"  {done}/{len(names)}, {len(res)} matches", flush=True)
    (out / "matched" / "results.json").write_text(json.dumps(res, indent=1), encoding="utf-8", newline="\n")
    print(json.dumps({"candidates": len(names), "matches": len(res)}, indent=1))


if __name__ == "__main__":
    main()

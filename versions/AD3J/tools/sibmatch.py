#!/usr/bin/env python3
"""Automatic sibling transplant: reuse an already matched function's C for unmatched look-alikes.

For every donor (a matched function with a source file in src/auto/, e.g. the ones this session just added) find
unmatched functions whose disassembly has the same shape (mnemonic sequence, same instruction count +-1), rename the
donor's C (function name, bl targets in order, literal-pool symbols in order, exactly like hunt.py sibs) and judge
each transplant. Matching results go to <out>/matched/ + results.json, ready for `workbench.py submit-many`.

    python tools/sibmatch.py [--donors FILE] [--min-ratio 0.85] [--jobs 12] [--limit N] [--out build/agents/sib]

`--donors FILE` is a list of function names (default: every function with a src/auto source). Parked functions from
the hunt ledger are skipped (known impossible in C). Nothing is submitted or committed.
"""
import argparse
import concurrent.futures
import difflib
import json
import os
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
os.chdir(ROOT)
sys.path.insert(0, str(Path(__file__).resolve().parent))

import hunt  # noqa: E402  (ROOT = cwd)
import workbench  # noqa: E402

PROFILES = ["1.2/sp3", "1.2/sp3 -thumb", "1.2/sp2p3 -thumb", "2.0/sp1p5 -profile", "1.2/sp3 -profile",
            "2.0/sp1p5 -O4,s", "2.0/sp1p5 -O2", "2.0/sp1p5 -O3,p", "1.2/sp3 -O4,p"]


def judge_one(name: str, path: Path, profile: str | None) -> dict:
    cmd = [sys.executable, str(Path(__file__).resolve().parent / "workbench.py"), "judge", name, str(path)]
    if profile:
        cmd += ["--profile", profile]
    p = subprocess.run(cmd, cwd=ROOT, capture_output=True, text=True, encoding="utf-8", errors="replace")
    lines = [l for l in (p.stdout or "").splitlines() if l.strip()]
    try:
        return json.loads(lines[-1])
    except (ValueError, IndexError):
        return {"status": "error", "match": False}


def judge_best(name: str, path: Path, profile: str | None) -> dict:
    r = judge_one(name, path, profile)
    if r.get("match") or profile:
        return r
    for prof in PROFILES:
        r2 = judge_one(name, path, prof)
        if r2.get("match"):
            return r2
    return r


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--donors")
    ap.add_argument("--min-ratio", type=float, default=0.85)
    ap.add_argument("--jobs", type=int, default=max(4, (os.cpu_count() or 8) - 2))
    ap.add_argument("--limit", type=int, default=0)
    ap.add_argument("--out", default="build/agents/sib")
    a = ap.parse_args()
    out = Path(a.out)
    (out / "work").mkdir(parents=True, exist_ok=True)
    (out / "matched").mkdir(parents=True, exist_ok=True)

    ledger = hunt.load()
    have = {p.stem for p in (ROOT / "src" / "auto").glob("*.c")} | {p.stem for p in (out / "matched").glob("*.c")}
    sh = hunt.shapes()
    if a.donors:
        donors = [n.strip() for n in Path(a.donors).read_text().split() if n.strip()]
    else:
        donors = [p.stem for p in (ROOT / "src" / "auto").glob("*.c")]
    donors = [(n, (ROOT / "src" / "auto" / f"{n}.c")) for n in donors if n in sh and (ROOT / "src" / "auto" / f"{n}.c").exists()]

    # unmatched candidates, bucketed by instruction count
    buckets = {}
    for n, v in sh.items():
        if v[3] or n in have:
            continue
        if ledger.get(n, {}).get("parked") or ledger.get(n, {}).get("status") == "refused":
            continue
        buckets.setdefault(len(v[0]), []).append(n)

    jobs = []
    for donor, path in donors:
        dmn = sh[donor][0]
        sm = difflib.SequenceMatcher(None, [], dmn, autojunk=False)
        best = []
        for size in (len(dmn) - 1, len(dmn), len(dmn) + 1):
            for cand in buckets.get(size, []):
                sm.set_seq1(sh[cand][0])
                if sm.real_quick_ratio() < a.min_ratio or sm.quick_ratio() < a.min_ratio:
                    continue
                r = sm.ratio()
                if r >= a.min_ratio:
                    best.append((r, cand))
        best.sort(reverse=True)
        src = path.read_text(encoding="utf-8", errors="replace")
        mprof = None
        if src.startswith("/* compiler: "):
            mprof = src.split("*/", 1)[0][len("/* compiler: "):].strip()
        for r, cand in best[:2]:
            t = hunt.transplant(src, donor, cand, sh)
            p = out / "work" / f"{cand}.c"
            p.write_text(t, encoding="utf-8", newline="\n")
            jobs.append((cand, p, mprof, r))
        if a.limit and len(jobs) >= a.limit:
            break

    seen = {}
    for cand, p, prof, r in jobs:
        if cand not in seen or r > seen[cand][2]:
            seen[cand] = (cand, p, r, prof)
    jobs = list(seen.values())
    print(f"{len(donors)} donors, {len(jobs)} transplants to judge", flush=True)

    results = {}
    with concurrent.futures.ThreadPoolExecutor(a.jobs) as ex:
        futs = {ex.submit(judge_best, c, p, prof): (c, p) for c, p, r, prof in jobs}
        for i, f in enumerate(concurrent.futures.as_completed(futs), 1):
            c, p = futs[f]
            try:
                results[c] = f.result()
            except Exception as e:  # noqa: BLE001
                results[c] = {"status": "error", "error": str(e)[:200]}
            if i % 25 == 0:
                print(f"  judged {i}/{len(jobs)}", flush=True)

    res = {}
    for c, r in sorted(results.items()):
        if r.get("match"):
            src = (out / "work" / f"{c}.c").read_text(encoding="utf-8", errors="replace")
            (out / "matched" / f"{c}.c").write_text(src, encoding="utf-8", newline="\n")
            res[c] = {"match": True, "profile": r.get("profile"), "who": "sibmatch"}
    (out / "matched" / "results.json").write_text(json.dumps(res, indent=1), encoding="utf-8", newline="\n")
    print(json.dumps({"transplants": len(jobs), "matches": len(res), "names": sorted(res)[:40]}, indent=1))


if __name__ == "__main__":
    main()

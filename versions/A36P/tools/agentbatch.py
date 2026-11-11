#!/usr/bin/env python3
"""Batches for parallel hand-matching sessions: rank cheap candidates, hand out one list per worker, collect the
matches.

    python tools/agentbatch.py plan [--agents 10] [--per-agent 10] [--max-size 400] [--out DIR]
    python tools/agentbatch.py batch K [--out DIR]
    python tools/agentbatch.py try NAME FILE [--profile P] [--who W] [--out DIR]
    python tools/agentbatch.py collect [--out DIR]
    python tools/agentbatch.py status [--out DIR]

`plan` re-judges the best C known for every candidate whose source is not written yet (build/hunt/best), keeps the
closest ones, writes one JSON list per worker (`batch-<k>.json`, `queue.json`) and one Markdown brief per function
(`briefs/NAME.md`: target assembly, best C, current diff, known fixes).

A worker iterates on its functions (edit the C, `workbench.py judge NAME FILE`) and saves a real match with `try`:
it judges the file again (same gate as `workbench.py submit`) and copies it to `<out>/matched/NAME.c` when it
matches. `collect` rebuilds `<out>/matched/results.json`, ready for `workbench.py submit-many <out>/matched`.
Nothing here submits, builds or commits: the pipeline lock is only taken by `workbench.py`.
"""
import argparse
import concurrent.futures
import json
import os
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from project import ROOT  # noqa: E402  (the game: DSD_PROJECT or the current folder)
os.chdir(ROOT)
sys.path.insert(0, str(Path(__file__).resolve().parent))

import auto_match as am  # noqa: E402
import hunt  # noqa: E402  (its ROOT is the current directory)
import workbench  # noqa: E402

TIPS = """\
Known fixes, cheapest first (from earlier sessions, they solve most near misses):
- retype a local pointer `M2C_UNK *p` / `s32 *p` to `u8 *p` when the code does `p += N` or `p[i]` on bytes (~40%);
- declare an unknown global `extern u8 data_x;` instead of `extern M2C_UNK data_x;`;
- a loop the compiler generated as a `for` with `break` instead of `while`/`goto`;
- keep a call result in a temp local before using it (`s32 t = f(); ... t op x`) to fix `add`/`cmp` operand order;
- return early (`if (c) return x;`) instead of nesting, or restructure `if/else`;
- an unused leading argument: add it back (`f(s32 pad, ...)`) so the others land in the right registers;
- hoist `obj->field` into a local before comparing it (fixes `cmp` operand order);
- swap adjacent independent statements, move a declaration, or move `default:` last in a `switch`;
- for a constant store that differs: write `v += k;` where m2c wrote `v = a; ... v = b;`.
"""


def load_ledger() -> dict:
    return hunt.load()


def candidates(led: dict, max_size: int, min_size: int = 12, max_best: int = 1000) -> list[str]:
    """Functions with a known best C, not written yet in src/, not refused. `min_size` skips 4/8-byte fragments
    (the tail of a bigger function split by dsd: no C can produce them)."""
    have, sizes = hunt.matched_names(), hunt.unmatched_sizes()
    names = []
    for name, e in led.items():
        if name in have or name not in sizes or not min_size <= sizes[name] <= max_size:
            continue
        if e.get("status") == "refused" or e.get("parked"):
            continue  # parked = known unmatchable for C (ITCM hand asm, unsolved compiler puzzles)
        best = e.get("best")
        if not isinstance(best, int) or best > max_best:
            continue
        if not (hunt.BEST / f"{name}.c").exists():
            continue
        names.append(name)
    return names


def judge_one(name: str) -> dict:
    """Judge one function in its own python process: `workbench` keeps the selected module in globals, so it is not
    thread safe. A subprocess also survives this environment's missing multiprocessing pipes."""
    p = subprocess.run([sys.executable, str(Path(__file__).resolve().parent / "workbench.py"), "judge", name,
                        str(hunt.BEST / f"{name}.c")], cwd=ROOT, capture_output=True, text=True,
                       encoding="utf-8", errors="replace")
    lines = [l for l in (p.stdout or "").splitlines() if l.strip()]
    try:
        return json.loads(lines[-1])
    except (ValueError, IndexError):
        return {"status": "error", "errors": ((p.stdout or "") + (p.stderr or ""))[-300:]}


def judge_many(names: list[str], jobs_n: int) -> dict[str, dict]:
    if not names:
        return {}
    with concurrent.futures.ThreadPoolExecutor(jobs_n) as ex:
        return dict(zip(names, ex.map(judge_one, names)))


def rank(judged: dict[str, dict]) -> list[tuple[float, int, int, str]]:
    """(score, diffs, size, name), cheapest first: few differing instructions, then a small body."""
    sizes = hunt.unmatched_sizes()
    rows = []
    for name, r in judged.items():
        if r.get("match") or r.get("status") != "near":
            continue
        d = r.get("diffs")
        if not isinstance(d, int) or d <= 0:
            continue
        rows.append((d * 10 + sizes.get(name, 9999) / 100.0, d, sizes.get(name, 9999), name))
    return sorted(rows)


def split(names: list[str], agents: int, per_agent: int) -> list[list[str]]:
    return [names[i * per_agent:(i + 1) * per_agent] for i in range(agents)]


def brief(name: str, r: dict) -> str:
    """Markdown a worker can read in one go: assembly, best C, diff, tips."""
    sizes = hunt.unmatched_sizes()
    workbench.select_module(name)
    asm = am.function_asm(name) or ""
    src = (hunt.BEST / f"{name}.c").read_text(encoding="utf-8", errors="replace")
    head = (f"# {name}\n\n{workbench.MODULE} module, {sizes.get(name)} bytes, "
            f"{r.get('diffs')} differing instruction(s) with profile {r.get('profile')}.\n")
    return (head
            + "\n## target assembly\n\n```asm\n" + asm.strip() + "\n```\n"
            + "\n## best C so far\n\n```c\n" + src.strip() + "\n```\n"
            + "\n## current diff (TARGET | CANDIDATE)\n\n```\n" + (r.get("diff") or "(identical)").strip() + "\n```\n"
            + "\n## tips\n\n" + TIPS)


def write_plan(out: Path, batches: list[list[str]], judged: dict[str, dict]) -> None:
    out.mkdir(parents=True, exist_ok=True)
    (out / "briefs").mkdir(exist_ok=True)
    sizes = hunt.unmatched_sizes()
    queue = []
    for k, names in enumerate(batches, 1):
        items = []
        for n in names:
            r = judged.get(n, {})
            items.append({"name": n, "size": sizes.get(n), "diffs": r.get("diffs"),
                          "profile": r.get("profile"), "status": r.get("status")})
            (out / "briefs" / f"{n}.md").write_text(brief(n, r), encoding="utf-8", newline="\n")
        (out / f"batch-{k}.json").write_text(json.dumps(items, indent=1), encoding="utf-8", newline="\n")
        queue += items
    (out / "queue.json").write_text(json.dumps(queue, indent=1), encoding="utf-8", newline="\n")


def cmd_plan(a) -> None:
    out = Path(a.out)
    led = load_ledger()
    names = candidates(led, a.max_size, a.min_size, a.max_best)
    t0 = time.time()
    cache = out / "judged.json"
    if a.reuse and cache.exists():
        judged = json.loads(cache.read_text(encoding="utf-8"))
    else:
        judged = judge_many(names, a.jobs)
        out.mkdir(parents=True, exist_ok=True)
        cache.write_text(json.dumps(judged), encoding="utf-8")
    parked = {n for n, e in led.items() if e.get("parked") or e.get("status") == "refused"}
    have = hunt.matched_names() | {p.stem for p in (out / "matched").glob("*.c")}
    judged = {n: r for n, r in judged.items() if n not in parked and n not in have}
    rows = rank(judged)
    print(f"{len(names)} candidates judged in {time.time() - t0:.0f}s, {len(rows)} still near")
    for sc, d, size, n in rows[:20]:
        print(f"  {d:3} diffs {size:5}B {n} ({judged[n].get('profile')})")
    need = a.agents * a.per_agent
    picked = [n for _, _, _, n in rows[:need]]
    batches = split(picked, a.agents, a.per_agent)
    write_plan(out, batches, judged)
    print(f"wrote {out}/batch-1..{a.agents}.json ({len(picked)} functions, {a.per_agent} per worker)")


EXTRA_PROFILES = ["1.2/sp3", "1.2/sp3 -thumb", "1.2/sp2p3 -thumb", "2.0/sp1p5 -profile", "1.2/sp3 -profile",
                  "2.0/sp1p5 -O4,s", "2.0/sp1p5 -O2", "2.0/sp1p5 -O3,p", "1.2/sp3 -O4,p"]


def judge_best(name: str, source: str, profile: str | None = None) -> dict:
    """`workbench.judge`, then the extra compiler service packs when the default profiles all miss (a few functions
    only match 1.2/sp3, which is not in auto_match.COMPILERS)."""
    r = workbench.judge(name, source, profile)
    if r.get("match") or profile:
        return r
    for prof in EXTRA_PROFILES:
        r2 = workbench.judge(name, source, prof)
        if r2.get("match"):
            return r2
    return r


def cmd_try(a) -> None:
    out = Path(a.out)
    try:
        workbench.select_module(a.name)
        src = Path(a.file).read_text(encoding="utf-8", errors="replace")
        r = judge_best(a.name, src, a.profile)
    except SystemExit as e:  # unknown function name: report it instead of crashing the worker
        print(json.dumps({"name": a.name, "who": a.who or "agent", "match": False,
                          "status": "error", "error": str(e)[:300]}))
        return
    ok = bool(r.get("match"))
    rec = {"name": a.name, "who": a.who or "agent", "match": ok, "profile": r.get("profile"), "status": r.get("status"),
           "diffs": r.get("diffs"), "time": time.strftime("%Y-%m-%d %H:%M")}
    if ok:
        d = out / "matched"
        d.mkdir(parents=True, exist_ok=True)
        (d / f"{a.name}.c").write_text(src, encoding="utf-8", newline="\n")
    print(json.dumps(rec))


def cmd_collect(a) -> None:
    out = Path(a.out)
    d = out / "matched"
    if not d.exists():
        print(json.dumps({"ok": True, "matches": 0, "note": "nothing to collect"}))
        return
    res, dropped = {}, []
    for p in sorted(d.glob("*.c")):
        try:
            workbench.select_module(p.stem)
            r = judge_best(p.stem, p.read_text(encoding="utf-8", errors="replace"))
        except SystemExit:  # not a function of any module (data symbol, or a name workbench cannot place)
            dropped.append(p.stem + " (not a function)")
            continue
        if r.get("match"):
            res[p.stem] = {"match": True, "profile": r.get("profile"), "who": "agents"}
        else:
            dropped.append(p.stem)
    (d / "results.json").write_text(json.dumps(res, indent=1), encoding="utf-8", newline="\n")
    print(json.dumps({"ok": True, "matches": len(res), "dropped": dropped,
                      "next": f"python tools/workbench.py submit-many {d.as_posix()} --who agents"}, indent=1))


def cmd_status(a) -> None:
    out = Path(a.out)
    q = json.loads((out / "queue.json").read_text(encoding="utf-8")) if (out / "queue.json").exists() else []
    done = {p.stem for p in (out / "matched").glob("*.c")} if (out / "matched").exists() else set()
    per = {}
    for k in range(1, 64):
        f = out / f"batch-{k}.json"
        if not f.exists():
            break
        items = json.loads(f.read_text(encoding="utf-8"))
        per[k] = {"total": len(items), "done": sum(1 for i in items if i["name"] in done),
                  "pending": [i["name"] for i in items if i["name"] not in done]}
    print(json.dumps({"total": len(q), "matched": len(done), "workers": per}, indent=1))


def cmd_batch(a) -> None:
    print((Path(a.out) / f"batch-{a.k}.json").read_text(encoding="utf-8"))


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    p = sub.add_parser("plan")
    p.add_argument("--agents", type=int, default=10)
    p.add_argument("--per-agent", type=int, default=10)
    p.add_argument("--max-size", type=int, default=400)
    p.add_argument("--min-size", type=int, default=12)
    p.add_argument("--max-best", type=int, default=1000)
    p.add_argument("--reuse", action="store_true", help="re-rank the cached build/agents/judged.json")
    p.add_argument("--jobs", type=int, default=max(4, (os.cpu_count() or 8) - 2))
    p.add_argument("--out", default="build/agents")
    p.set_defaults(fn=cmd_plan)
    p = sub.add_parser("try")
    p.add_argument("name")
    p.add_argument("file")
    p.add_argument("--profile")
    p.add_argument("--who", default="")
    p.add_argument("--out", default="build/agents")
    p.set_defaults(fn=cmd_try)
    p = sub.add_parser("collect")
    p.add_argument("--out", default="build/agents")
    p.set_defaults(fn=cmd_collect)
    p = sub.add_parser("status")
    p.add_argument("--out", default="build/agents")
    p.set_defaults(fn=cmd_status)
    p = sub.add_parser("batch")
    p.add_argument("k", type=int)
    p.add_argument("--out", default="build/agents")
    p.set_defaults(fn=cmd_batch)
    a = ap.parse_args()
    a.fn(a)


if __name__ == "__main__":
    main()

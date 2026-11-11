#!/bin/bash
# clone_chain.sh ID... : functions without AI for a version whose data is done.
#  1. clone_match --other-games (ARM9 main; its "other games" are the sibling folders = the other versions), verify
#  2. clone_overlays (overlays + ITCM) from the advanced versions, swp asm (asm-only instructions), the hidden-arg0
#     strh family (fam3 gen.py) and the empty bx-lr stubs (templatesweep) -> build/hunt/b1
#  3. agentround build/hunt/b1 (judge + submit-many), then workbench commit (full verify) + report
# Log: versions/ID/clone_chain.log ; summary in clone_chain.log at the root.
MONO="$(cd "$(dirname "$0")" && pwd)"
source "$MONO/../../env.sh" >/dev/null 2>&1
G="$MONO/../../studio/gametools"
H="$MONO/hunt-templates"   # run.py (swp), gen.py (fam3), the bx-lr template
TRAILER='Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>'
DONORS=ADGE,AD2J-rev1,ADGJ-rev1,AD3J-rev1
for id in "$@"; do
  d="$MONO/versions/$id"; cd "$d" || continue
  ver=$(ls config | head -1); L="$d/clone_chain.log"; : > "$L"
  step() { echo "=== $(date +%H:%M:%S) $*" >> "$L"; "$@" >> "$L" 2>&1; }
  lock() { until mkdir "$MONO/.git/chain.lock" 2>/dev/null; do sleep 5; done; }
  unlock() { rmdir "$MONO/.git/chain.lock"; }
  # 1. main module clones (clone_match integrates + verifies; --commit commits only its new files)
  lock; step python "$G/clone_match.py" --other-games --commit -j 8; unlock
  # 2. candidates for the other modules
  mkdir -p build/hunt/swp/a1 build/hunt/fam3/a1 build/hunt/b1
  cp "$H/run.py" build/hunt/swp/run.py; cp "$H/gen.py" build/hunt/fam3/gen.py
  step python "$G/prototypes/clone_overlays.py" build/hunt/clone_ov --from "$DONORS" -j 8
  step python build/hunt/swp/run.py
  step python build/hunt/fam3/gen.py
  cp build/hunt/fam3/*.c build/hunt/fam3/a1/ 2>/dev/null
  step python "$G/prototypes/templatesweep.py" "$H/bxlr.c" func_ov019_0215cf78 rtpl "2.0/sp1p5" --sizes 4 -j 6
  i=0; for s in clone_ov/a1 swp/a1 fam3/a1 rtpl/a1; do i=$((i+1)); mkdir -p build/hunt/b1/a$i; cp build/hunt/$s/*.c build/hunt/b1/a$i/ 2>/dev/null; done
  # 3. judge + submit, then one full verify at commit
  step python "$G/agentround.py" build/hunt/b1 -j 8
  lock
  step python "$G/workbench.py" commit
  if git log -1 --format=%s | grep -q "^Match"; then
    git log -1 --format=%B > build/msg.txt; grep -q "$TRAILER" build/msg.txt || printf '\n%s\n' "$TRAILER" >> build/msg.txt
    git commit -q --amend -F build/msg.txt
    python tools/configure.py "$ver" > /dev/null 2>&1
    python tools/match.py progress --rebuild >> "$L" 2>&1
    gzip -9 -c "build/$ver/report.json" > progress/report.json.gz
    git add progress/report.json.gz README.md && git commit -q -m "$id: progress report" -m "$TRAILER" -- progress/report.json.gz README.md
  fi
  unlock
  echo "$(date +%H:%M) $id: $(grep -o '\*\*[0-9.]*%\*\* of the code' README.md | head -1)" >> "$MONO/clone_chain.log"
done

#!/bin/bash
# data_chain.sh ID... : data to 100 % for freshly set up versions (no tiegen: it shifts the Nintendogs overlays).
# Chain from the 2026-10-31/11-01 data passes: fakeptr, symmerge, orphanfix, thumbfalse, bssgen, datagen, delink_fix,
# verify, datasplit + bsssplit, verify, fieldgap, verify, then commit versions/ID only on VERIFY PASSED.
# Log: versions/ID/data_chain.log ; summary line in data_chain.log at the root.
MONO="$(cd "$(dirname "$0")" && pwd)"
source "$MONO/../../env.sh" >/dev/null 2>&1
G="$MONO/../../studio/gametools"
TRAILER='Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>'
for id in "$@"; do
  d="$MONO/versions/$id"; cd "$d" || continue
  ver=$(ls config | head -1); L="$d/data_chain.log"; : > "$L"
  step() { echo "=== $(date +%H:%M:%S) $*" >> "$L"; "$@" >> "$L" 2>&1; }
  verify() { python tools/configure.py "$ver" >> "$L" 2>&1; python tools/match.py verify >> "$L" 2>&1; grep -q "VERIFY PASSED" <(tail -5 "$L"); }
  step python "$G/fakeptr.py" --apply
  step python "$G/symmerge.py" --apply
  step python "$G/prototypes/orphanfix.py" --apply
  step python "$G/prototypes/thumbfalse.py" --apply
  step python "$G/bssgen.py"
  step python "$G/datagen.py"
  step python tools/configure.py "$ver"
  step python "$G/delink_fix.py"
  if ! verify; then echo "$(date +%H:%M) $id: verify 1 FAILED" >> "$MONO/data_chain.log"; continue; fi
  step python "$G/datagap.py" --json build/gap.json
  step python "$G/prototypes/datasplit.py" build/gap.json
  step python "$G/prototypes/bsssplit.py" build/gap.json
  if ! verify; then echo "$(date +%H:%M) $id: verify 2 (split) FAILED" >> "$MONO/data_chain.log"; continue; fi
  step python "$G/prototypes/fieldgap.py" --sections .data,.rodata,.bss,.ctor
  if ! verify; then echo "$(date +%H:%M) $id: verify 3 (fieldgap) FAILED" >> "$MONO/data_chain.log"; continue; fi
  python tools/match.py progress --rebuild >> "$L" 2>&1
  mkdir -p progress && gzip -9 -c "build/$ver/report.json" > progress/report.json.gz
  pct=$(grep -o 'data [0-9.]*%' README.md | head -1)
  until mkdir "$MONO/.git/chain.lock" 2>/dev/null; do sleep 5; done  # two chains share one repo
  git add -A . >> "$L" 2>&1
  git commit -q -m "$id: data ($pct)" -m "$TRAILER" -- . >> "$L" 2>&1
  rmdir "$MONO/.git/chain.lock"
  echo "$(date +%H:%M) $id: committed, $pct" >> "$MONO/data_chain.log"
done

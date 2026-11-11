#!/bin/bash
# Creates the missing Nintendogs versions in versions/<ID>/ from decomp ds/roms/nintendogs/ (tools/new_project.py),
# then checks each one rebuilds its ROM byte for byte. One at a time. Log: onboard.log
cd "$(dirname "$0")" || exit 1
MONO=$(pwd)
DS="$MONO/../.."
source "$DS/env.sh" >/dev/null 2>&1
LOG="$MONO/onboard.log"
declare -a V=(
  "ADGP|0123 - Nintendogs - Dachshund & Friends (Europe) (En,Fr,De,Es,It).nds"
  "ADGK|1046 - Nintendogs - Dachshund & Chingudeul (Korea).nds"
  "ADGJ|0075 - Nintendogs - Miniature Dachshund & Friends (Japan).nds"
  "AD2E|0089 - Nintendogs - Chihuahua & Friends (USA).nds"
  "AD2P|0124 - Nintendogs - Chihuahua & Friends (Europe) (En,Fr,De,Es,It).nds"
  "AD2K|1047 - Nintendogs - Chihuahua & Chingudeul (Korea).nds"
  "AD2J|0042 - Nintendogs - Chihuahua & Friends (Japan).nds"
  "AD3E|0090 - Nintendogs - Lab & Friends (USA).nds"
  "AD3P|0102 - Nintendogs - Labrador & Friends (Europe) (En,Fr,De,Es,It).nds"
  "AD3K|1045 - Nintendogs - Labrador & Chingudeul (Korea).nds"
  "AD3J|0068 - Nintendogs - Shiba & Friends (Japan).nds"
  "AD5E|0154 - Nintendogs - Best Friends (USA).nds"
  "AD7E|0608 - Nintendogs - Dalmatian & Friends (USA).nds"
  "AD7P|0466 - Nintendogs - Dalmatian & Friends (Europe) (En,Fr,De,Es,It).nds"
  "A36E|x009 - Nintendogs (USA, Europe) (Demo) (Kiosk).nds"
  "A36P|x018 - Nintendogs (Europe) (En,Fr,De,Es,It) (Demo) (Kiosk).nds"
)
for e in "${V[@]}"; do
  id=${e%%|*}; rom=${e#*|}
  dest="$MONO/versions/$id"
  [ -d "$dest" ] && { echo "$(date +%H:%M) $id: exists, skipped" >> "$LOG"; continue; }
  slug="nintendogs-$(echo "$id" | tr 'A-Z' 'a-z')"
  echo "$(date +%H:%M) $id: dsd init..." >> "$LOG"
  (cd "$DS" && python tools/new_project.py "$slug" "nintendogs/$rom" --title "Nintendogs ($id)" >> "$LOG" 2>&1) || {
    echo "$(date +%H:%M) $id: CREATE FAILED" >> "$LOG"; continue; }
  rm -rf "$DS/projets/$slug/.git" "$DS/projets/$slug/.github"
  mv "$DS/projets/$slug" "$dest" || { echo "$id: move failed" >> "$LOG"; continue; }
  ver=$(ls "$dest/config" | head -1)
  (cd "$dest" && python tools/configure.py "$ver" > /dev/null 2>&1 && ninja > build.log 2>&1)
  echo "$(date +%H:%M) $id ($ver): build $(tail -1 "$dest/build.log" | cut -c1-120)" >> "$LOG"
done
echo "$(date +%H:%M) done" >> "$LOG"

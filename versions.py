"""versions.py - the list of Nintendogs versions of this repository and the progress table of README.md.

    python versions.py            # rewrites the table between the markers of README.md from versions/<ID>/README.md

Each version is a complete project in versions/<ID>/ (its own config/, src/, tools/), built from its own folder:
    cd versions/ADGE && python tools/configure.py usa && ninja
"""
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent
VERSIONS = [  # (ID, title, region, No-Intro number)
    ("ADGE", "Dachshund & Friends", "USA", "0091"),
    ("ADGP", "Dachshund & Friends", "Europe", "0123"),
    ("ADGK", "Dachshund & Chingudeul", "Korea", "1046"),
    ("ADGJ", "Miniature Dachshund & Friends", "Japan", "0075"),
    ("ADGJ-rev1", "Miniature Dachshund & Friends", "Japan, Rev 1", "5348"),
    ("AD2E", "Chihuahua & Friends", "USA", "0089"),
    ("AD2P", "Chihuahua & Friends", "Europe", "0124"),
    ("AD2K", "Chihuahua & Chingudeul", "Korea", "1047"),
    ("AD2J", "Chihuahua & Friends", "Japan", "0042"),
    ("AD2J-rev1", "Chihuahua & Friends", "Japan, Rev 1", "5347"),
    ("AD3E", "Lab & Friends", "USA", "0090"),
    ("AD3P", "Labrador & Friends", "Europe", "0102"),
    ("AD3K", "Labrador & Chingudeul", "Korea", "1045"),
    ("AD3J", "Shiba & Friends", "Japan", "0068"),
    ("AD3J-rev1", "Shiba & Friends", "Japan, Rev 1", "5349"),
    ("AD5E", "Best Friends", "USA", "0154"),
    ("AD7E", "Dalmatian & Friends", "USA", "0608"),
    ("AD7P", "Dalmatian & Friends", "Europe", "0466"),
    ("A36E", "Nintendogs Demo (Kiosk)", "USA, Europe", "x009"),
    ("A36P", "Nintendogs Demo (Kiosk)", "Europe", "x018"),
]
BEGIN, END = "<!-- versions:begin -->", "<!-- versions:end -->"


def progress(vid):
    p = ROOT / "versions" / vid / "README.md"
    if not p.exists():
        return None
    m = re.search(r"\*\*([\d.]+)%\*\* of the code matched\D*data ([\d.]+)%\D*(\d+)/(\d+) functions", p.read_text("utf-8"))
    return m.groups() if m else ("?", "?", "?", "?")


def table():
    rows = ["| ID | Game | Region | Code | Data | Functions |", "|---|---|---|---|---|---|"]
    for vid, title, region, _num in VERSIONS:
        pr = progress(vid)
        if pr is None:
            rows.append(f"| {vid} | {title} | {region} | not set up yet | | |")
        else:
            code, data, n, tot = pr
            rows.append(f"| [{vid}](versions/{vid}) | {title} | {region} | {code}% | {data}% | {n}/{tot} |")
    return "\n".join(rows)


def main():
    p = ROOT / "README.md"
    t = p.read_text("utf-8")
    new = re.sub(re.escape(BEGIN) + r".*?" + re.escape(END), BEGIN + "\n" + table() + "\n" + END, t, flags=re.S)
    p.write_text(new, encoding="utf-8", newline="\n")
    print(table())


if __name__ == "__main__":
    main()

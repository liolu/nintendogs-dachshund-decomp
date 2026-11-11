# Nintendogs decompilation

Matching decompilation of every Nintendogs release on the Nintendo DS (2005-2006): the Dachshund, Chihuahua, Lab /
Labrador, Shiba, Dalmatian and Best Friends editions, in every region, plus the kiosk demo.

Each version is a complete project in its own folder `versions/<ID>/` (the ROM game code, with `-rev1` for revisions):
its own dsd config, sources, data and build tools. The editions share most of their code, so a function matched in
one version is cloned to the others.

Progress is published per version on [ByteMatch](https://bytematch.dev/liolu/nintendogs), like
[silent-hill-decomp](https://github.com/shdecompilations/silent-hill-decomp) does for its regions.

## Versions

<!-- versions:begin -->
| ID | Game | Region | Code | Data | Functions |
|---|---|---|---|---|---|
| [ADGE](versions/ADGE) | Dachshund & Friends | USA | 58.54% | 100.00% | 7369/8610 |
| ADGP | Dachshund & Friends | Europe | not set up yet | | |
| ADGK | Dachshund & Chingudeul | Korea | not set up yet | | |
| ADGJ | Miniature Dachshund & Friends | Japan | not set up yet | | |
| [ADGJ-rev1](versions/ADGJ-rev1) | Miniature Dachshund & Friends | Japan (Rev 1) | 51.59% | 100.00% | 6226/8615 |
| AD2E | Chihuahua & Friends | USA | not set up yet | | |
| AD2P | Chihuahua & Friends | Europe | not set up yet | | |
| AD2K | Chihuahua & Chingudeul | Korea | not set up yet | | |
| AD2J | Chihuahua & Friends | Japan | not set up yet | | |
| [AD2J-rev1](versions/AD2J-rev1) | Chihuahua & Friends | Japan (Rev 1) | 54.78% | 100.00% | 6454/8615 |
| AD3E | Lab & Friends | USA | not set up yet | | |
| AD3P | Labrador & Friends | Europe | not set up yet | | |
| AD3K | Labrador & Chingudeul | Korea | not set up yet | | |
| AD3J | Shiba & Friends | Japan | not set up yet | | |
| [AD3J-rev1](versions/AD3J-rev1) | Shiba & Friends | Japan (Rev 1) | 54.92% | 100.00% | 6691/8615 |
| AD5E | Best Friends | USA | not set up yet | | |
| AD7E | Dalmatian & Friends | USA | not set up yet | | |
| AD7P | Dalmatian & Friends | Europe | not set up yet | | |
| A36E | Nintendogs (Demo, Kiosk) | USA, Europe | not set up yet | | |
| A36P | Nintendogs (Demo, Kiosk) | Europe | not set up yet | | |
<!-- versions:end -->

`python versions.py` refreshes this table from each version's README.

## Building one version

You need your own dump of the ROM. Put it in the version folder with the name given in its `README.md`, then:

```bash
cd versions/ADGE
python tools/configure.py usa
ninja
```

The build is checked against the SHA-1 of the original ROM. See `versions/<ID>/README.md` and `AGENTS.md` for the
matching workflow.

## License

See [LICENSE](LICENSE). Nintendogs is a trademark of Nintendo. No ROM is included: bring your own dump.

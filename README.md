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
| [ADGP](versions/ADGP) | Dachshund & Friends | Europe | 0.00% | 100.00% | 0/8629 |
| [ADGK](versions/ADGK) | Dachshund & Chingudeul | Korea | 0.00% | 100.00% | 0/8651 |
| [ADGJ](versions/ADGJ) | Miniature Dachshund & Friends | Japan | 0.00% | 100.00% | 0/8530 |
| [ADGJ-rev1](versions/ADGJ-rev1) | Miniature Dachshund & Friends | Japan, Rev 1 | 51.59% | 100.00% | 6226/8615 |
| [AD2E](versions/AD2E) | Chihuahua & Friends | USA | 0.00% | 100.00% | 0/8610 |
| [AD2P](versions/AD2P) | Chihuahua & Friends | Europe | 0.00% | 100.00% | 0/8629 |
| [AD2K](versions/AD2K) | Chihuahua & Chingudeul | Korea | 0.00% | 100.00% | 0/8651 |
| [AD2J](versions/AD2J) | Chihuahua & Friends | Japan | 0.00% | 100.00% | 0/8530 |
| [AD2J-rev1](versions/AD2J-rev1) | Chihuahua & Friends | Japan, Rev 1 | 54.78% | 100.00% | 6454/8615 |
| [AD3E](versions/AD3E) | Lab & Friends | USA | 0.00% | 100.00% | 0/8610 |
| [AD3P](versions/AD3P) | Labrador & Friends | Europe | 0.00% | 100.00% | 0/8629 |
| [AD3K](versions/AD3K) | Labrador & Chingudeul | Korea | 0.00% | 100.00% | 0/8651 |
| [AD3J](versions/AD3J) | Shiba & Friends | Japan | 0.00% | 100.00% | 0/8530 |
| [AD3J-rev1](versions/AD3J-rev1) | Shiba & Friends | Japan, Rev 1 | 54.92% | 100.00% | 6691/8615 |
| [AD5E](versions/AD5E) | Best Friends | USA | 0.00% | 100.00% | 0/8610 |
| [AD7E](versions/AD7E) | Dalmatian & Friends | USA | ?% | ?% | ?/? |
| [AD7P](versions/AD7P) | Dalmatian & Friends | Europe | ?% | ?% | ?/? |
| [A36E](versions/A36E) | Nintendogs Demo (Kiosk) | USA, Europe | ?% | ?% | ?/? |
| [A36P](versions/A36P) | Nintendogs Demo (Kiosk) | Europe | ?% | ?% | ?/? |
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

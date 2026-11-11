/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _ZN5Sound23InfoInstrumentBankEntry9GetWithIDEj from projets/need-for-speed-underground-2/src/donor/func_020563e4.cpp (same
 * code in another game of this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
namespace Sound {
    struct InfoInstrumentBankEntry {
        u32 fileId;
        u16 waveArchiveIds[4];

        static InfoInstrumentBankEntry *GetWithID(u32 id);
    };
} // namespace Sound
extern "C" {
extern char *data_0214fd54;
}
Sound::InfoInstrumentBankEntry *Sound::InfoInstrumentBankEntry::GetWithID(u32 id) {
    char *root = data_0214fd54;
    char *sub  = *(char **) (root + 0x84);
    int off    = *(int *) (sub + 0x10);
    char *tbl  = (off == 0) ? 0 : sub + off;
    if (tbl == 0) {
        return 0;
    }
    if ((int) id < 0) {
        return 0;
    }
    if (id >= *(unsigned *) tbl) {
        return 0;
    }
    int v      = ((int *) (tbl + id * 4))[1];
    char *base = *(char **) (root + 0x84);
    return (v == 0) ? 0 : (InfoInstrumentBankEntry *) (base + v);
}

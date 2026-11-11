/* compiler: 2.0/sp1p5 -O4,p -ipa file -inline on,noauto */
/* _ZN5Sound17InfoSequenceEntry9GetWithIDEj from projets/pokemon-dash/src/donor/func_02096c88.cpp (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
namespace Sound {
    struct InfoSequenceEntry {
        u32 fileId;
        u16 bankId;
        u8 volume;
        u8 channelPriority;
        u8 playerPriority;
        u8 playerNumber;

        static InfoSequenceEntry *GetWithID(u32 id);
    };
} // namespace Sound
extern "C" {
extern char *data_0214fd54;
}
Sound::InfoSequenceEntry *Sound::InfoSequenceEntry::GetWithID(u32 id) {
    char *root = data_0214fd54;
    char *sub  = *(char **) (root + 0x84);
    int off    = *(int *) (sub + 0x8);
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
    return (v == 0) ? 0 : (InfoSequenceEntry *) (base + v);
}

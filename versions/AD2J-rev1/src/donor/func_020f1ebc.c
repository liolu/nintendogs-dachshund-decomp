/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020f1eb4 from projets/nintendogs-shiba-friends/src/donor/func_020f1eb4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 data_02155000[];
void func_020f1ebc(void) {
    u32 v;
    u8 *p = data_02155000;
    v     = *(u32 *) (p + 0x34);
    if (v != 0) {
        *(u32 *) (p + 0x34) = 0;
    }
}

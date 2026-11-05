/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c8230 from projets/nintendogs-shiba-friends/src/donor/func_020c8230.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 func_020c8234(s16 i) {
    u8 *q    = data_02154c48 + 0x1000;
    s32 base = *(s32 *) (q + 0x434) + 4;
    return i * 164 + base;
}

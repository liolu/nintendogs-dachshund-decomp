/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c81e8 from projets/nintendogs-shiba-friends/src/donor/func_020c81e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c48;
s32 func_020c81ec(s16 param_1, s32 param_2) {
    s32 r = 0;
    if (param_2 >= 2 && param_2 <= 5) {
        s16 k   = (s16) (param_2 - 2);
        u8 *obj = (u8 *) data_02154c48;
        s32 t   = *(s32 *) (obj + 0x141c) + 0xf8;
        r       = (param_1 * 112 + t) + k * 28;
    }
    return r;
}

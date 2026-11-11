/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006ee0 from projets/nintendogs-shiba-friends/src/donor/func_02006ee0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s16 data_02124ae0[];
s32 func_02006ee0(s32 param_1) {
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s32 t = (s32) (((u32) (param_1 << 18)) >> 16);
        t     = t >> 4;
        return 0x1000 - data_02124ae0[t * 2 + 1];
    }
    return 0x1000;
}

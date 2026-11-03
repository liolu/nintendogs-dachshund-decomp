/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006f54 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006f54.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s16 data_02124ad8[];
s32 func_02006ee0(s32 param_1) {
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s32 t = (s32) (((u32) (param_1 << 18)) >> 16);
        t     = t >> 4;
        return 0x1000 - data_02124ad8[t * 2 + 1];
    }
    return 0x1000;
}

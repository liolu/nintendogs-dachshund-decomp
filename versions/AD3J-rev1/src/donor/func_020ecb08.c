/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209dd38 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209dd38.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021471a0[];
s32 func_020ecb08(s32 param_1, s32 param_2, s32 param_3) {
    s32 hi = 32767;
    u8 *e  = (u8 *) (data_021471a0[param_1] + 8);
    s32 v;
    e = e + (param_2 << 3);
    v = *(s16 *) (e + 4) + (param_3 >> *(s8 *) (e + 1));
    if (v > hi) {
        v = hi;
    } else if (v < -32768) {
        v = -32768;
    }
    return v;
}

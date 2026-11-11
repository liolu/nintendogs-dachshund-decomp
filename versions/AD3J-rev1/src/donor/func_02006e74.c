/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006ee8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006ee8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s16 data_02124ad8[];
s32 func_02006e74(s32 param_1) {
    s32 t;
    u16 t16;
    s32 v;
    s64 w;
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 >= 0x1000) {
        return 0x1000;
    }
    t   = (s32) ((u32) param_1 << 15) >> 12;
    t16 = (u16) (t - 0x4000);
    v   = data_02124ad8[(t16 >> 4) * 2];
    w   = (s64) v * 2048 + 2048;
    return (s32) (u32) (w >> 12) + 2048;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006e80 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006e80.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s16 data_02124ad8[];
s32 func_02006e0c(s32 x) {
    s32 q;
    s32 v;
    s64 p;
    if (x <= 0) {
        return 0;
    }
    if (x >= 4096) {
        return 4096;
    }
    q = (s32) (((u32) (x << 19)) >> 16) >> 4;
    v = data_02124ad8[q * 2 + 1];
    p = (s64) v * 2048 + 2048;
    return 2048 - (s32) (u32) (p >> 12);
}

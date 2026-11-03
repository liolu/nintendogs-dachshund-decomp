/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006dc4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006dc4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
u32 func_02006d50(s32 param_1) {
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s64 v = (s64) param_1 * (s64) param_1 + 0x800;
        s32 t = (s32) (u32) (v >> 12);
        s64 w = (s64) param_1 * (s64) t + 0x800;
        return (u32) (w >> 12);
    }
    return 0x1000;
}

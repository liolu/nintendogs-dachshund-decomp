/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006dd8 from projets/nintendogs-shiba-friends/src/donor/func_02006dd8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
u32 func_02006dd8(s32 param_1) {
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s64 v = (s64) param_1 * (s64) param_1 + 0x800;
        return (u32) (v >> 12);
    }
    return 0x1000;
}

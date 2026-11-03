/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02086178 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02086178.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
s32 func_0208991c(u32 a, s32 b, ...) {
    u32 k = ((u32) * (u16 *) &a << 16) >> 30;
    if (k == 1) {
        return (b + 1) / 2;
    }
    if (k != 2) {
        b = 0;
    }
    return b;
}

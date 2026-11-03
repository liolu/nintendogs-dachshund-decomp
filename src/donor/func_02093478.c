/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ab5dc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ab5dc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_01ffda04(s32 i);
extern u32 func_02033dd4(u32 v);
u32 func_02093478(void) {
    u32 res = 0;
    s32 i   = 0;
    for (;;) {
        u32 r = func_01ffda04(i);
        if (r != 0) {
            r = func_02033dd4(r);
            if (r == 0) {
                res = 1;
                break;
            }
        }
        i = (s16) (i + 1);
        if (i >= 3) {
            break;
        }
    }
    return res;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f3b8c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020f3b8c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02154cac;
extern s32 func_02069098(u32 a, u32 b);
s32 func_020e1788(void) {
    s32 v = func_02069098(*(u32 *) (data_02154cac + 4), 409600);
    if (v >= 4096) {
        *(u32 *) (data_02154cac + 4) = 0;
        return 4096;
    }
    return v;
}

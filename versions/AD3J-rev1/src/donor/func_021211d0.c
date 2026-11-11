/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7d34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d7d34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02157b60;
extern s32 func_0211e86c(void);
extern u32 func_0211e8ec(void);
extern s32 func_0211e880(void);
u32 func_021211d0(void) {
    s32 r;
    u32 u;

    r = func_0211e86c();
    if (r != 0) {
        return 5;
    }
    u = func_0211e8ec();
    switch (u) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
        case 3:
            goto search;
        case 4:
            goto r3;
        default:
            goto r5;
    }
search:
    r = func_0211e880();
    if (r != 0) {
        if (*(u32 *) (*(u8 **) &data_02157b60 + 4) == 0) {
            return 2;
        }
        return 4;
    }
    return 3;
r3:
    return 3;
r5:
    return 5;
}

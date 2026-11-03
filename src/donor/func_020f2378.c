/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a366c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a366c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_0213072a[];
extern u8 data_02132d78[];
extern s32 func_020ef690(void);
u8 func_020f2378(void) {
    u16 k = *(u16 *) (data_02154cb8 + 0x18);
    if (k == 24) {
        s32 i = func_020ef690();
        return data_02132d78[i];
    }
    return data_0213072a[k * 6];
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ec510 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ec510.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154ca4;
extern void func_020da8e0(s32 a);
extern s32 func_020d948c(s32 a);
s32 func_020da204(s32 p1) {
    s32 iVar3;
    s16 v;

    v = ((s16 *) *(u8 **) &data_02154ca4)[p1];
    if (v == 0) {
        return 1;
    }
    if (v == 2) {
        ((u16 *) *(u8 **) &data_02154ca4)[p1] = 0;
        iVar3                                 = *(s32 *) ((u8 *) *(u8 **) &data_02154ca4 + p1 * 4 + 8);
        if (iVar3 != 0) {
            func_020da8e0(iVar3);
            *(s32 *) ((u8 *) *(u8 **) &data_02154ca4 + 8 + ((u32) p1 << 2)) = 0;
        }
        iVar3 = func_020d948c(p1);
        if (iVar3 != 0) {
            return 1;
        }
    }
    return 0;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f156c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020f156c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154ca8;
extern u32 func_020b54bc(u32 a, s32 b);
extern u8 func_020c2dd8(u32 a);
u32 func_020df190(u32 param_1, s32 param_2) {
    u32 uVar4;
    u32 t;
    *(u32 *) (*(u8 **) &data_02154ca8 + 0x24) = func_020b54bc(param_1, (s32) (s16) param_2);
    *(u16 *) (*(u8 **) &data_02154ca8 + 0x10) = *(u16 *) (*(u8 **) (*(u8 **) &data_02154ca8 + 0x24) + 0x10);
    uVar4                                     = *(u32 *) (*(u8 **) &data_02154ca8 + 0x18);
    if (uVar4 != 0) {
        return uVar4;
    }
    *(u32 *) (*(u8 **) &data_02154ca8 + 0x14) = 1;
    t                                         = *(u32 *) *(u32 *) &data_02154ca8;
    if (t == 0) {
        return t;
    }
    return (u32) func_020c2dd8(*(u32 *) (*(u8 **) &data_02154ca8 + 0x1c));
}

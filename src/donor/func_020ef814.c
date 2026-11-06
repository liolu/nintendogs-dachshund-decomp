/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0a98 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a0a98.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 data_02154cb8[];
extern u8 data_02130731[];
extern u32 func_020f0c28(u32 a, u32 b);
u32 func_020ef814(u32 param_1) {
    u32 uVar1;

    uVar1 = data_02130731[*(u16 *) (data_02154cb8 + 24) * 6];
    if (uVar1 != 0xff) {
        return func_020f0c28(uVar1, param_1);
    }
    return -1;
}

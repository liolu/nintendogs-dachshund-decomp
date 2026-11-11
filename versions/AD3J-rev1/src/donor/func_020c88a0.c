/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02093160 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02093160.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02154c48;
extern void func_0206dfd4(u8 *p, u32 a, u32 b);
void func_020c88a0(u8 *param_1, s16 param_2) {
    u8 *iVar1 = *(u8 **) (data_02154c48 + param_2 * 24 + 0x14f4);
    func_0206dfd4(param_1, (u32) (iVar1 + 4), 0x85c);
    *(u16 *) (iVar1 + 0x8fe) = *(u16 *) (iVar1 + 0x8fe) | 1;
}

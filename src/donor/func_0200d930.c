/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200d630 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200d630.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 *data_0214b484;
extern void func_0200d9c0(u8 *p, u32 a, u32 b);
void func_0200d930(u8 *param_1) {
    u32 uVar3;
    u32 uVar4;

    uVar3          = *data_0214b484 * 0x10dcd + 1;
    *data_0214b484 = uVar3;
    uVar4          = *data_0214b484 * 0x10dcd + 1;
    *data_0214b484 = uVar4;
    func_0200d9c0(param_1, (u16) (((u32) (u16) uVar4 * 200) >> 16) == 0, (u16) (((u32) (u16) uVar3 * 200) >> 16) == 0);
}

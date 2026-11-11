/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020930f8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020930f8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef volatile u16 vu16;
extern u32 data_02154c48;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020c8838(s16 param_1) {
    u8 *base = (u8 *) data_02154c48;
    u8 *iv   = *(u8 **) (base + (s16) param_1 * 24 + 0x14f4);
    vu16 z;
    vu16 *pz = &z;
    *pz      = 0;
    func_0206dfbc(*pz, (u32) (iv + 4), 0x85c);
    *(u16 *) (iv + 4)     = 0xffff;
    *(u16 *) (iv + 0x8fe) = *(u16 *) (iv + 0x8fe) | 1;
}

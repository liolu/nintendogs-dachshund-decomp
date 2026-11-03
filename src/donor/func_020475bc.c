/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02047c7c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02047c7c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *data_0214b484;
extern void func_02047f5c(u8 *p, u32 a, u32 b);
void func_020475bc(u8 *p) {
    u32 v = *(u32 *) data_0214b484 * 0x10dcd + 1;
    u32 prod;
    *(u32 *) data_0214b484 = v;
    prod                   = (u32) ((u16) v) * 50u;
    func_02047f5c(p, 4, (u16) (prod >> 16) == 0);
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020074f0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020074f0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0207d0e0(u32 a, u32 b, u8 *c, u32 d);
u32 func_0200747c(u8 *param_1) {
    u32 n1;
    u32 n2;
    u32 m;
    u32 r5;
    u8 *r6;

    n1 = *(u16 *) (param_1 + 12) << 3;
    if (n1 != 0) {
        func_0207d0e0(0, (*(u32 *) (param_1 + 8) & 0xffff) << 3, param_1 + *(u32 *) (param_1 + 0x14), n1);
        *(u16 *) (param_1 + 16) = *(u16 *) (param_1 + 16) | 1;
    }
    n2 = *(u16 *) (param_1 + 28) << 3;
    if (n2 != 0) {
        m  = *(u32 *) (param_1 + 0x18) & 0xffff;
        r5 = m << 3;
        r6 = param_1 + *(u32 *) (param_1 + 0x28);
        func_0207d0e0(0, r5, param_1 + *(u32 *) (param_1 + 0x24), n2);
        func_0207d0e0(0, ((0x1ffff & (m << 3)) >> 1) + 0x20000 + ((r5 & 0x40000) >> 2), r6, n2 >> 1);
        *(u16 *) (param_1 + 32) = *(u16 *) (param_1 + 32) | 1;
    }
    return 1;
}

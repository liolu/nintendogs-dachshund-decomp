/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b4528 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b4528.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef volatile u16 vu16;
extern void func_0206dfbc(u32 a, u8 *b, u32 c);
extern void func_020cacf4(u8 *p);
void func_0209c24c(u8 *param_1) {
    vu16 z0;
    vu16 z1;
    vu16 z2;
    vu16 z3;

    z0 = 0;
    func_0206dfbc(z0, param_1, 0x74f8);
    *(u16 *) param_1       = 0;
    *(u16 *) (param_1 + 2) = 0;
    func_020cacf4(param_1 + 4);
    z1 = 0;
    func_0206dfbc(z1, param_1 + 0x860, 0x18b0);
    z2 = 0;
    func_0206dfbc(z2, param_1 + 0x2110, 0x500);
    *(s16 *) (param_1 + 0x2610) = -1;
    *(s16 *) (param_1 + 0x2612) = -1;
    z3                          = 0;
    func_0206dfbc(z3, param_1 + 0x2614, 0xa4);
    *(s16 *) (param_1 + 0x74f0) = -1;
}

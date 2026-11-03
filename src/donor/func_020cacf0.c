/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02095670 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02095670.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020cacf0(u16 *param_1) {
    vu16 z = 0;
    func_0206dfbc(z, (u32) param_1, 0x85c);
    *param_1 = 0xffff;
}

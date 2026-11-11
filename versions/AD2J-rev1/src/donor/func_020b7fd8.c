/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02111c34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02111c34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020b7fd8(u32 param_1) {
    vu16 z;
    vu16 *pz = &z;
    *pz      = 0;
    func_0206dfbc(*pz, param_1, 0x48fc);
}

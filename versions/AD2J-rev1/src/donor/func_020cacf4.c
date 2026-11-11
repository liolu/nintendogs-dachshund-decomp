/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cacf0 from projets/nintendogs-shiba-friends/src/donor/func_020cacf0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern void func_0206dfbc(u32 a, u32 b, u32 c);
void func_020cacf4(u16 *param_1) {
    vu16 z = 0;
    func_0206dfbc(z, (u32) param_1, 0x85c);
    *param_1 = 0xffff;
}

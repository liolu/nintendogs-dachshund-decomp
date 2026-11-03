/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e5564 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e5564.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_02111b34(u32 a, u32 b, u32 c, u32 d, u32 *e);
void func_020d3280(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 local_14[3];
    vu32 *p;
    p    = (vu32 *) local_14;
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    func_02111b34(param_1, param_2, param_3, param_4, local_14);
}

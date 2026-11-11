/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fccc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208fccc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 *data_02154c3c;
extern u32 func_020c63bc(u32 *a, u32 b, u32 c);
u32 func_020c5630(u32 param_1) {
    u32 *iVar2;
    u32 uVar1;

    iVar2 = (u32 *) data_02154c3c[1];
    uVar1 = func_020c63bc(iVar2, param_1 + 0x514, 0);
    return iVar2[2] + ((u32 *) iVar2[1])[uVar1 & 0xffff];
}

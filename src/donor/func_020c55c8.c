/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c55c4 from projets/nintendogs-shiba-friends/src/donor/func_020c55c4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 *data_02154c3c;
extern u32 func_020c63c0(u32 a, u32 b, u32 c);
u32 func_020c55c8(u32 param_1, u32 param_2) {
    u32 iVar2;
    u32 uVar1;
    u32 iVar3;
    iVar2 = 0;
    uVar1 = 0;
    if (param_1 != 0 && param_1 == 1) {
        iVar2 = 1;
    }
    if (param_2 <= 2) {
        uVar1 = param_2;
    }
    iVar3 = data_02154c3c[1];
    uVar1 = func_020c63c0(iVar3, iVar2 + 0x546, uVar1);
    return *(u32 *) (iVar3 + 8) + *(u32 *) (*(u32 *) (iVar3 + 4) + (uVar1 & 0xffff) * 4);
}

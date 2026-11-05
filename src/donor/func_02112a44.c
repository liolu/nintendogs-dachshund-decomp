/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112a3c from projets/nintendogs-shiba-friends/src/donor/func_02112a3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 func_01ffda04(s32 a);
extern u32 func_020280f8(u32 a);
u32 func_02112a44(s32 param_1) {
    u32 iVar2 = func_01ffda04(param_1);
    u32 uVar3 = func_020280f8(iVar2);
    s64 lVar1 = (s64) (s32) uVar3 * 0x3000 + 0x800;
    return (u32) (lVar1 >> 12);
}

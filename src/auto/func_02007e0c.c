/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007e0c from projets/nintendogs-shiba-friends/src/auto/func_02007e0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void *func_01ffda04(u32 a);
extern u32 func_020280f8(void *p);
void func_02007e0c(u8 *param_1) {
    u8 *iVar1;
    u32 *tab;

    iVar1 = (u8 *) func_01ffda04(1);
    if (iVar1 == 0) {
        return;
    }
    tab = (u32 *) (iVar1 + 0x354);
    if (param_1 == 0) {
        return;
    }
    *(u32 *) (param_1 + 0x20) = tab[0] + ((u32 *) *(*(u32 **) (param_1 + 0x18)))[1];
    *(u32 *) (param_1 + 0x24) = tab[1] + ((u32 *) *(*(u32 **) (param_1 + 0x18)))[2];
    *(u32 *) (param_1 + 0x28) = tab[2] + ((u32 *) *(*(u32 **) (param_1 + 0x18)))[3];
    *(s32 *) (param_1 + 0x54) = (s16) func_020280f8(iVar1);
}

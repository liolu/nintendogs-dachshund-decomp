/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0ea8 from projets/nintendogs-shiba-friends/src/donor/func_020f0ea8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_0207472c(s32 *p, u32 a, u32 b);
extern void func_02072214(s32 *p, s32 a, s32 b);
extern u8 data_02154f24[];
extern u8 data_02154cb8[];
u32 func_020f0eb0(u32 param_1, u32 param_2, s32 param_3, s32 param_4) {
    u8 *iVar2 = data_02154f24;
    s32 uVar5;
    u16 uVar1;
    s32 *piVar6;
    u8 *iVar4;

    uVar5 = 0;
    do {
        uVar1 = (u16) (1 << uVar5);
        if ((*(u16 *) (iVar2 + 0x18) & uVar1) == 0) {
            *(u16 *) (iVar2 + 0x18) |= uVar1;
            goto found;
        }
        uVar5 = (s16) (uVar5 + 1);
    } while (uVar5 < 4);
    uVar5 = -1;
found:
    if (uVar5 != -1) {
        piVar6 = (s32 *) (iVar2 + 0x28 + uVar5 * 4);
        func_0207472c(piVar6, param_1, param_2);
        func_02072214(piVar6, param_3, param_4);
        *(s16 *) (iVar2 + uVar5 * 2) = (s16) param_1;
        iVar4                        = iVar2 + uVar5 * 2;
        *(s16 *) (iVar4 + 8)         = (s16) param_2;
        *(u16 *) (iVar2 + 0x1a) |= 1 << uVar5;
        *(s16 *) (iVar4 + 0x10) = (s16) param_3;
        if (*(u32 *) (data_02154cb8 + 0x1c) != 0) {
            func_02072214(piVar6, 0, 0);
        }
    }
    return uVar5;
}

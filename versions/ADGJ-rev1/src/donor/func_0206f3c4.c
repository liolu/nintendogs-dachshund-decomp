/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e888 from projets/children-of-mana/src/donor/func_0205e888.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_020713f0(void);
extern u32 *func_02070198(u32 a, u32 b);
extern u32 func_0207153c(void);
extern s32 func_02070540(u16 *a, u32 b, u32 c, u32 d, u32 e, u32 *f, u32 g);
s32 func_0206f3c4(u8 *param_1, s32 param_2, u16 *param_3) {
    s32 iVar4;
    u8 *puVar5;
    u16 uVar6;
    s32 iVar1;
    u32 *puVar2;
    u32 uVar3;

    puVar5 = param_1 + 0x1d4 + param_2 * 0x68;
    iVar4  = 0;
    if (puVar5[0] == 2) {
        iVar1 = func_020713f0();
        if (iVar1 == 0) {
            uVar6 = 0xffff;
        } else {
            uVar6 = 1;
        }
        if (puVar5[1] == 6) {
            puVar2 = func_02070198(*(u32 *) (puVar5 + 0x10), *(u32 *) (puVar5 + 0x14));
            uVar3  = func_0207153c();
            iVar4 =
                func_02070540(param_3, uVar6, puVar5[2], *(u32 *) (puVar5 + 0x10), *(u32 *) (puVar5 + 0x14), puVar2, uVar3);
            puVar5[0] = 1;
        }
    }
    return iVar4;
}

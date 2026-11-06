/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e9cc from projets/children-of-mana/src/donor/func_0205e9cc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_020713f0(void);
extern s32 *func_02071410(u32 a);
extern s32 func_02070230(u32 a, s32 b);
extern u32 *func_02070198(u32 a, s32 b);
extern u32 func_0207153c(void);
extern s32 func_0207069c(u16 *a, s32 b, u32 c, u32 d, s32 e, u16 *f, s32 g);
extern void func_0206fe68(s32 a, s32 b, u32 c, s32 d);
s32 func_0206f508(s32 param_1, u32 param_2, u16 *param_3) {
    s32 iVar1;
    s32 *piVar2;
    s32 iVar6;
    u32 *puVar3;
    u32 uVar4;
    u8 *puVar5;
    s32 uVar7;

    puVar3 = (u32 *) (param_1 + 0x138);
    puVar5 = (u8 *) (param_1 + 0x1d4 + param_2 * 0x68);
    iVar6  = 0;
    if (puVar5[0] == 2) {
        iVar1 = func_020713f0();
        uVar7 = (iVar1 == 0) ? 0xfffe : 1;
        if (puVar5[1] == 4) {
            piVar2 = func_02071410(*(u32 *) (puVar5 + 0x10));
            if (piVar2 != ((void *) 0) && (iVar1 = func_02070230(*(u32 *) (puVar5 + 0x10), *(s32 *) (puVar5 + 0x14))) != -1) {
                if (*(u16 *) ((u8 *) piVar2 + 0x32) == 0) {
                    puVar3 = func_02070198(*(u32 *) (puVar5 + 0x10), iVar1);
                    uVar4  = func_0207153c();
                    iVar6  = func_0207069c(param_3, uVar7, puVar5[2], *(u32 *) (puVar5 + 0x10), iVar1, (u16 *) puVar3, uVar4);
                } else if (*(u16 *) ((u8 *) piVar2 + 0x32) == 1) {
                    puVar3[5]                       = *(u32 *) (puVar5 + 0x10);
                    puVar3[6]                       = iVar1;
                    iVar1                           = func_0207153c();
                    *(s16 *) ((u8 *) puVar3 + 0x20) = (s16) iVar1;
                    puVar3[7]                       = 0;
                    func_0206fe68(param_1, 0xd, param_2, 0);
                    if (puVar3[7] != 0) {
                        iVar6 = func_0207069c(param_3, uVar7, puVar5[2], puVar3[5], puVar3[6], (u16 *) puVar3[7],
                                              *(s16 *) ((u8 *) puVar3 + 0x20));
                    }
                }
            }
            puVar5[0] = 1;
        }
    }
    return iVar6;
}

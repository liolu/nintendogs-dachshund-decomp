/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8500 from projets/nintendogs-chihuahua-friends/src/donor/func_020a8500.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02153744;
extern void func_0206dfbc(u16 a, s32 b, s32 c);
void func_020a8500(u32 param_1, s32 param_2, u32 param_3) {
    u8 *iVar8;
    u32 t;
    u32 uVar5;
    s32 iVar4;
    s32 iVar6;
    u32 uVar9;
    u32 uVar1;
    u32 uVar3;
    u8 *q;
    vu16 local;

    uVar3 = data_02153744;
    t     = param_3 & 0xf;
    uVar5 = 0;
    iVar8 = (u8 *) ((uVar3 + 4) + param_2 * 0x1b8);
    q     = iVar8 + 0x18;
    iVar4 = *(s32 *) (iVar8 + 0x14);
    if (*(s32 *) (iVar8 + 4) == 0) {
        return;
    }
    if (*(s32 *) (iVar8 + 8) != 0) {
        return;
    }
    iVar6 = 0;
    uVar9 = 0;
    do {
        uVar1 = t << uVar9;
        uVar5 = (u16) (uVar5 | uVar1);
        iVar6 = iVar6 + 1;
        uVar9 = uVar9 + 4;
    } while (iVar6 < 8);
    iVar6 = uVar3 + 0x2948;
    if (iVar6 != 0) {
        uVar3 = (*(u16 *) (q + 0x24) * 0x20) / 2;
        iVar6 = iVar6 + uVar3 * 2;
    }
    local = uVar5;
    func_0206dfbc(local, iVar6, iVar4);
    *(s32 *) (q + 0x20) = 1;
}

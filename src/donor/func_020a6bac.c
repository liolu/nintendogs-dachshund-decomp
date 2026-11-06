/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a6bac from projets/nintendogs-shiba-friends/src/auto/func_020a6bac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u8 *data_02153740;
extern s32 func_0210021c(u8 *p);
void func_020a6bac(u8 *param_1) {
    s32 iVar6;
    vu16 *puVar1;
    vu16 *puVar2;
    u32 uVar3;
    vu16 *puVar4;
    vu32 *puVar5;

    iVar6 = func_0210021c(param_1 + 0x4);
    iVar6 = -0x20 - (iVar6 % 72);
    if (*(s32 *) (data_02153740 + 0xac) == 3) {
        iVar6 = 0;
    }
    *(vu32 *) 0x04001018 = 0x01ff0000 & (iVar6 << 16);
    puVar1               = (vu16 *) 0x0400100e;
    if (*(s32 *) (param_1 + 0x768) != 0) {
        *puVar1                    = (*puVar1 & 0x43) | 0x704;
        *puVar1                    = (*puVar1 & ~3) | 1;
        *(s32 *) (param_1 + 0x768) = 0;
    }
    *(vu32 *) 0x0400101c = -*(s32 *) (param_1 + 0x760) & 0x1ff;
    uVar3                = 0x20b0;
    puVar2               = (vu16 *) 0x04001040;
    puVar4               = (vu16 *) 0x04001044;
    puVar5               = (vu32 *) 0x04001000;
    switch (*(s32 *) (param_1 + 0x76C)) {
        case 4:
        case 5:
        case 6:
            *(vu16 *) 0x04001048 = (*(vu16 *) 0x04001048 & ~63) | 0x18;
            puVar1               = (vu16 *) 0x0400104a;
            *puVar1              = (*puVar1 & ~63) | 0x17;
            *puVar2              = (*(s32 *) (param_1 + 0x760) + 0xff) & 0xff;
            *puVar4              = (u16) uVar3;
            *puVar5              = (*puVar5 & 0xffff1fff) | 0x2000;
            return;
        case 7:
            *puVar5 = *puVar5 & 0xffff1fff;
            return;
        default:
            return;
    }
}

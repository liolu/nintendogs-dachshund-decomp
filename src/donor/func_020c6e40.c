/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c6e40 from projets/nintendogs-chihuahua-friends/src/donor/func_020c6e40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0212d2dc[];
extern u32 func_020c6564(u32 a, u32 b);
extern u32 func_020c7038(u8 *p);
extern u32 func_020c5c00(u32 a);
extern u32 func_020c6344(u32 a, u32 b);
u32 func_020c6e40(u8 *param_1) {
    u32 uVar1;
    s32 flag;
    s32 iVar2;
    u32 zz;
    u8 *iVar5;
    u32 uVar4;

    flag  = 0;
    uVar4 = 0;
    iVar5 = *(u8 **) (param_1 + 0x30);
    if (*(s32 *) (param_1 + *(u16 *) (param_1 + 52) * 4 + 0x38) == 0) {
        *(u16 *) (param_1 + 2) = 3;
        iVar5                  = (u8 *) func_020c6564(*(u32 *) (param_1 + 0x2c), *(u16 *) (iVar5 + 2));
        *(s32 *) (param_1 + *(u16 *) (param_1 + 52) * 4 + 0x38) = (s32) iVar5;
        return 0;
    }
    *(s16 *) (param_1 + 6) = *(s16 *) (param_1 + 6) + 1;
    if (*(s16 *) (param_1 + 6) >= *(s16 *) (param_1 + 4)) {
        *(u16 *) (param_1 + 6) = 0;
        flag                   = 1;
    }
    if (flag == 0) {
        goto fin;
    }
    uVar1 = **(u16 **) (param_1 + *(u16 *) (param_1 + 52) * 4 + 0x38);
    if (uVar1 == 0x1a) {
        func_020c7038(param_1);
        goto fin;
    }
    if (*(s16 *) (param_1 + 16) != 0) {
        uVar1                   = func_020c5c00(uVar1);
        *(u16 *) (param_1 + 16) = 0;
    }
    if (uVar1 != 0) {
        *(u16 *) (param_1 + *(s16 *) (param_1 + 88) * 2 + 90) = (u16) uVar1;
        *(s16 *) (param_1 + 88)                               = *(s16 *) (param_1 + 88) + 1;
    }
    uVar4 = 1;
    if (uVar1 != 0) {
        goto lblD;
    }
    if (*(u16 *) (param_1 + 52) != 0) {
        goto lblC;
    }
    if (*(s16 *) (param_1 + 26) == 1) {
        goto lblA;
    }
    uVar1 = *(u16 *) (iVar5 + 4);
    if (uVar1 == 0xffff) {
        goto lblB;
    }
    iVar5                     = (u8 *) func_020c6344(*(u32 *) (param_1 + 0x2c), uVar1);
    *(s32 *) (param_1 + 0x30) = (s32) iVar5;
    iVar2                     = 0;
    *(s16 *) (param_1 + 8)    = iVar2;
    *(s16 *) (param_1 + 26)   = uVar4;
    *(s16 *) (param_1 + 12)   = 30;
    *(s16 *) (param_1 + 16)   = iVar2;
    *(s16 *) (param_1 + 20)   = uVar4;
    *(s16 *) (param_1 + 4)    = *(s16 *) (data_0212d2dc + 10);
    if (*(s16 *) (param_1 + 88) > 0) {
        zz = iVar2;
        do {
            *(u16 *) (param_1 + (u32) iVar2 * 2 + 90) = zz;
            iVar2                                     = iVar2 + 1;
        } while (iVar2 < *(s16 *) (param_1 + 88));
    }
    iVar2                   = 0;
    *(s16 *) (param_1 + 88) = iVar2;
    *(u16 *) (param_1 + 52) = iVar2;
    zz                      = iVar2;
    do {
        *(s32 *) (param_1 + (u32) iVar2 * 4 + 0x38) = zz;
        iVar2                                       = iVar2 + 1;
    } while (iVar2 < 2u);
    goto fin;
lblB:
    *(u16 *) param_1 = 2;
    goto fin;
lblA:
    *(u16 *) param_1        = 6;
    *(s16 *) (param_1 + 10) = *(s16 *) (param_1 + 12);
    goto fin;
lblC:
    *(s32 *) (param_1 + *(u16 *) (param_1 + 52) * 4 + 0x38) = 0;
    *(u16 *) (param_1 + 52)                                 = *(u16 *) (param_1 + 52) - 1;
    goto fin;
lblD:
    *(s32 *) (param_1 + *(u16 *) (param_1 + 52) * 4 + 0x38) = *(s32 *) (param_1 + *(u16 *) (param_1 + 52) * 4 + 0x38) + 2;
fin:
    return uVar4;
}

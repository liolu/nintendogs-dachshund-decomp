/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eabbc from projets/nintendogs-chihuahua-friends/src/donor/func_020eabbc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_020eae74(u32 *p, s32 a);
u32 func_020eabbc(u32 *param_1, s32 param_2, u32 param_3) {
    s32 bVar1;
    u32 uVar2;
    s32 iVar3;

    *(s16 *) ((u8 *) param_1 + 40) = (s16) param_2;
    bVar1                          = 0;
    switch (param_2) {
        case -2:
            iVar3 = 0x30;
            break;
        case 53:
            iVar3 = 0x31;
            bVar1 = 1;
            break;
        case 54:
        case 55:
            iVar3 = 0x32;
            bVar1 = 1;
            break;
        case 56:
        case 57:
            iVar3 = 0x35;
            bVar1 = 1;
            break;
        case 58:
            iVar3 = 0x33;
            break;
        case 59:
            iVar3 = 0x34;
            break;
        default:
            return 0xffffffff;
    }
LAB:
    if (iVar3 == -1) {
        return 0xffffffff;
    }
    if (bVar1) {
        uVar2 = func_020eae74(param_1, iVar3);
        if (uVar2 == 0xffffffff) {
            return uVar2;
        }
        *(u32 *) ((u8 *) param_1 + uVar2 * 4 + 0x2c) = param_3;
        *(u16 *) ((u8 *) param_1 + 42)               = *(u16 *) ((u8 *) param_1 + 42) | (1 << uVar2);
        return uVar2;
    }
    uVar2 = func_020eae74(param_1, iVar3);
    return uVar2;
}

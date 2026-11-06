/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ead20 from projets/nintendogs-chihuahua-friends/src/donor/func_020ead20.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_020f7170(void);
extern u32 func_020ea660(s32 *p);
u32 func_020ead18(s32 *param_1, s32 param_2) {
    int uVar4;
    u16 bit;
    u32 iVar3;
    u16 uVar2;
    s16 idx;

    iVar3 = func_020f7170();
    if (-11 == iVar3) {
        goto fail;
    }
    idx = 0;
    if (param_1[0] > 0) {
        do {
            bit = (1 << idx);
            if ((*(u16 *) (param_1 + 1) & bit) != 0 && (param_2 == *(s16 *) ((u8 *) param_1 + idx * 2 + 0x12)) &&
                (((s32 *) ((u8 *) param_1 + idx * 4))[6] != 0)) {
                *(u16 *) ((u8 *) param_1 + 6) = *(u16 *) ((u8 *) param_1 + 6) | bit;
                return idx;
            }
            idx = 1 + idx;
        } while (idx < param_1[0]);
    }
    uVar4 = func_020ea660(param_1);
    if (uVar4 == 0xffffffff) {
        return uVar4;
    }
    if (0) {
        return 0xffffffff;
    }
    uVar2                                            = (1 << uVar4);
    *(s16 *) ((u8 *) param_1 + uVar4 * 2 + 0x12)     = param_2;
    *(u16 *) (param_1 + 1)                           = *(u16 *) (param_1 + 1) | uVar2;
    *(u16 *) ((u8 *) param_1 + 6)                    = *(u16 *) ((u8 *) param_1 + 6) | uVar2;
    *(u16 *) (2 + param_1)                           = *(u16 *) (2 + param_1) | uVar2;
    ((s32 *) ((u8 *) param_1 + (s32) uVar4 * 4))[11] = 0;
    ((s32 *) ((u8 *) param_1 + uVar4 * 4))[14]       = 0;
    *(u16 *) ((u8 *) param_1 + 0x2a)                 = *(u16 *) ((u8 *) param_1 + 0x2a) & ~uVar2;
    return uVar4;
fail:
    return 0xffffffff;
}

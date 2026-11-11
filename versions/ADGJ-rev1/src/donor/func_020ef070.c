/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ef070 from projets/nintendogs-chihuahua-friends/src/donor/func_020ef070.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_02154ef4[];
extern s32 func_020f7178(void);
extern s32 func_020f2380(void);
extern void func_0207472c(s32 *a, s32 b, u32 c);
extern s32 func_02080f5c(void);
extern s32 func_02044630(void);
extern void func_0207226c(s32 *a, s32 b);
extern void func_02072114(s32 *a, u32 b, s32 c);
u32 func_020ef070(u32 param_1) {
    s32 *piVar7;
    s32 iVar3;
    s32 iVar4;
    s32 iVar6;
    u16 uVar1;
    u8 *obj;
    s32 uVar5;

    iVar3 = func_020f7178();
    if (iVar3 == -11) {
        goto fail;
    }
    if (*(s32 *) (data_02154cb8 + 0x1c) != 0) {
        goto fail;
    }
    obj   = data_02154ef4;
    uVar5 = 0;
    do {
        uVar1 = (u16) (1 << uVar5);
        if ((*(u16 *) (data_02154ef4 + 4) & uVar1) == 0) {
            *(u16 *) (obj + 4) = *(u16 *) (obj + 4) | uVar1;
            goto found;
        }
        uVar5 = (s16) (uVar5 + 1);
    } while (uVar5 < 2);
    uVar5 = -1;
found:
    if (uVar5 == -1) {
        goto fail;
    }
    if (*(s32 *) (obj + 8) == 0) {
        goto fail;
    }
    piVar7 = (s32 *) (obj + 0xc + uVar5 * 4);
    func_0207472c(piVar7, func_020f2380(), param_1);
    if ((s32) param_1 >= 60) {
        goto ret;
    }
    iVar3 = func_02080f5c();
    if ((s32) param_1 > 30) {
        goto tbl;
    }
    if ((s32) param_1 >= 30) {
        goto c44c;
    }
    if ((s32) param_1 > 2) {
        goto dflt;
    }
    if ((s32) param_1 < 1) {
        goto dflt;
    }
    switch (param_1) {
        case 1:
            goto c434;
        case 2:
            goto c44c;
    }
    goto dflt;
tbl:
    switch ((s32) param_1) {
        case 31:
            goto c44c;
        case 32:
            goto c44c;
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
            goto dflt;
        case 40:
            goto c434;
        case 41:
            goto c434;
        case 42:
            goto c44c;
        case 43:
        case 44:
        case 45:
        case 46:
        case 47:
            goto dflt;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
            goto c44c;
        default:
            goto dflt;
    }
c434:
    *(s32 *) (obj + 0x1c)  = 1;
    *(u16 *) (obj + 0x20)  = 0;
    *(s32 **) (obj + 0x24) = piVar7;
    goto tail;
c44c:
    *(s32 *) (obj + 0x28)  = 1;
    *(s32 **) (obj + 0x2c) = piVar7;
dflt:
    iVar3 = iVar3 * 0x10dcd + 1;
    iVar6 = (s16) ((u16) (((u32) iVar3 << 16) >> 26) + 0x40);
    iVar4 = func_02044630();
    if (iVar4 != -1) {
        iVar6 = (s16) (iVar6 / 3);
    }
    func_0207226c(piVar7, iVar6);
tail:
    func_02072114(piVar7, 0xffff, (s16) ((u16) (((u16) (iVar3 * 0x10dcd + 1)) * 60u >> 16) - 30));
ret:
    return (u32) uVar5;
fail:
    return 0xffffffff;
}

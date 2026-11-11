/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ebce4 from projets/nintendogs-chihuahua-friends/src/donor/func_020ebce4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_021471a0[];
extern u8 data_02154dd8[];
extern u8 data_02154d88[];
extern u32 data_02154ddc;
extern void func_020ed818(s32 a, s32 b);
extern void func_020ed790(s32 a);
extern void func_020edb5c(s32 a);
extern void func_020f1f4c(s32 a);
extern s32 func_020ebecc(s32 *p, s32 a);
u32 func_020ebce4(s32 *param_1, s32 param_2, s32 param_3) {
    u8 *iVar2;
    u8 cVar1;
    s32 uVar5;
    u8 *iVar4;
    s32 uVar3;
    u8 *pb;
    u32 *pa;

    uVar5 = -1;
    iVar4 = *(u8 **) (data_021471a0 + *(u16 *) (param_1 + 9) * 4);
    uVar3 = *(s16 *) (iVar4 + 2);
    cVar1 = *(u8 *) (iVar4 + 1);
    pb    = data_02154dd8;
    iVar2 = data_02154d88;
    if (uVar3 == -1) {
        goto L14c;
    }
    pa = (u32 *) &data_02154ddc;
    if (uVar3 > 26) {
        goto big;
    }
    if (uVar3 >= 26) {
        goto L104;
    }
    if (uVar3 != 8) {
        goto L14c;
    }
    goto L104;
big:
    if (uVar3 > 33) {
        goto L14c;
    }
    if (uVar3 < 32) {
        goto L14c;
    }
    if (uVar3 == 32) {
        goto L104;
    }
    if (uVar3 != 33) {
        goto L14c;
    }
    if (param_3 == 0) {
        if (*pa != 0 && *(s16 *) (pb + 0x22) != 0x40) {
            func_020ed818(0x40, 0x3c);
            func_020ed790(0xe6);
        }
        return 0xffffffff;
    }
    if (*pa == 0) {
        func_020edb5c(33);
    } else if (*(s16 *) (pb + 0x22) != 0x7f && param_3 != 0) {
        func_020ed818(0x7f, 0x1e);
        func_020ed790(0x100);
    }
    goto L14c;
L104:
    if ((u32) (param_2 - 4) <= 1) {
        if (*pa == 0) {
            func_020edb5c(uVar3);
        } else if (*(s16 *) (pb + 0x22) != 0x7f && param_3 != 0) {
            func_020ed818(0x7f, 0x1e);
            func_020ed790(0x100);
        }
    }
L14c:
    if (cVar1 == 30) {
        func_020f1f4c(param_3);
    }
    if (cVar1 == 25 && param_2 == 6) {
        *(s32 *) (iVar2 + 0x24) = 1;
        *(s32 *) (iVar2 + 0x28) = param_3;
        *(s32 *) (iVar2 + 0x2c) = 0;
    } else {
        uVar5 = func_020ebecc(param_1, param_2);
    }
    if (uVar5 == -1) {
        return 0xffffffff;
    }
    if (param_3 < 0) {
        param_3 = -param_3;
    }
    *(s32 *) ((u8 *) param_1 + uVar5 * 4 + 0x28) = param_3;
    *(u16 *) ((u8 *) param_1 + 0x26)             = *(u16 *) ((u8 *) param_1 + 0x26) | (1 << uVar5);
    return uVar5;
}

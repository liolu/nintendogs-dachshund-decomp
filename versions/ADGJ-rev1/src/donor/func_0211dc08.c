/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211dc08 from projets/nintendogs-chihuahua-friends/src/donor/func_0211dc08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_021560e8;
extern s32 func_0211fab8(u8 *p);
extern s32 func_0212012c(void);
extern void func_02120108(u32 a);
extern s32 func_02065b5c(s32 a, u32 b);
extern s32 func_02065ab4(s32 a, u32 b, s32 c);
extern void func_0211f66c(u32 a, u32 b, u32 c, u32 d, u32 e, s32 f, u16 *g);
extern void func_0211cfd8(void);
extern void func_0211d17c(void);
void func_0211dc08(u8 *param_1) {
    u8 *obj;
    s32 uVar1;
    s32 iVar4;
    u32 sVar3;
    u16 asStack_c[2];

    iVar4 = func_0211fab8(param_1);
    if (iVar4 == 0) {
        return;
    }
    uVar1 = *(u16 *) (param_1 + 8);
    if (uVar1 > 7) {
        goto hi8;
    }
    if (7 <= uVar1) {
        goto case7;
    }
    if (uVar1 > 2) {
        return;
    }
    if (0 > uVar1) {
        return;
    }
    if (uVar1 == 0) {
        goto case0;
    }
    if (uVar1 == 2) {
        return;
    }
    return;
hi8:
    if (uVar1 == 9) {
        goto case9;
    }
    return;
case0:
    obj   = data_021560e8;
    iVar4 = *(s32 *) (obj + 0x2c);
    if (iVar4 == 1) {
        goto c0a;
    }
    if (iVar4 == 2) {
        goto c0b;
    }
    if (3 == iVar4) {
        goto c0c;
    }
    return;
c0a:
    if (*(s16 *) (obj + 0x38) == 0) {
        *(u16 *) (obj + 0x38) = 1;
    }
    return;
c0b:
    sVar3        = func_02065ab4(5, (u32) func_0211cfd8, 0);
    asStack_c[0] = sVar3;
    if (asStack_c[0] != 0) {
        return;
    }
    obj = data_021560e8;
    func_0211f66c((u32) func_0211d17c, *(u32 *) (obj + 0x10), (u16) * (u32 *) (obj + 0xc), *(u32 *) (8 + obj),
                  (u16) * (u32 *) (obj + 4), 0, asStack_c);
    return;
c0c:
    if (*(s16 *) (obj + 0x38) == 0) {
        *(u16 *) (obj + 0x38) = 1;
    }
    return;
case7:
    obj = data_021560e8;
    if (*(u32 *) (obj + 0x1c) == 0) {
        goto g_path;
    }
    iVar4 = ((s32(*)(u8 *))(*(u32 *) (0x1c + obj)))(param_1);
    if (iVar4 != 0) {
        goto g_path;
    }
    iVar4 = func_02065b5c(0, *(u16 *) (param_1 + 0x10));
    if (2 == iVar4) {
        return;
    }
    obj = data_021560e8;
    if (*(s32 *) (data_021560e8 + 0x34) == 1) {
        return;
    }
    *(s32 *) (data_021560e8 + 0x34) = 1;
    *(s16 *) (data_021560e8 + 0x30) = (s16) iVar4;
    *(u16 *) (0x32 + data_021560e8) = 13;
    return;
g_path:
    if (*(u32 *) (data_021560e8 + 0x18) != 0) {
        ((void (*)(u8 *))(*(u32 *) (data_021560e8 + 0x18)))(param_1);
    }
    func_02120108(*(u16 *) (param_1 + 0x10));
    return;
case9:
    obj = data_021560e8;
    if (*(u32 *) (obj + 0x48) == 0) {
        return;
    }
    sVar3 = func_0212012c();
    obj   = data_021560e8;
    if (sVar3 != 0) {
        return;
    }
    if (*(s32 *) (data_021560e8 + 0x34) == 1) {
        return;
    }
    *(s32 *) (data_021560e8 + 0x34) = 1;
    *(u16 *) (data_021560e8 + 0x30) = 20;
    *(u16 *) (0x32 + data_021560e8) = 8;
    return;
}

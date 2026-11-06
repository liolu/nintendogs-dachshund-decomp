/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210a11c from projets/nintendogs-chihuahua-friends/src/donor/func_0210a11c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02044644(s32 a);
extern s32 func_01ffda04(s32 a);
extern void func_02108e48(u8 *p, s32 a, s32 *b);
extern void func_0210aabc(u8 *p, s32 *a, s32 *b);
extern void func_0210a700(u8 *p);
extern u32 func_02033da4(s32 a);
extern u32 func_02033dc8(s32 a);
extern s32 func_0210fd28(u8 *p, s32 a);
extern u32 func_02027044(s32 a, s32 b);
extern u32 func_0210fd98(u8 *p);
u32 func_0210a11c(u8 *param_1) {
    u8 *iVar5;
    s32 iVar1;
    s32 iVar2;
    s32 iVar4;
    u32 uVar3;
    s32 aiStack_30[3];
    s32 aiStack_24[4];

    iVar5 = *(u8 **) (param_1 + 0x214);
    func_02044644((s16) * (s16 *) (param_1 + 156));
    iVar1 = func_01ffda04((s16) * (s16 *) (param_1 + 152));
    if (iVar1 == 0) {
        return (u32) iVar1;
    }
    iVar2 = func_01ffda04((s16) * (s16 *) (param_1 + 154));
    if (iVar2 == 0) {
        return (u32) iVar2;
    }
    func_02108e48(param_1, iVar2, aiStack_30);
    func_02108e48(param_1, iVar1, aiStack_24);
    if (*(s32 *) (iVar5 + 0x1c) == 0) {
        func_0210aabc(param_1, aiStack_30, aiStack_24);
    } else {
        func_0210aabc(param_1, aiStack_24, aiStack_30);
    }
    func_0210a700(param_1);
    uVar3 = func_02033da4(iVar1);
    if (uVar3 != 0) {
        return uVar3;
    }
    uVar3 = func_02033dc8(iVar1);
    if (uVar3 != 0) {
        iVar4 = func_0210fd28(param_1, (s16) * (s16 *) (param_1 + 152));
        if (iVar4 == 0) {
            return (u32) iVar4;
        }
        func_02027044(iVar1, 39);
        return func_02027044(iVar2, 40);
    }
    uVar3 = func_02033dc8(iVar2);
    if (uVar3 != 0) {
        iVar4 = func_0210fd28(param_1, (s16) * (s16 *) (param_1 + 154));
        if (iVar4 == 0) {
            return (u32) iVar4;
        }
        func_02027044(iVar1, 40);
        func_02027044(iVar2, 39);
        if (*(s32 *) (iVar5 + 0x1c) == 0) {
            *(s32 *) (iVar5 + 0x1c) = 1;
            return 1;
        }
        *(s32 *) (iVar5 + 0x1c) = 0;
        return 0;
    }
    return func_0210fd98(param_1);
}

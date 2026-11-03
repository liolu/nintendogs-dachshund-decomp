/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c0558 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c0558.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_01ffda04(s32 a);
extern void func_02108e0c(u8 *p, s32 *a);
extern void func_0210aab4(u8 *p, s32 *a, s32 *b);
extern void func_0210a8c8(u8 *p);
extern void func_0210a6f8(u8 *p);
extern s32 func_02033dc8(s32 a);
extern s32 func_02033dbc(s32 a);
extern u32 func_0210fd90(u8 *p);
extern u32 func_0210fccc(u8 *p);
u32 func_0210a4d8(u8 *param_1) {
    s32 aiStack_20[4];
    u8 *iv4;
    s32 iVar2;
    u32 uVar3;

    iv4   = *(u8 **) (param_1 + 0x214);
    iVar2 = func_01ffda04(*(s16 *) (param_1 + 0x98));
    func_02108e0c(param_1, aiStack_20);
    if (*(s32 *) (iv4 + 0x1c) == 0) {
        func_0210aab4(param_1, 0, aiStack_20);
    } else {
        func_0210aab4(param_1, aiStack_20, 0);
    }
    func_0210a8c8(param_1);
    func_0210a6f8(param_1);
    uVar3 = func_02033dc8(iVar2);
    if (uVar3 != 0) {
        return uVar3;
    }
    uVar3 = func_02033dbc(iVar2);
    if (uVar3 != 0) {
        return func_0210fccc(param_1);
    }
    return func_0210fd90(param_1);
}

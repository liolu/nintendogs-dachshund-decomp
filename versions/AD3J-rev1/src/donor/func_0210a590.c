/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c0610 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c0610.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153720;
extern u8 *data_02156080;
extern s32 data_02148bf0;
extern s32 data_02148bf8;
extern s32 data_02148bf4;
extern s32 func_02044644(s32 a);
extern void func_02108434(s32 a, s32 *b, s32 c);
extern void func_02092ee8(s32 a, s32 *b, s32 *c);
extern void func_0210aab4(s32 a, s32 *b, s32 *c);
extern void func_0210a8c8(s32 a);
extern void func_0210a6f8(s32 a);
extern void func_02109aac(s32 a, s32 *b, s32 c, s32 d, s32 e, s32 *f);
extern void func_0211c894(u8 *a, s32 b, s32 *c);
extern void func_0211c88c(u8 *a, s32 b);
extern s32 func_02069430(s32 *a);
extern void func_020ec218(s32 *a, s32 b, s32 c);
extern void func_0210fd90(s32 a);
extern void func_020444fc(void);
void func_0210a590(s32 param_1) {
    s32 iVar1;
    u8 *iVar2;
    s32 aiStack_38[3];
    s32 aiStack_2c[3];
    s32 aiStack_20[4];

    iVar1 = func_02044644((s32) * (s16 *) (param_1 + 156));
    iVar2 = *(u8 **) (param_1 + 0x214);
    func_02108434(param_1, aiStack_2c, 0x8000);
    func_02092ee8(iVar1, aiStack_38, aiStack_2c);
    if (*(s32 *) (iVar2 + 0x1c) == 0) {
        func_0210aab4(param_1, aiStack_38, (s32 *) 0);
    } else {
        func_0210aab4(param_1, (s32 *) 0, aiStack_38);
    }
    func_0210a8c8(param_1);
    func_0210a6f8(param_1);
    if (((*(u16 *) (data_02153720 + 0x84) & 1) != 0) && (*(s32 *) (data_02156080 + 0x24) == 0)) {
        return;
    }
    func_02109aac(iVar1, aiStack_38, data_02148bf8, data_02148bf4, data_02148bf0, aiStack_20);
    if (*(s32 *) (iVar2 + 0x1c) == 0) {
        func_0211c894(iVar2, 0, aiStack_20);
        func_0211c88c(iVar2, 0);
    } else {
        func_0211c894(iVar2, 3, aiStack_20);
        func_0211c88c(iVar2, 1);
    }
    iVar1 = func_02069430(aiStack_20);
    func_020ec218((s32 *) (param_1 + 400), 4, iVar1);
    func_0210fd90(param_1);
    func_020444fc();
}

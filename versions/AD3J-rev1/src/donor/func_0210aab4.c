/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c0b34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c0b34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_02148be4;
extern s32 data_02148be0;
extern s32 data_02148c04;
extern s32 data_02148bfc;
extern s32 data_02148c08;
extern void func_0211c82c(u8 *p, s32 a);
extern void func_0211c83c(u8 *p, s32 a, u32 *b);
extern void func_0211c88c(u8 *p, s32 a);
extern void func_0211c7d8(u8 *p);
extern void func_0211c558(u8 *p, s32 a, s32 b);
extern s32 func_0211c430(u8 *p, s32 a, s32 b);
extern void func_0211c8ac(u8 *p, s32 a, s32 *b);
extern s32 func_02069430(s32 *a);
extern void func_020ec218(u8 *p, s32 a, s32 b);
extern u16 func_02111cb4(u32 a, u32 b);
extern s32 func_0211c36c(u8 *p, s32 a, s32 b);
extern void func_0211c66c(u8 *p, s32 a);
extern void func_0211bdfc(u8 *p);
extern void func_0211c8e0(u8 *p, s32 a, u32 *b);
void func_0210aab4(u8 *param_1, u32 *param_2, u32 *param_3) {
    u8 *piVar1;
    s32 iVar2;
    s16 i;
    s32 aiStack_30[3];
    s32 aiStack_24[3];

    piVar1 = *(u8 **) (param_1 + 0x214);
    i      = 0;
    do {
        func_0211c82c(piVar1, i);
        i = (s16) (i + 1);
    } while (i < 4);
    if (param_2 != 0 && param_3 != 0) {
        func_0211c83c(piVar1, 0, param_2);
        func_0211c83c(piVar1, 3, param_3);
        func_0211c88c(piVar1, 2);
    } else if (param_2 != 0) {
        func_0211c83c(piVar1, 0, param_2);
        func_0211c88c(piVar1, 0);
    } else {
        if (param_3 != 0) {
            func_0211c83c(piVar1, 3, param_3);
            func_0211c88c(piVar1, 1);
        }
    }
    func_0211c7d8(piVar1);
    func_0211c558(piVar1, data_02148be4, data_02148be0);
    iVar2 = func_0211c430(piVar1, data_02148c04, data_02148bfc);
    if (iVar2 != 0) {
        u8 *pp  = *(u8 **) (param_1 + 0x214);
        s32 fld = *(s16 *) (param_1 + 0x90);
        if (fld == 1) {
            func_0211c8ac(pp, 2, aiStack_30);
            iVar2 = func_02069430(aiStack_30);
            func_020ec218(param_1 + 400, 0, iVar2);
        }
    }
    iVar2 = func_02111cb4(*(u16 *) (param_1 + 0xa0), 0x1000);
    iVar2 = func_0211c36c(piVar1, data_02148c04, iVar2);
    if (iVar2 != 0) {
        u8 *pp2  = *(u8 **) (param_1 + 0x214);
        s32 fld2 = *(s16 *) (param_1 + 0x90);
        if (fld2 == 1) {
            func_0211c8ac(pp2, 2, aiStack_24);
            iVar2 = func_02069430(aiStack_24);
            func_020ec218(param_1 + 400, 1, iVar2);
        }
    }
    func_0211c66c(piVar1, 0);
    func_0211c7d8(piVar1);
    func_0211bdfc(piVar1);
    func_0211c66c(piVar1, data_02148c08);
    func_0211c8e0(piVar1, 2, (u32 *) (param_1 + 0xbc));
    func_0211c8ac(piVar1, 2, (s32 *) (param_1 + 0xb0));
}

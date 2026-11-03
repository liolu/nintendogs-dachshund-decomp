/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c92a0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c92a0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148e64;
extern s32 data_02148e68;
extern s32 data_02148e5c;
extern s32 data_02148e58;
extern s32 data_02148e60;
extern s32 func_01ffda04(s32 a);
extern void func_0211299c(s32 a, s32 *b);
extern void func_02027630(s32 a, s32 *b);
extern void func_02027658(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_020690b4(s32 *a, s32 *b);
extern s32 func_02069098(u32 a, s32 b);
extern s16 func_02069a4c(s32 a);
void func_02112df0(s32 *param_1, s32 param_2) {
    s32 aiStack_20[4];
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 *piVar2;
    s16 sVar3;

    iVar4      = func_01ffda04(param_2);
    iVar6      = data_02148e64;
    iVar5      = data_02148e68;
    param_1[0] = 0;
    param_1[1] = iVar5;
    param_1[2] = iVar6;
    func_0211299c(iVar4, param_1 + 3);
    func_02027630(iVar4, param_1 + 3);
    func_02027658(iVar4, aiStack_20);
    iVar6      = data_02148e5c;
    iVar5      = func_020280f8(iVar4);
    param_1[4] = ((u32) ((((s64) (s32) (iVar5) * (s64) (s32) (iVar6)) + 0x800) >> 12));
    iVar6      = data_02148e58;
    iVar5      = func_020280f8(iVar4);
    func_01ff832c(((u32) ((((s64) (s32) (iVar5) * (s64) (s32) (iVar6)) + 0x800) >> 12)), aiStack_20, param_1 + 3, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    piVar2     = &data_02148e60;
    param_1[8] = 0;
    iVar6      = *piVar2;
    iVar4      = func_020280f8(iVar4);
    iVar5      = func_020690b4(param_1 + 3, param_1);
    iVar4      = func_02069098(((u32) ((((s64) (s32) (iVar4) * (s64) (s32) (iVar6)) + 0x800) >> 12)), iVar5);
    sVar3      = func_02069a4c(iVar4);
    param_1[9] = (s32) (u32) ((((s64) sVar3 * 0x1680000) + 0x80000) >> 20);
}

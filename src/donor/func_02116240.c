/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ccd5c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ccd5c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_02149074;
typedef struct {
    u32 w[3];
} T3;
extern s32 func_01ffda04(s32 a);
extern void func_0211299c(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern s32 func_020690b4(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s32 func_02069a4c(s32 a);
void func_02116240(s32 *param_1, s32 *param_2, s32 param_3) {
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 sVar3;

    iVar4           = func_01ffda04(param_3);
    *(T3 *) param_1 = *(T3 *) param_2;
    func_0211299c(iVar4, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar6      = (s32) data_02149074;
    iVar4      = func_020280f8(iVar4);
    iVar5      = func_020690b4(param_1 + 3, param_1);
    iVar4      = func_02069098(((s32) (((s64) (iVar4) * (iVar6) + 0x800) >> 12)), iVar5);
    sVar3      = func_02069a4c(iVar4);
    param_1[9] = ((s32) (((s64) (sVar3) * (0x1680000) + 0x80000) >> 20));
}

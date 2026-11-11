/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca708 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ca708.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} Tri;
extern s32 data_02148f1c;
extern s32 func_01ffda04(s32 a);
extern void func_0211299c(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern s32 func_020690b4(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069a4c(s32 a);
void func_02114258(s32 *param_1, s32 *param_2, s32 param_3) {
    s32 iVar3;
    s64 lVar1;
    s32 fx;
    s16 sVar2;
    s64 l2;

    iVar3            = func_01ffda04(param_3);
    *(Tri *) param_1 = *(Tri *) param_2;
    func_0211299c(iVar3, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar3      = func_020280f8(iVar3);
    lVar1      = (s64) data_02148f1c * iVar3 + 0x800;
    fx         = (s32) (lVar1 >> 12);
    iVar3      = func_020690b4(param_1 + 3, param_1);
    iVar3      = func_02069098(fx, iVar3);
    sVar2      = func_02069a4c(iVar3);
    l2         = (s64) sVar2 * 0x1680000;
    param_1[9] = (s32) ((l2 + 0x80000) >> 20);
}

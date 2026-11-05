/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02115018 from projets/nintendogs-shiba-friends/src/donor/func_02115018.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} T3;
extern s32 data_02148fac;
extern s32 data_02148fb0;
extern s32 data_02148fb4;
extern s32 func_01ffda04(s32 a);
extern void func_021129a4(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern s32 func_020690b4(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069a4c(s32 a);
void func_02115020(s32 *param_1, s32 *param_2, s32 param_3) {
    s32 iVar7;
    s32 iVar6;
    s32 iVar8;
    s32 iVar3;
    s32 iVar4;
    s16 sVar2;

    iVar6           = data_02148fac;
    iVar8           = data_02148fb0;
    iVar7           = data_02148fb4;
    iVar3           = func_01ffda04(param_3);
    *(T3 *) param_1 = *(T3 *) param_2;
    param_1[1]      = iVar7;
    func_021129a4(iVar3, param_1 + 3);
    iVar4      = func_020280f8(iVar3);
    param_1[4] = ((s32) ((((s64) (iVar8) * (s64) (iVar4)) + 0x800) >> 12));
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar3      = func_020280f8(iVar3);
    iVar4      = func_020690b4(param_1 + 3, param_1);
    iVar3      = func_02069098(((s32) ((((s64) (iVar6) * (s64) (iVar3)) + 0x800) >> 12)), iVar4);
    sVar2      = func_02069a4c(iVar3);
    param_1[9] = (s32) ((((s64) sVar2) * 23592960 + 0x80000) >> 20);
}

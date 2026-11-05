/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112f54 from projets/nintendogs-shiba-friends/src/donor/func_02112f54.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148e6c;
extern s32 data_02148e74;
extern s32 data_02148e78;
extern s32 data_02148e70;
extern s32 func_01ffda04(s32 a);
extern void func_021129a4(s32 a, s32 *b);
extern s32 func_020280f8(s32 a);
extern s32 func_020690b4(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069a4c(s32 a);
void func_02112f5c(s32 *param_1, s32 param_2) {
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s16 sVar3;
    s32 t0;
    s32 t1;

    iVar4 = func_01ffda04(param_2);
    func_021129a4(iVar4, param_1 + 3);
    iVar6      = data_02148e6c;
    iVar5      = func_020280f8(iVar4);
    param_1[4] = ((s32) ((((s64) (iVar5) * (s64) (iVar6)) + 0x800) >> 12));
    iVar6      = data_02148e74;
    iVar5      = func_020280f8(iVar4);
    iVar5      = ((s32) ((((s64) (iVar5) * (s64) (iVar6)) + 0x800) >> 12)) + param_1[5];
    t1         = data_02148e78;
    t0         = param_1[3];
    *param_1   = t0;
    param_1[1] = t1;
    param_1[2] = iVar5;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar6      = data_02148e70;
    iVar4      = func_020280f8(iVar4);
    iVar5      = func_020690b4(param_1 + 3, param_1);
    iVar4      = func_02069098(((s32) ((((s64) (iVar4) * (s64) (iVar6)) + 0x800) >> 12)), iVar5);
    sVar3      = func_02069a4c(iVar4);
    param_1[9] = (s32) ((((s64) sVar3) * 23592960 + 0x80000) >> 20);
}

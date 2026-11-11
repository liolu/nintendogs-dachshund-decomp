/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02113dec from projets/nintendogs-shiba-friends/src/donor/func_02113dec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 v[3];
} T3;
extern void func_02069668(s32 *a, s32 *b, s32 *out);
extern void func_02069634(s32 *a, s32 *b, s32 *out);
extern void func_02116f58(s32 *a, s32 *b, s32 *c, s32 *d, s32 *e);
extern s32 func_020695f0(s32 *a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069a4c(s32 a);
void func_02113df4(s32 *param_1, s32 *param_2, s32 param_3, s32 *param_4, s32 param_5, s32 *param_6, s32 param_7, s32 param_8,
                   s32 param_9) {
    s32 local_60[3];
    s32 aiStack_54[3];
    s32 aiStack_48[3];
    s32 auStack_3c[3];
    s32 auStack_30[3];
    s32 auStack_24[3];
    s32 uVar3;
    s32 uVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s16 sVar2;
    volatile s32 flag;
    s32 fl;

    func_02069668(param_2, param_4, local_60);
    local_60[0] = ((s32) (((s64) (local_60[0]) * (0x800) + 0x800) >> 12));
    local_60[1] = ((s32) (((s64) (local_60[1]) * (0x800) + 0x800) >> 12));
    local_60[2] = ((s32) (((s64) (local_60[2]) * (0x800) + 0x800) >> 12));
    func_02069634(param_2, param_6, aiStack_54);
    func_02069634(param_4, param_6, aiStack_48);
    func_02116f58(auStack_3c, auStack_30, auStack_24, param_6, local_60);

    uVar3 = func_020695f0(aiStack_54, auStack_24);
    uVar4 = func_020695f0(aiStack_54, auStack_3c);
    if (uVar4 <= 0) {
        uVar4 = -uVar4;
    }
    iVar5 = func_02069098(param_3 + uVar4, uVar3);
    uVar3 = func_020695f0(aiStack_48, auStack_24);
    uVar4 = func_020695f0(aiStack_48, auStack_3c);
    if (uVar4 <= 0) {
        uVar4 = -uVar4;
    }
    iVar6 = func_02069098(param_5 + uVar4, uVar3);
    if (iVar6 > iVar5) {
        iVar5 = iVar6;
    }
    uVar3 = func_020695f0(aiStack_54, auStack_24);
    uVar4 = func_020695f0(aiStack_54, auStack_30);
    if (uVar4 <= 0) {
        uVar4 = -uVar4;
    }
    iVar7 = func_02069098(param_3 + uVar4, uVar3);
    uVar3 = func_020695f0(aiStack_48, auStack_24);
    uVar4 = func_020695f0(aiStack_48, auStack_30);
    if (uVar4 <= 0) {
        uVar4 = -uVar4;
    }
    iVar6 = func_02069098(param_5 + uVar4, uVar3);
    if (iVar6 > iVar7) {
        iVar7 = iVar6;
    }
    iVar5 = func_02069098(iVar5, param_7);
    if (iVar5 < iVar7) {
        fl    = 1;
        iVar5 = iVar7;
    } else {
        fl = 0;
    }
    flag  = fl;
    sVar2 = func_02069a4c(iVar5);
    uVar4 = (s32) (((s64) sVar2 * 0x1680000 + 0x80000) >> 20);
    if (uVar4 < param_8) {
        uVar4 = param_8;
    }
    if (uVar4 > param_9) {
        uVar4 = param_9;
    }
    *(T3 *) param_1       = *(T3 *) param_6;
    *(T3 *) (param_1 + 3) = *(T3 *) local_60;
    param_1[6]            = 0;
    param_1[7]            = 0x1000;
    param_1[8]            = 0;
    param_1[9]            = uVar4;
}

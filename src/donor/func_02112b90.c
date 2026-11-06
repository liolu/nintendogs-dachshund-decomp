/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112b90 from projets/nintendogs-chihuahua-friends/src/donor/func_02112b90.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_01ffda04(s32 a);
extern s32 func_02033de0(s32 a);
extern void func_02027630(s32 a, s32 *b);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
extern s32 func_0206907c(s32 a);
s32 func_02112b90(s32 *param_1) {
    s32 aiStack_28[4];
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;

    iVar4      = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    iVar5      = 0;
    param_1[2] = 0;
    do {
        iVar3 = func_01ffda04(iVar5);
        if (iVar3 != 0 && func_02033de0(iVar3) == 0) {
            func_02027630(iVar3, aiStack_28);
            func_02069668(aiStack_28, param_1, param_1);
            iVar4 = iVar4 + 1;
        }
        iVar5 = (s16) (iVar5 + 1);
    } while (iVar5 < 3);
    if (iVar4 > 0) {
        iVar6      = func_0206907c(iVar4 << 12);
        param_1[0] = ((s32) (((s64) (param_1[0]) * (iVar6) + 0x800) >> 12));
        param_1[1] = ((s32) (((s64) (param_1[1]) * (iVar6) + 0x800) >> 12));
        param_1[2] = ((s32) (((s64) (param_1[2]) * (iVar6) + 0x800) >> 12));
    }
    return iVar4;
}

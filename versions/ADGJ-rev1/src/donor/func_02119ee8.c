/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02119d94 from projets/nintendogs-chihuahua-friends/src/donor/func_02119d94.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_021245cc;
extern s32 func_02069098(s32 a, s32 b);
extern void func_021174ac(s32 *a, s32 *b, s32 *c, s32 *d, s32 e, s32 *f);
extern void func_020069bc(s32 *a, s32 *b);
extern s32 func_0211770c(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02119ee8(s32 *param_1) {
    s32 iVar2a;
    s64 lVar1;
    s32 *piVar6n;
    s32 *pp;
    s32 iVar9;
    s32 *piVar8;
    s32 *piVar7;
    s32 *piVar6;
    s32 iVar2;
    s32 *piVar5;

    piVar6 = (s32 *) param_1[0];
    iVar9  = param_1[2];
    piVar5 = piVar6 + 8;
    pp     = param_1 + 4;
    if (iVar9 >= piVar6[0] - 1) {
        iVar9  = piVar6[0] - 2;
        iVar2a = *(s32 *) ((u8 *) piVar5 + iVar9 * 44 + 40) - 1;
    } else {
        iVar2a = param_1[1];
    }
    piVar8 = (s32 *) ((u8 *) piVar5 + iVar9 * 44);
    piVar7 = (s32 *) ((u8 *) piVar5 + (iVar9 + 1) * 44);
    iVar2  = func_02069098(iVar2a, piVar8[10]);
    if (iVar9 == piVar6[0] - 2) {
        piVar6n = (s32 *) ((u8 *) piVar5 + (piVar6[0] - 1) * 44);
    } else {
        piVar6n = (s32 *) ((u8 *) piVar5 + (iVar9 + 2) * 44);
    }
    if (iVar9 != 0) {
        piVar5 = (s32 *) ((u8 *) piVar5 + (iVar9 - 1) * 44);
    }
    func_021174ac(piVar5, piVar8, piVar7, piVar6n, iVar2, pp);
    func_021174ac(piVar5 + 3, piVar8 + 3, piVar7 + 3, piVar6n + 3, iVar2, pp + 3);
    func_021174ac(piVar5 + 6, piVar8 + 6, piVar7 + 6, piVar6n + 6, iVar2, pp + 6);
    lVar1 = (s64) pp[6] * pp[6] + (s64) pp[7] * pp[7] + (s64) pp[8] * pp[8];
    if (lVar1 >= *(s64 *) &data_021245cc) {
        func_020069bc(pp + 6, pp + 6);
    }
    iVar9 = func_0211770c(piVar5[9], piVar8[9], piVar7[9], piVar6n[9], iVar2);
    pp[9] = iVar9;
}

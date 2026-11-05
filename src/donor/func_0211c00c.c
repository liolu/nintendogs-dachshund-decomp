/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c004 from projets/nintendogs-shiba-friends/src/donor/func_0211c004.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069634(s32 *a, s32 *b, s32 *c);
extern s32 func_02069430(s32 *a);
extern s32 func_02069098(s32 a, s32 b);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
void func_0211c00c(s32 *param_1) {
    s32 base;
    s32 iVar3;
    s32 uStk[3];
    s32 iVar9;
    s32 iVar8;
    s32 *piVar7;
    s32 *pp;
    s32 iVar6;
    s32 *piVar5;
    s32 iVar4;

    pp    = param_1;
    iVar6 = 1;
    if (*pp - 1 >= 1) {
        iVar4 = 12;
        do {
            if (((s32 *) pp[3])[iVar6] != 1) {
                iVar8  = pp[6];
                base   = pp[1];
                iVar9  = (iVar8 * 99) / 100;
                piVar7 = (s32 *) (base + iVar4);
                piVar5 = (s32 *) (base + (iVar4 - 12));
                func_02069634(piVar7, piVar5, uStk);
                iVar3 = func_02069430(uStk);
                if (iVar3 > iVar8) {
                    iVar3   = func_02069098(iVar8, iVar3);
                    uStk[0] = ((u32) ((((s64) (s32) (uStk[0]) * (s64) (s32) (iVar3)) + 0x800) >> 12));
                    uStk[1] = ((u32) ((((s64) (s32) (uStk[1]) * (s64) (s32) (iVar3)) + 0x800) >> 12));
                    uStk[2] = ((u32) ((((s64) (s32) (uStk[2]) * (s64) (s32) (iVar3)) + 0x800) >> 12));
                    func_02069668(piVar5, uStk, piVar7);
                } else if (iVar3 < iVar9) {
                    iVar3   = func_02069098(iVar9, iVar3);
                    uStk[0] = ((u32) ((((s64) (s32) (uStk[0]) * (s64) (s32) (iVar3)) + 0x800) >> 12));
                    uStk[1] = ((u32) ((((s64) (s32) (uStk[1]) * (s64) (s32) (iVar3)) + 0x800) >> 12));
                    uStk[2] = ((u32) ((((s64) (s32) (uStk[2]) * (s64) (s32) (iVar3)) + 0x800) >> 12));
                    func_02069668(piVar5, uStk, piVar7);
                }
            }
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 12;
        } while (iVar6 <= *pp - 1);
    }
}

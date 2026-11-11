/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1f4c from projets/nintendogs-chihuahua-friends/src/donor/func_020f1f4c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_02155000[];
extern u8 data_02130728[];
extern void func_0207472c(int a, int b, int c);
extern void func_0207226c(int a, int b);
extern void func_02071f4c(int a, int b, int c);
extern void func_02072114(int a, int b, int c);
void func_020f1f4c(int param_1) {
    u8 bVar1;
    int *piVar10;
    u16 *puVar9;
    int *piVar8;
    int *piVar7;
    int *piVar5;
    s16 *psVar4;
    int *piVar3;
    int iVar6;
    u8 *G;
    int *a12;
    int *a32;

    if (param_1 == 0) {
        return;
    }
    G     = (u8 *) data_02155000;
    iVar6 = *(s16 *) (G + 4);
    a12   = (int *) (G + 12);
    a32   = (int *) (G + 32);
    if (iVar6 == 3) {
        *(int *) (G + 0x38) = 1;
    }
    bVar1      = data_02130728[iVar6];
    piVar10    = *(int **) G;
    a12[iVar6] = a12[iVar6] + param_1;
    piVar8     = a12 + iVar6;
    piVar5     = (int *) (G + 8);
    piVar7     = a32 + iVar6;
    psVar4     = (s16 *) (G + 60);
    piVar3     = (int *) (G + 64);
    if (param_1 > 0) {
        iVar6 = *piVar7;
        if (*piVar8 >= (s32) (*(u16 *) ((u8 *) piVar10 + 4 + (u32) iVar6 * 8) * 0x20)) {
            do {
                puVar9 = (u16 *) ((u8 *) piVar10 + 4 + (u32) iVar6 * 8);
                func_0207472c((int) piVar5, 0x1e, bVar1);
                func_0207226c((int) piVar5, (s16) puVar9[2]);
                func_02071f4c((int) piVar5, 4, (s16) puVar9[1]);
                func_02071f4c((int) piVar5, 2, (s16) puVar9[3]);
                *psVar4 = 0;
                if (*piVar3 != 0) {
                    *piVar3 = 0;
                } else {
                    *piVar3 = 1;
                }
                *piVar8 = *piVar8 - puVar9[0] * 0x20;
                *piVar7 = *piVar7 + 1;
                if (*piVar7 >= *piVar10) {
                    *piVar7 = 0;
                }
                iVar6 = *piVar7;
            } while (*piVar8 >= (s32) (*(u16 *) ((u8 *) piVar10 + 4 + (u32) iVar6 * 8) * 0x20));
        }
        if (*piVar3 == 0) {
            *psVar4 = *psVar4 + 0xf;
            if (*psVar4 > 0x3f) {
                *psVar4 = 0x3f;
                *piVar3 = 1;
            }
        } else {
            *psVar4 = *psVar4 - 0xf;
            if (*psVar4 < -0x40) {
                *psVar4 = -0x40;
                *piVar3 = 0;
            }
        }
        func_02072114((int) piVar5, 0xffff, (s32) *psVar4);
        return;
    }
    if (param_1 >= 0) {
        return;
    }
    if (*piVar8 <= 0) {
        do {
            iVar6  = (*piVar7 > 0) ? *piVar7 - 1 : *piVar10 - 1;
            puVar9 = (u16 *) ((u8 *) piVar10 + 4 + (u32) iVar6 * 8);
            func_0207472c((int) piVar5, 0x1e, bVar1);
            func_0207226c((int) piVar5, (s16) puVar9[2]);
            func_02071f4c((int) piVar5, 4, (s16) puVar9[1]);
            func_02071f4c((int) piVar5, 2, (s16) puVar9[3]);
            *psVar4 = 0;
            if (*piVar3 != 0) {
                *piVar3 = 0;
            } else {
                *piVar3 = 1;
            }
            *piVar8 = *piVar8 + puVar9[0] * 0x20;
            *piVar7 = iVar6;
        } while (*piVar8 <= 0);
    }
    if (*piVar3 == 0) {
        *psVar4 = *psVar4 - 0xf;
        if (*psVar4 < -0x40) {
            *psVar4 = 0;
            *piVar3 = 1;
        }
    } else {
        *psVar4 = *psVar4 + 0xf;
        if (*psVar4 > 0x3f) {
            *psVar4 = 0x3f;
            *piVar3 = 0;
        }
    }
    func_02072114((int) piVar5, 0xffff, (s32) *psVar4);
}

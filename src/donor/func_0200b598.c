/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200b644 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200b644.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
extern s32 func_02069098(s32 a, s32 b);
typedef struct Three {
    s32 w[3];
} Three;
void func_0200b598(s32 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5) {
    s32 uVar11;
    s32 uVar12;
    s32 uVar5;
    s32 iVar4;
    s32 t1;
    s32 t2;
    s32 t3;
    s32 uVar9;
    s32 uVar8;
    s32 uVar7;
    s32 q0;

    uVar11 = param_5[0];
    uVar12 = param_5[1];
    uVar5  = param_5[2];
    t1     = ((s32) (((s64) (uVar11) * (param_3[0] - param_2[0]) + 0x800) >> 12));
    t2     = ((s32) (((s64) (uVar12) * (param_3[1] - param_2[1]) + 0x800) >> 12));
    t3     = ((s32) (((s64) (uVar5) * (param_3[2] - param_2[2]) + 0x800) >> 12));
    iVar4  = t3 + (t1 + t2);
    if (iVar4 == 0) {
        *(Three *) param_1 = *(Three *) param_4;
        return;
    }
    uVar9 = ((s32) (((s64) (uVar5) * (param_4[2] - param_2[2]) + 0x800) >> 12));
    uVar8 = ((s32) (((s64) (uVar11) * (param_4[0] - param_2[0]) + 0x800) >> 12));
    uVar7 = ((s32) (((s64) (uVar12) * (param_4[1] - param_2[1]) + 0x800) >> 12));
    if (iVar4 == 0) {
        iVar4 = uVar9 + (uVar8 + uVar7);
    } else {
        iVar4 = func_02069098(uVar9 + (uVar8 + uVar7), iVar4);
    }
    q0 = param_2[0];
    {
        s32 d      = param_3[0] - q0;
        param_1[0] = q0 + ((s32) (((s64) (d) * (iVar4) + 0x800) >> 12));
    }
    q0 = param_2[1];
    {
        s32 d      = param_3[1] - q0;
        param_1[1] = q0 + ((s32) (((s64) (d) * (iVar4) + 0x800) >> 12));
    }
    q0 = param_2[2];
    {
        s32 d      = param_3[2] - q0;
        param_1[2] = q0 + ((s32) (((s64) (d) * (iVar4) + 0x800) >> 12));
    }
}

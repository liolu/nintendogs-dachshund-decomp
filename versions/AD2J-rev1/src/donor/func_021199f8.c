/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d0564 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d0564.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
extern s64 data_021245cc;
extern s32 func_020069bc(s32 *a, s32 *b);
extern s32 func_02117c68(s32 a, s32 b, s32 c, s32 d);
typedef struct {
    s32 a, b, c;
} Vec3;
void func_021199f8(s32 *param_1, s32 *param_2, s32 *param_3, s32 param_4, s32 param_5, s32 param_6) {
    s64 lVar1;
    s32 iVar3;

    iVar3      = 0;
    param_1[0] = param_2[0] + ((s32) (((s64) (param_4) * (param_3[0] - param_2[0]) + 0x800) >> 12));
    param_1[1] = param_2[1] + ((s32) (((s64) (param_4) * (param_3[1] - param_2[1]) + 0x800) >> 12));
    param_1[2] = param_2[2] + ((s32) (((s64) (param_4) * (param_3[2] - param_2[2]) + 0x800) >> 12));
    param_1[3] = param_2[3] + ((s32) (((s64) (param_5) * (param_3[3] - param_2[3]) + 0x800) >> 12));
    param_1[4] = param_2[4] + ((s32) (((s64) (param_5) * (param_3[4] - param_2[4]) + 0x800) >> 12));
    param_1[5] = param_2[5] + ((s32) (((s64) (param_5) * (param_3[5] - param_2[5]) + 0x800) >> 12));
    param_1[6] = param_2[6] + ((s32) (((s64) (param_5) * (param_3[6] - param_2[6]) + 0x800) >> 12));
    param_1[7] = param_2[7] + ((s32) (((s64) (param_5) * (param_3[7] - param_2[7]) + 0x800) >> 12));
    param_1[8] = param_2[8] + ((s32) (((s64) (param_5) * (param_3[8] - param_2[8]) + 0x800) >> 12));
    lVar1      = (s64) param_1[6] * param_1[6] + (s64) param_1[7] * param_1[7] + (s64) param_1[8] * param_1[8];
    if (lVar1 >= data_021245cc) {
        iVar3 = func_020069bc(param_1 + 6, param_1 + 6);
    }
    if (iVar3 == 0) {
        *(Vec3 *) (param_1 + 6) = *(Vec3 *) (param_3 + 6);
    }
    param_1[9] = func_02117c68(param_2[9], param_3[9], param_6, 0x17);
}

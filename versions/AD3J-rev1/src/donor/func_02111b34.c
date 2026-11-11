/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7fe4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c7fe4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_0206902c(s32 a);
extern s32 func_02069098(s32 a, s32 b);
u32 func_02111b34(s32 *param_1, u32 param_2, s32 param_3, s32 *param_4, s32 *param_5) {
    s32 iVar4;
    s32 iVar5;

    iVar4 = ((s32) ((((s64) (param_1[0]) * (s64) (param_1[0])) + 0x800) >> 12)) +
            ((s32) ((((s64) (param_1[2]) * (s64) (param_1[2])) + 0x800) >> 12));
    if (iVar4 > ((s32) ((((s64) (param_3) * (s64) (param_3)) + 0x800) >> 12))) {
        iVar4 = func_0206902c(iVar4);
        iVar4 = func_02069098(param_3 - iVar4, iVar4);
        iVar5 = param_1[0];
        if (iVar5 >= 0) {
            if (param_5[0] <= 0) {
                param_4[0] += ((s32) ((((s64) (iVar5) * (s64) (iVar4)) + 0x800) >> 12));
            }
        } else if (param_5[0] >= 0) {
            param_4[0] += ((s32) ((((s64) (iVar5) * (s64) (iVar4)) + 0x800) >> 12));
        }
        iVar5 = param_1[2];
        if (iVar5 >= 0) {
            if (param_5[2] <= 0) {
                param_4[2] += ((s32) ((((s64) (iVar5) * (s64) (iVar4)) + 0x800) >> 12));
            }
        } else if (param_5[2] >= 0) {
            param_4[2] += ((s32) ((((s64) (iVar5) * (s64) (iVar4)) + 0x800) >> 12));
        }
        return 1;
    }
    return 0;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009dfc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02009dfc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
u32 func_02009d50(s32 *param_1, s32 *param_2, s32 *param_3) {
    s32 A = ((s32) ((((s64) (param_1[0]) * (param_2[0])) + 0x800) >> 12)) +
            ((s32) ((((s64) (param_1[2]) * (param_2[2])) + 0x800) >> 12));
    s32 B;
    if (A > 0) {
        return 0;
    }
    B = ((s32) ((((s64) (param_1[0]) * (param_3[0])) + 0x800) >> 12)) +
        ((s32) ((((s64) (param_1[2]) * (param_3[2])) + 0x800) >> 12));
    if (B > 0) {
        return 1;
    }
    return 2;
}

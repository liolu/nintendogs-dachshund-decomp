/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009f38 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02009f38.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
s32 func_02009e8c(s32 *param_1, s32 *param_2) {
    s32 x = ((s32) (((s64) (param_1[0]) * (param_2[0]) + 0x800) >> 12));
    s32 y = ((s32) (((s64) (param_1[2]) * (param_2[2]) + 0x800) >> 12));
    return (x + y) > 0;
}

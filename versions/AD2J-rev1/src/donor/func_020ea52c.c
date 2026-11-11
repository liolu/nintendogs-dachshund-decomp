/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0209b73c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209b73c.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
s32 func_020ea52c(s32 param_1) {
    if (param_1 == 0) {
        goto zero;
    }
    param_1 = -(*(s32 *) param_1 >> 10);
    if (param_1 < -128) {
        return -128;
    }
    if (param_1 > 127) {
        param_1 = 127;
    }
    return param_1;
zero:
    return 0;
}

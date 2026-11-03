/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020939ac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020939ac.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
extern s32 data_0212d358[];
s32 func_020c90d4(s32 param_1) {
    s32 r = 0;
    s32 i = 0;
    do {
        if (param_1 <= data_0212d358[i]) {
            r = i;
            goto out;
        }
        i = (s16) (i + 1);
    } while (i < 15);
out:
    return r;
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d9024 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d9024.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
extern s32 func_01ffda04(s32 x);
s32 func_021224c0(s32 p) {
    p = (s16) (p + 1);
    if (func_01ffda04(p) != 0) {
        goto found;
    }
    for (;;) {
        p = (s16) (p + 1);
        if (p >= 3) {
            return -1;
        }
        if (func_01ffda04(p) != 0) {
            goto found;
        }
    }
found:
    return p;
}

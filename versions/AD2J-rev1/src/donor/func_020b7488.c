/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021110e0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_021110e0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern s32 func_01ffda04(s32 idx);
s32 func_020b7488(u8 *param_1) {
    s32 i;
    s32 found;
    s32 idx;
    found = 0;
    i     = found;
    idx   = -1;
    do {
        s32 r = func_01ffda04(i);
        if (r != 0) {
            if (idx < 0) {
                found = 1;
                idx   = i;
            } else {
                found = 0;
            }
        }
        i = (s16) (i + 1);
    } while (i < 3);
    if (found != 0 && idx >= 0) {
        *(s16 *) (param_1 + 4) = (s16) idx;
    }
    return found;
}

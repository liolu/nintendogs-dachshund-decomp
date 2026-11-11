/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009d34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02009d34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
u32 func_02009c88(s32 *param_1, s32 *param_2, s32 *param_3) {
    s32 i8;
    s32 i7;
    s32 p8;
    s32 b;
    u32 r;

    i8 = ((s32) ((((s64) (param_1[0]) * (param_2[0])) + 0x800) >> 12)) +
         ((s32) ((((s64) (param_1[2]) * (param_2[2])) + 0x800) >> 12));
    i7 = ((s32) ((((s64) (param_1[0]) * (param_3[0])) + 0x800) >> 12)) +
         ((s32) ((((s64) (param_1[2]) * (param_3[2])) + 0x800) >> 12));
    p8 = 0;
    if (i8 > 0) {
        p8 = 1;
    } else {
        i8 = -i8;
    }
    b = 0;
    if (i7 > 0) {
        b = 1;
    } else {
        b  = 0;
        i7 = -i7;
    }
    if (i8 > i7) {
        r = p8 ? 0 : 3;
        return r;
    }
    r = b ? 1 : 2;
    return r;
}

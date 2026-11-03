/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02085be8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02085be8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
s32 func_02089418(s32 param_1, s32 param_2, ...) {
    u32 uv;
    s32 r;
    u16 h  = *(u16 *) &param_1;
    s16 sv = *(s16 *) &param_1;
    r      = ((s32) sv << 20) >> 20;
    uv     = ((u32) h << 18) >> 30;
    if (uv != 1) {
        if (uv == 2) {
            r = r - param_2;
        }
        return r;
    }
    return r - (param_2 + 1) / 2;
}

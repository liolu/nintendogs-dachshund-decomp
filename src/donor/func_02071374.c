/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206fb74 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206fb74.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
extern s32 func_0207154c(void);
s32 func_02071374(s32 param_1) {
    s32 d;
    s32 t;
    d = func_0207154c();
    t = param_1 / d + (param_1 % d != 0);
    return (((t & 0x1f) != 0) + (t >> 5)) * 4;
}

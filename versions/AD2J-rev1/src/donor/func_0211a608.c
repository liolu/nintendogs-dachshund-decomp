/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1174 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d1174.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
u32 func_0211a608(u32 *param_1) {
    u8 *q   = (u8 *) param_1[0];
    s32 lim = *(s32 *) q - 1;
    u8 *t   = q + 32;
    s32 idx = (s32) param_1[2];
    s32 e;
    if (idx >= lim) {
        goto exit0;
    }
    e = *(s32 *) (t + idx * 44 + 40) - 1;
    if ((s32) param_1[1] < e) {
        param_1[1] = param_1[1] + 1;
    } else {
        param_1[1] = 0;
        param_1[2] = param_1[2] + 1;
    }
    return 1;
exit0:
    param_1[2] = (u32) lim;
    param_1[1] = 0;
    return 0;
}

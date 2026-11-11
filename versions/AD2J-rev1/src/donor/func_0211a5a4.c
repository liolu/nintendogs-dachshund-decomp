/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1110 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d1110.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
u32 func_0211a5a4(s32 *param_1) {
    u8 *p;
    p          = (u8 *) param_1[0] + 32;
    param_1[1] = param_1[1] - 1;
    if (param_1[1] < 0) {
        if (param_1[2] == 0) {
            param_1[2] = 0;
            param_1[1] = 0;
            return 0;
        }
        param_1[2] = param_1[2] - 1;
        param_1[1] = *(s32 *) (p + param_1[2] * 44 + 0x28) - 1;
    }
    return 1;
}

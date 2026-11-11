/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d12e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d12e8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[11];
} E44;
u32 func_0211a774(s32 *param_1, s32 param_2, E44 *param_3, s32 param_4) {
    E44 *arr = (E44 *) ((u8 *) param_1 + 32);
    s32 i;
    E44 *src;
    E44 *p3 = param_3;
    u32 ret;
    if (param_1[0] - 1 < param_4) {
        param_1[0] = param_1[0] + 1;
        i          = param_1[0] - 2;
        if (i >= param_2 + 1) {
            src = arr + i;
            do {
                *(src + 1) = *src;
                i          = i - 1;
                src        = src - 1;
            } while (param_2 + 1 <= i);
        }
        {
            E44 *dst = arr + param_2;
            dst      = dst + 1;
            *dst     = *p3;
        }
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

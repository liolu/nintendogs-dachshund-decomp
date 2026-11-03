/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d13a4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d13a4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[11];
} Ent44;
u32 func_0211a830(s32 *param_1, s32 param_2, s32 *param_3, s32 param_4) {
    s32 n       = param_1[0];
    s32 pos     = param_2;
    Ent44 *src  = (Ent44 *) param_3;
    Ent44 *base = (Ent44 *) ((u8 *) param_1 + 32);
    s32 i;
    Ent44 *s;
    Ent44 *d;
    if (n - 1 >= param_4) {
        goto ret0;
    }
    param_1[0] = n + 1;
    i          = param_1[0] - 2;
    if (i >= pos) {
        do {
            s  = base + i;
            d  = s + 1;
            *d = *s;
            i  = i - 1;
        } while (i >= pos);
    }
    d  = base + pos;
    *d = *src;
    return 1;
ret0:
    return 0;
}

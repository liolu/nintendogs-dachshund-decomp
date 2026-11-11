/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209522c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209522c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
void func_020ca8b0(u8 *param_1, s16 *param_2) {
    s16 i;
    s16 j;
    i = 0;
    do {
        *(s16 *) (param_1 + 18 + i * 2) = 0;
        i                               = i + 1;
    } while (i < 11);
    j = 0;
    do {
        u16 v = *(u16 *) param_2;
        if (v == 0) {
            return;
        }
        *(u16 *) (param_1 + 18 + j * 2) = v;
        j                               = j + 1;
        param_2                         = param_2 + 1;
    } while (j < 10);
}

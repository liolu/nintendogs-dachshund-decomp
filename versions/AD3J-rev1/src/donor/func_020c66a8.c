/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090e30 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02090e30.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
extern u32 *data_02154c3c;
void func_020c66a8(void) {
    s16 i;
    for (i = 0; i < 14; i++) {
        u32 *p = data_02154c3c;
        if ((p[0] & (1u << i)) == 0) {
            u32 *q = p + i;
            q[1]   = 0;
        }
    }
}

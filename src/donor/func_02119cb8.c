/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d0824 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d0824.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 w[10];
} T;
void func_02119cb8(u8 *param_1, u32 *param_2) {
    *(T *) param_2 = *(T *) (param_1 + 0x10);
}

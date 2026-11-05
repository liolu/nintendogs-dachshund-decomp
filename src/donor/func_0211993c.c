/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d04a8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d04a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02117060(u32 *a, u32 *b, u32 *c, u16 *d, u16 *e);
typedef struct {
    u32 w[3];
} T3;
void func_0211993c(u32 *param_1, u32 *param_2) {
    func_02117060(param_1, param_1 + 3, param_2 + 7, (u16 *) (param_2 + 6), (u16 *) ((u8 *) param_2 + 0x1a));
    *(T3 *) param_2       = *(T3 *) (param_1 + 3);
    *(T3 *) (param_2 + 3) = *(T3 *) (param_1 + 6);
    param_2[8]            = param_1[9];
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02095304 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02095304.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 a;
    u32 b;
} Pair;
void func_020ca988(u8 *param_1) {
    Pair *s = (Pair *) (param_1 + 0x640);
    s->a    = 0xffff;
    s->b    = 0xffff;
}

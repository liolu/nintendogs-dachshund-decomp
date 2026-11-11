/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca988 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca988.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 a;
    u32 b;
} Pair;
void func_020ca984(u8 *param_1) {
    Pair *s = (Pair *) (param_1 + 0x640);
    s->a    = 0xffff;
    s->b    = 0xffff;
}

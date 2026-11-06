/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209c1b8 from projets/nintendogs-chihuahua-friends/src/donor/func_0209c1b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u32 a;
    u32 b;
} Pair;
extern void func_0209bfe4(u8 *p, s16 v, u16 *q);
void func_0209c1b8(u8 *param_1, s16 param_2) {
    u16 local[2];
    u8 *q;
    Pair *s;
    local[0] = 0;
    local[1] = 0x5a;
    func_0209bfe4(param_1, param_2, local);
    q                        = param_1 + 4;
    s                        = (Pair *) (q + 0x640);
    s->a                     = 0xbeef;
    s->b                     = 0xbeef;
    *(u16 *) (q + 1536 + 76) = 0x13a;
    if (0xea5f < *(u16 *) (q + 1536 + 76)) {
        *(u16 *) (q + 1536 + 76) = 0xea5f;
    }
    s                           = (Pair *) (param_1 + 0x2614);
    s->a                        = 0xbeef;
    s->b                        = 0xbeef;
    *(u16 *) (param_1 + 0x74f0) = 2;
}

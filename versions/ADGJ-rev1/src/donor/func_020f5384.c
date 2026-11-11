/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5384 from projets/nintendogs-chihuahua-friends/src/donor/func_020f5384.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 a;
    u32 b;
    u32 c;
    u32 pad[2];
    void *data;
} E24;
typedef struct {
    u32 count;
    u8 pad[144];
    E24 e[1];
} Tbl;
extern E24 *data_02155060;
extern void func_0206e1b8(void *dst, void *src, u32 size);
void func_020f5384(Tbl **pp, u32 idx) {
    Tbl *t;
    E24 *g;
    E24 *e;

    if (pp == 0) {
        return;
    }
    t = *pp;
    if (t == 0) {
        return;
    }
    if (idx >= t->count) {
        return;
    }
    g = data_02155060;
    e = &t->e[idx];
    func_0206e1b8(g->data, e->data, 316);
    e->a = g->a;
    e->b = g->b;
    e->c = g->c;
}

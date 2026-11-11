/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c12b8 from projets/nintendogs-chihuahua-friends/src/donor/func_020c12b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 a;
    s32 b;
    s16 c;
    u16 d;
    u32 e;
    u32 f;
} Obj;
extern Obj *data_021538dc;
extern void *func_02003844(void *heap, u32 size);
extern void func_020f7640(void *a, u32 b, u32 c);
Obj *func_020c12b8(void *heap) {
    void *buf;
    Obj *o;

    buf = func_02003844(heap, 0xe800);
    o   = func_02003844(heap, sizeof(Obj));
    if (o != ((void *) 0)) {
        o->a          = -1;
        o->b          = -1;
        o->c          = -1;
        o->d          = 0;
        o->e          = 0;
        o->f          = 0;
        data_021538dc = o;
        func_020f7640(buf, 0xe800, 0);
    }
    return o;
}

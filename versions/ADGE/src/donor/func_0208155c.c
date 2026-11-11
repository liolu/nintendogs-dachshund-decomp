/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204a0dc from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_0204a0dc.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_0206c1f8(void);
extern u32 func_0206c094(const void *p, u32 a, u32 b);
extern void func_0206c024(void);
typedef struct TexData {
    int f0;
    u32 f4lo : 4;
    u32 f4hi : 28;
    int f8;
} TexData;
typedef struct Elem {
    TexData *tex;
    u32 result;
    char pad[0x14 - 8];
} Elem;
typedef struct Obj {
    char pad20[0x20];
    Elem *list;
    char pad24[0x26 - 0x24];
    u16 count;
} Obj;
int func_0208155c(Obj *thiz, u32 (*cb)(const void *, u32)) {
    int i;
    func_0206c1f8();
    for (i = 0; i < thiz->count; i++) {
        Elem *e    = (Elem *) ((char *) thiz->list + i * 0x14);
        TexData *t = e->tex;
        u32 flag   = (t->f4lo == 5) ? 1 : 0;
        u32 r      = cb((const void *) t->f8, flag);
        func_0206c094((const void *) ((char *) e->tex + 0x20), r, (u32) t->f8);
        e->result = r;
    }
    func_0206c024();
    return 1;
}

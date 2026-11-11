/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060e38 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060e38.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
struct Obj {
    char pad[0x64];
    u32 unk64;
};
typedef struct {
    u32 *f0;
    char pad4[0x24];
    void (*cb)(void *);
    void *cb_arg;
    char pad30[4];
    u32 flags;
    char pad38[4];
    struct Obj obj;
    char pada4[0x30];
    u16 fd4;
} G;
extern G data_0214ec20;
extern u32 func_02080c28(void);
extern void func_02080c3c(u32 state);
extern void func_0207f5fc(u16 *self);
extern void func_0207f5c8(struct Obj *self);
void func_02066270(void) {
    int gi             = (int) &data_0214ec20;
    G *g               = (G *) gi;
    void (*cb)(void *) = g->cb;
    void *arg          = g->cb_arg;
    u32 s;
    u32 *pf;

    *g->f0 = 0;
    s      = func_02080c28();
    pf     = (u32 *) ((gi + 0x34));
    {
        u32 val = *pf;
        val &= ~0xc;
        *pf = val;
    }
    func_0207f5fc(&g->fd4);
    if (g->flags & 0x10) {
        func_0207f5c8(&g->obj);
    }
    func_02080c3c(s);
    if (cb) {
        cb(arg);
    }
}

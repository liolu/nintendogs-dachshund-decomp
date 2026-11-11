/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02066270 from projets/nintendogs-dachshund/src/donor/func_02066270.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
extern G data_0214e180;
extern u32 func_0208120c(void);
extern void func_02081220(u32 state);
extern void func_0207fc44(u16 *self);
extern void func_0207fc10(struct Obj *self);
void func_02067668(void) {
    int gi             = (int) &data_0214e180;
    G *g               = (G *) gi;
    void (*cb)(void *) = g->cb;
    void *arg          = g->cb_arg;
    u32 s;
    u32 *pf;

    *g->f0 = 0;
    s      = func_0208120c();
    pf     = (u32 *) ((gi + 0x34));
    {
        u32 val = *pf;
        val &= ~0xc;
        *pf = val;
    }
    func_0207fc44(&g->fd4);
    if (g->flags & 0x10) {
        func_0207fc10(&g->obj);
    }
    func_02081220(s);
    if (cb) {
        cb(arg);
    }
}

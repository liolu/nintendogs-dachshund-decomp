/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ddc80 from projets/nintendogs-shiba-friends/src/donor/func_020ddc80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef union {
    char name[16];
    u32 val[4];
} ResName;
typedef struct {
    u32 f0;
    s32 nodeId[6];
    u8 pad1c[0x1e4 - 0x1c];
    void *f1e4;
} Work;
typedef struct {
    u8 pad[8];
    u8 *mdl;
} RenderObj;
typedef struct {
    u8 pad0[0x1c];
    RenderObj *ro;
    u16 f20;
    u8 pad22[0x1f0 - 0x22];
    void *cb1f0;
    void *cb1f4;
    void *cb1f8;
    u8 pad1fc[0x214 - 0x1fc];
    Work *work;
} Obj;
typedef struct {
    u8 b[12];
} Ent12;
extern void func_020ddb8c(void);
extern void func_020dd7ec(void);
extern void func_020ddc2c(void);
extern const char *data_02145664[];
extern void func_020dcf68(void);
extern Ent12 data_0214567c[];
extern void func_02107ca4(Obj *p, s16 a);
extern void *func_02003844(void *heap, u32 n);
extern void func_0205e950(char *dst, u32 n, const char *fmt, ...);
extern s32 func_02078bf4(void *dict, ResName *name);
extern void func_020c51d4(Obj *p, s16 node, void (*cb)(void));
extern u32 func_020defa0(u32 a);
extern void func_020deefc(u32 a, Obj *p);
void func_020ddc88(Obj *obj, void *heap, int kind, u32 p4, s32 p5) {
    Work *work;
    s32 i;

    func_02107ca4(obj, kind);
    obj->cb1f4 = func_020ddb8c;
    obj->cb1f8 = func_020dd7ec;
    obj->cb1f0 = func_020ddc2c;
    obj->work  = func_02003844(heap, sizeof(Work));
    work       = obj->work;
    if (obj != ((void *) 0)) {
        u8 *mdl = obj->ro->mdl;
        for (i = 0; i < 6; i++) {
            ResName name;
            name.val[0] = 0;
            name.val[1] = 0;
            name.val[2] = 0;
            name.val[3] = 0;
            func_0205e950(name.name, 16, data_02145664[i]);
            work->nodeId[i] = func_02078bf4((void *) ((u32) mdl + 0x40), &name);
            func_020c51d4(obj, work->nodeId[i], func_020dcf68);
        }
    }
    work->f1e4 = &data_0214567c[p5];
    work->f0   = func_020defa0(p4);
    func_020deefc(p4, obj);
    obj->f20 |= 0x10;
}

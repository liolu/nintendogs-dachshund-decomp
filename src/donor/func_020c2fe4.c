/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2fe8 from projets/nintendogs-chihuahua-friends/src/donor/func_020c2fe8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef struct {
    u8 pad00[0xc];
    u32 stat;
    u8 pad10[0x38];
} FSFile;
typedef struct {
    FSFile file;
    void *arc;
} ArcEnt;
typedef struct {
    u16 idx;
    u16 pad;
    const char *name;
    void *data;
    void *res;
} ResEnt;
typedef struct {
    u16 pad;
    s16 idx;
    void *src;
    void *obj;
} ObjEnt;
typedef struct Loader {
    s16 state;
    u16 pad02;
    u8 list[0x24];
    void *heap;
    void (*cb)(struct Loader *p, s32 kind, s32 idx);
    u16 pad30;
    s16 numArc;
    s16 numRes;
    s16 numObj;
    ArcEnt arc[4];
    ResEnt res[4];
    ObjEnt obj[16];
    u32 texKey;
    u32 texOfs;
    u32 plttKey;
    u32 plttOfs;
} Loader;
extern const char *data_02141604[];
extern const char data_02141624[];
extern void func_0208b6fc(FSFile *file);
extern BOOL func_0207e79c(void *arc, const char *name, void *bin);
extern void *func_02078ba4(void *mdl);
extern u32 func_020756e0(void *tex);
extern u32 func_020756d4(void *tex);
extern u32 func_020755d8(void *tex);
extern void func_020756c0(void *tex, u32 texKey, u32 tex4x4Key);
extern void func_020755d0(void *tex, u32 plttKey);
extern void func_0200747c(void *tex);
extern void func_02007430(void *tex);
extern void *func_02078be4(void *mdl);
extern void func_020751c8(void *mdlSet, void *tex);
extern int func_0205e950(char *buf, u32 n, const char *fmt, ...);
extern void *func_0207e718(const char *path);
extern void *func_020c4c34(void *heap, void *data);
extern void func_020c4d60(void *res);
extern void *func_020c5464(void *heap, void *src, void *res);
extern void func_020c4eec(void *list, void *obj);
extern void func_020c4eb0(void *list, void *obj);
extern void func_020c4d80(void *res);
extern void func_0207e76c(void *arc);
extern void func_0207e3b0(void *heap, u32 id);
extern void func_0207e40c(void *heap, u32 id);
static inline BOOL FS_IsFile(volatile const FSFile *file) {
    return (file->stat & 0x10) ? 1 : 0;
}
static inline BOOL FS_IsBusy(volatile const FSFile *file) {
    return (file->stat & 1) ? 1 : 0;
}
void func_020c2fe4(Loader *p) {
    BOOL ok = 1;
    s16 i;
    s16 k;

    switch (p->state) {
        case 0:
            break;
        case 1:
            for (i = 0; i < p->numArc; i++) {
                ArcEnt *a = &p->arc[i];
                if (FS_IsFile(&a->file) && !FS_IsBusy(&a->file)) {
                    void *bin = (u8 *) a->arc + 0x60;
                    func_0208b6fc(&a->file);
                    func_0207e79c(a->arc, data_02141604[i], bin);
                } else {
                    ok = 0;
                }
            }
            if (!ok) {
                return;
            }
            {
                char path[68];
                s16 j;
                ok = 0;
                for (j = 0; j < p->numRes; j++) {
                    ResEnt *r = &p->res[j];
                    if (r->name != ((void *) 0)) {
                        func_0205e950(path, 64, data_02141624, data_02141604[r->idx], r->name);
                        r->data = func_0207e718(path);
                        r->res  = func_020c4c34(p->heap, r->data);
                        func_020c4d60(r->res);
                        ok = 1;
                    } else {
                        r->res = ((void *) 0);
                    }
                }
            }
            p->state = 2;
            if (ok) {
                for (i = 0; i < p->numRes; i++) {
                    void **res = p->res[i].res;
                    if (res != ((void *) 0)) {
                        void *mdl = res[2];
                        void *tex = func_02078ba4(mdl);
                        if (tex != ((void *) 0)) {
                            u32 texSize = func_020756e0(tex);
                            u32 plttSize;
                            u32 texKey;
                            u32 plttKey;
                            func_020756d4(tex);
                            plttSize = func_020755d8(tex);
                            plttKey  = (((p->plttOfs + ((p->plttKey & 0xffff) << 3)) >> 3) & 0xffff) | ((plttSize >> 3) << 16);
                            texKey   = (((p->texOfs + ((p->texKey & 0xffff) << 3)) >> 3) & 0xffff) | ((texSize >> 4) << 16);
                            func_020756c0(tex, texKey, 0);
                            func_020755d0(tex, plttKey);
                            p->texOfs += texSize;
                            p->plttOfs += plttSize;
                            func_0200747c(tex);
                            func_02007430(tex);
                        }
                        {
                            void *set = func_02078be4(mdl);
                            if (tex != ((void *) 0)) {
                                func_020751c8(set, tex);
                            }
                        }
                    }
                }
            }
            p->texOfs  = 0;
            p->plttOfs = 0;
            break;
        case 2:
            p->state = 3;
            for (k = 0; k < p->numObj; k++) {
                ObjEnt *o = &p->obj[k];
                o->obj    = func_020c5464(p->heap, o->src, p->res[o->idx].res);
                if (p->cb != ((void *) 0)) {
                    p->cb(p, 0, k);
                }
                func_020c4eec(p->list, o->obj);
            }
            if (p->cb != ((void *) 0)) {
                p->cb(p, 1, -1);
            }
            break;
        case 3:
            break;
        case 4:
            p->state = 0;
            for (i = 0; i < p->numObj; i++) {
                ObjEnt *o = &p->obj[i];
                if (p->cb != ((void *) 0)) {
                    p->cb(p, 2, i);
                }
                func_020c4eb0(p->list, o->obj);
                o->obj = ((void *) 0);
            }
            p->numObj = 0;
            if (p->cb != ((void *) 0)) {
                p->cb(p, 3, -1);
            }
            for (i = 0; i < p->numRes; i++) {
                ResEnt *r = &p->res[i];
                if (r->res != ((void *) 0)) {
                    func_020c4d80(r->res);
                }
            }
            p->numRes = 0;
            for (i = 0; i < p->numArc; i++) {
                ArcEnt *a = &p->arc[i];
                func_0207e76c(a->arc);
                a->arc = ((void *) 0);
            }
            p->numArc = 0;
            func_0207e3b0(p->heap, 0x49464348);
            func_0207e40c(p->heap, 0x49464348);
            break;
    }
}

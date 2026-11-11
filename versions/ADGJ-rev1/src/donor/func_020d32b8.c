/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d32b8 from projets/nintendogs-chihuahua-friends/src/donor/func_020d32b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    u8 pad00[0x54];
    s32 f54;
} Eff;
typedef struct {
    u8 pad00[0xc];
    fx32 fc;
    u8 pad10[0xc];
    Eff *eff;
} Work;
typedef struct Dog {
    u8 pad00[0x88];
    s16 f88;
    u8 pad8a[0x12];
    s16 f9c;
    u8 pad9e[0xa];
    s32 fa8;
    u8 padac[4];
    VecFx32 fb0;
    VecFx32 pos;
    u8 padc8[0x190 - 0xc8];
    u8 f190[0x214 - 0x190];
    Work *work;
} Dog;
typedef struct {
    u32 seed;
    Dog *dog;
    u8 pad08[0x18];
    s16 count;
} Game;
typedef struct {
    u8 pad00[0x30];
    VecFx32 v30;
    u8 pad3c[0xc];
    VecFx32 v48;
} Cam;
typedef struct {
    u8 pad00[0x1c];
    Cam *cam;
    u8 pad20[0x64];
    u16 flags;
} Sys;
typedef struct {
    u8 pad00[0x4c];
    fx32 m[3][3];
} CamMtx;
extern Game *data_02156080;
extern Sys *data_02153720;
extern s32 *data_02154c9c;
extern CamMtx data_02150330;
extern s32 func_02044644(s32 a);
extern void func_0210843c(Dog *a, VecFx32 *b, s32 c);
extern void func_02092ee8(s32 a, VecFx32 *b, VecFx32 *c);
extern void func_020ec2a0(void *a, s32 b);
extern void func_020d37a8(Dog *a);
extern void func_020848ec(s32 a, Eff *b);
extern void func_01ff832c(fx32 a, const VecFx32 *b, const VecFx32 *c, VecFx32 *d);
extern Eff *func_02084a14(s32 a, s32 b, VecFx32 *c);
extern void func_02069634(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern void func_02069504(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern s32 func_0210fd98(Dog *a);
static inline s32 GetHeap(void) {
    return (data_02154c9c != ((void *) 0)) ? *data_02154c9c : 0;
}
static inline u16 RandM(u16 mask) {
    u32 s               = data_02156080->seed * 0x10dcd + 1;
    data_02156080->seed = s;
    return (u16) (s & mask);
}
static inline void VEC_Set(VecFx32 *v, fx32 x, fx32 y, fx32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
static inline Dog *GetDog(void) {
    if (data_02156080->count <= 0) {
        return ((void *) 0);
    }
    return data_02156080->dog;
}
s32 func_020d32b8(Dog *p) {
    VecFx32 v0;
    VecFx32 dir;
    VecFx32 right;
    VecFx32 cpos;
    VecFx32 d;
    VecFx32 cr;
    VecFx32 dir0;
    s32 r;
    Work *w;
    VecFx32 *tp;
    s16 r2;
    fx32 a;
    fx32 k;

    r = func_02044644(p->f9c);
    w = p->work;
    if (r == 0) {
        return r;
    }
    if (p->f88 == 0) {
        func_0210843c(p, &v0, 0x4010);
        func_02092ee8(r, &p->pos, &v0);
        if (data_02153720->flags & 2) {
            func_020ec2a0(p->f190, 5);
        }
        func_020d37a8(p);
        p->fa8 = 0;
        return 0;
    }
    tp = &GetDog()->pos;
    if (w->eff != ((void *) 0)) {
        func_020848ec(GetHeap(), w->eff);
        w->eff = ((void *) 0);
    }
    dir = data_02153720->cam->v48;
    func_01ff832c(0x4cd, &dir, tp, &p->pos);
    p->pos.y += 0xee2;
    w->eff = func_02084a14(GetHeap(), 14, &p->pos);
    if (w->eff == ((void *) 0)) {
        return (s32) w->eff;
    }
    w->fc       = ((s32) (((s64) ((s16) RandM(0xfff)) * (0x800) + 0x800) >> 12)) + 0xccd;
    w->eff->f54 = (s16) w->fc;
    r2          = (s16) RandM(0xfff);
    a           = ((s32) (((s64) ((s16) RandM(0xfff)) * (0x290) + 0x800) >> 12)) - 0x148;
    cpos        = data_02153720->cam->v30;
    func_02069634(&p->pos, &cpos, &d);
    d.y    = 0;
    dir0   = dir;
    dir0.y = d.y;
    func_02069504(&dir0, &d, &cr);
    a -= cr.y >> 4;
    k        = ((s32) (((s64) (r2) * (0x333) + 0x800) >> 12)) + 0x333;
    p->fb0.x = ((s32) (((s64) (dir.x) * (k) + 0x800) >> 12));
    p->fb0.y = ((s32) (((s64) (dir.y) * (k) + 0x800) >> 12));
    p->fb0.z = ((s32) (((s64) (dir.z) * (k) + 0x800) >> 12));
    VEC_Set(&right, data_02150330.m[0][0], data_02150330.m[1][0], data_02150330.m[2][0]);
    func_01ff832c(a, &right, &p->fb0, &p->fb0);
    {
        s32 k2   = ((s32) (((s64) ((s16) RandM(0xfff)) * (0xcd) + 0x800) >> 12));
        p->fb0.y = k2 + ((s32) (((s64) (p->pos.y - 0x6000) * (0x19a) + 0x800) >> 12));
    }
    return func_0210fd98(p);
}

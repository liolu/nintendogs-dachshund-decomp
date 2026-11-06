/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eec10 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020eec10.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 x, y, z;
} VecFx32;
typedef struct {
    u8 pad[0x30];
    VecFx32 pos;
    VecFx32 f3c;
    VecFx32 dir;
} Cam;
typedef struct {
    u8 pad[0x1c];
    Cam *cam;
    u8 pad20[0x84 - 0x20];
    u16 f84;
    s16 f86;
    s16 f88;
} Game;
typedef struct {
    u8 pad[0x4c];
    s32 m[9];
} CamMtx;
typedef struct {
    u8 pad[8];
    u16 f8;
} Work;
typedef struct {
    u8 pad[0x9c];
    s16 f9c;
    u8 pad9e[0xbc - 0x9e];
    VecFx32 pos;
    u8 fc8[4];
    u8 padcc[0x214 - 0xcc];
    Work *work;
} Obj;
extern CamMtx data_02150330;
extern Game *data_02153720;
extern s32 func_02044644(s32 a);
extern void func_01ff832c(s32 a, VecFx32 *b, VecFx32 *c, VecFx32 *d);
extern void func_020dca1c(Obj *p, u8 *q);
extern void func_0210fdc8(Obj *p);
extern u16 func_02069878();
void func_020dc8b0(Obj *obj) {
    s32 found;
    Work *work;
    VecFx32 dir;
    VecFx32 right;
    VecFx32 up;
    VecFx32 pos;

    found = func_02044644(obj->f9c);
    work  = obj->work;
    func_02044644(obj->f9c);
    dir     = data_02153720->cam->dir;
    right.x = data_02150330.m[0];
    right.y = data_02150330.m[3];
    right.z = data_02150330.m[6];
    up.x    = data_02150330.m[1];
    up.y    = data_02150330.m[4];
    up.z    = data_02150330.m[7];
    pos     = data_02153720->cam->pos;
    func_01ff832c(0x4000, &dir, &pos, &obj->pos);
    func_01ff832c(-369, &right, &obj->pos, &obj->pos);
    func_01ff832c(655, &up, &obj->pos, &obj->pos);
    func_020dca1c(obj, obj->fc8);
    if (found == 0) {
        return;
    }
    if ((data_02153720->f84 & 2) == 0) {
        return;
    }
    func_0210fdc8(obj);
    func_02044644(obj->f9c);
    {
        s32 a = data_02153720->f86;
        s32 b = data_02153720->f88;
        s32 t;
        u16 v;
        Work *w2 = obj->work;
        t        = (a > 0) ? a : -a;
        if (t < 2) {
            t = (b > 0) ? b : -b;
            if (t < 2) {
                v = w2->f8;
                goto END;
            }
        }
        v = func_02069878(b, a);
    END:
        work->f8 = v;
    }
}

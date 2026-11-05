/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d4ef8 from projets/nintendogs-shiba-friends/src/donor/func_020d4ef8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    s32 counter;
    s32 level;
    fx32 rate;
    u16 phase;
} Work;
typedef struct {
    u8 pad0[0x24];
    VecFx32 scale;
} Model;
typedef struct {
    u8 pad0[0x9c];
    s16 x9c;
    u16 pad9e;
    u16 xa0;
    u8 pada2[0xac - 0xa2];
    fx32 xac;
    VecFx32 vel;
    VecFx32 pos;
    VecFx32 right;
    VecFx32 up;
    VecFx32 front;
    u8 padec[0xf8 - 0xec];
    s32 xf8;
    VecFx32 xfc;
    VecFx32 x108;
    u8 pad114[0x18c - 0x114];
    Model *model;
    u8 x190[0x214 - 0x190];
    Work *work;
} Obj;
typedef struct {
    u16 trg;
    u16 cont;
} Pad;
extern Pad data_0214affc;
extern void func_02044644(s16 a);
extern fx32 func_02069098(fx32 a, fx32 b);
extern void func_01ff832c(fx32 a, VecFx32 *axis, VecFx32 *v, VecFx32 *out);
extern void func_020692f0(const VecFx32 *a, VecFx32 *b);
extern void func_02069504(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern void func_02069668(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern s32 func_02111cbc(u16 a, s32 b);
extern void func_0210fe58(Obj *p, s32 a, VecFx32 *b, VecFx32 *c, ...);
extern fx32 func_0206902c(fx32 a);
extern void func_020ebce4(void *a, s32 b, fx32 c);
extern void func_020d56b4(void);
extern void func_020d55c4(void);
extern void func_020d55b0(void);
extern void func_020d5588(void);
static inline u16 KeyHold(u16 key) {
    return data_0214affc.cont & key;
}
static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z) {
    a->x = x;
    a->y = y;
    a->z = z;
}
void func_020d4f00(Obj *p) {
    VecFx32 right;
    VecFx32 up;
    VecFx32 front;
    VecFx32 d;
    Work *w;
    fx32 spd;
    fx32 turn;
    fx32 acc;
    fx32 len;
    fx32 k;

    w = p->work;
    func_02044644(p->x9c);
    spd = func_02069098(w->level << 12, 50 << 12);
    VEC_Set(&right, p->right.x, p->right.y, p->right.z);
    VEC_Set(&up, p->up.x, p->up.y, p->up.z);
    VEC_Set(&front, p->front.x, p->front.y, p->front.z);
    w->counter = (w->counter + 1) % 65535;
    if (KeyHold(1)) {
        if (w->level < 60) {
            w->level++;
        }
    } else if (w->level > 0 && w->counter % 2 == 0) {
        w->level--;
    }
    if (w->level > 50) {
        w->level = 50;
    }
    k       = func_02069098(w->level << 12, 50 << 12);
    w->rate = ((fx32) (((fx64) (k) * (0x2000) + 0x800) >> 12));
    w->phase += w->rate;
    turn = ((fx32) (((fx64) (spd * 2) * (41) + 0x800) >> 12));
    if (turn > 41) {
        turn = 41;
    }
    if (KeyHold(0x40)) {
        func_01ff832c(-turn, &up, &front, &front);
    } else if (front.y < -20) {
        front.y += 20;
    }
    if (KeyHold(0x80)) {
        func_01ff832c(turn, &up, &front, &front);
    } else if (front.y > 20) {
        front.y -= 20;
    }
    if (front.y > 0x800 || front.y < -0x800) {
        VEC_Set(&front, p->front.x, p->front.y, p->front.z);
    }
    if (KeyHold(0x10)) {
        func_01ff832c(-turn * 2, &right, &front, &front);
    }
    if (KeyHold(0x20)) {
        func_01ff832c(turn << 1, &right, &front, &front);
    }

    acc = ((fx32) (((fx64) (spd) * (6) + 0x800) >> 12));
    p->vel.y += acc - ((fx32) (((fx64) (0x1000 - spd) * (18) + 0x800) >> 12));
    if (p->vel.y < 0) {
        fx32 *vy = &p->vel.y;
        *vy += acc;
        if (p->pos.y < 0x1000) {
            *vy += acc;
        }
        if (p->pos.y < 0x800) {
            p->vel.y += acc;
        }
    }
    {
        fx32 s = -((fx32) (((fx64) (front.y) * (((fx32) (((fx64) (spd) * (10) + 0x800) >> 12)) << 2) + 0x800) >> 12));
        d      = front;
        d.y    = 0;
        d.x    = ((fx32) (((fx64) (d.x) * (s) + 0x800) >> 12));
        d.y    = ((fx32) (((fx64) (d.y) * (s) + 0x800) >> 12));
        d.z    = ((fx32) (((fx64) (d.z) * (s) + 0x800) >> 12));
    }
    func_02069668(&d, &p->vel, &p->vel);

    len = func_0206902c(((fx32) (((fx64) (p->vel.x) * (p->vel.x) + 0x800) >> 12)) +
                        ((fx32) (((fx64) (p->vel.z) * (p->vel.z) + 0x800) >> 12)));
    if (len > 492) {
        fx32 k   = func_02069098(492, len);
        p->vel.x = ((fx32) (((fx64) (p->vel.x) * (k) + 0x800) >> 12));
        p->vel.z = ((fx32) (((fx64) (p->vel.z) * (k) + 0x800) >> 12));
    }
    {
        fx32 v = p->vel.x;
        if (v >> 6 > 0) {
            p->vel.x = v - (v >> 6);
        } else {
            if (v > 0) {
                p->vel.x = v - 1;
            }
            if (p->vel.x < 0) {
                p->vel.x++;
            }
        }
    }
    {
        fx32 v = p->vel.z;
        if (v >> 6 > 0) {
            p->vel.z = v - (v >> 6);
        } else {
            if (v > 0) {
                p->vel.z = v - 1;
            }
            if (p->vel.z < 0) {
                p->vel.z++;
            }
        }
    }
    if (p->vel.y > 328) {
        p->vel.y = 328;
    }
    func_020692f0(&front, &front);
    right.x = front.z;
    right.z = -front.x;
    func_020692f0(&right, &right);
    func_02069504(&front, &right, &up);
    p->right.x = right.x;
    p->right.y = right.y;
    p->right.z = right.z;
    p->up.x    = up.x;
    p->up.y    = up.y;
    p->up.z    = up.z;
    p->front.x = front.x;
    p->front.y = front.y;
    p->front.z = front.z;
    func_02069668(&p->pos, &p->vel, &p->pos);
    func_0210fe58(p, p->xf8, &p->xfc, &p->x108, func_02111cbc(p->xa0, p->xf8), func_020d56b4, 0, func_020d55c4, func_020d55b0,
                  func_020d5588);
    if (p->pos.y >= 0x9f80) {
        p->pos.y = 0x9f80;
        p->vel.y = 0;
    }
    p->xac = 2000 - ((fx32) (((fx64) (func_02069098(p->pos.y, 0x9f80)) * (1000) + 0x800) >> 12));
    VEC_Set(&p->model->scale, p->xac, p->xac, p->xac);
    func_020ebce4(p->x190, 4, w->rate);
}

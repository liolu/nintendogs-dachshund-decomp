/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ac41c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ac41c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u16 vu16;
typedef int BOOL;
typedef s32 fx32;
typedef s16 fx16;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
typedef struct {
    u8 x;
    u8 y;
    u16 touch;
} TouchPos;
typedef struct {
    s16 x, y;
} Pos16;
typedef struct {
    u8 pad00[0x30];
    VecFx32 pos;
    u8 pad3c[0x30];
    s16 f6c;
    s16 f6e;
} Sub;
typedef struct {
    u8 pad00[0x1c];
    Sub *sub;
    u32 flags;
    u8 pad24[2];
    s16 state;
    u8 pad28[6];
    s16 f2e;
    u8 pad30[4];
    s32 f34;
    u16 f38;
    s16 f3a;
    s32 f3c;
    u16 f40;
    s16 f42;
    u8 pad44[0xc];
    u8 f50[0x20];
    s32 f70;
    s16 f74;
    u8 pad76[0xc];
    TouchPos tp;
    Pos16 cur;
    Pos16 prev;
    Pos16 prev2;
    u8 pad92[2];
    s32 f94;
    s32 f98;
    VecFx32 pos;
    VecFx32 prevPos;
    u16 fb4;
    s16 fb6;
    u16 fb8;
    u8 padba[2];
    s32 fbc;
    s32 fc0;
    u16 fc4;
    s16 slot[3];
    s16 num;
    u8 padce[2];
    VecFx32 vecs[3];
    VecFx32 ff4;
    u8 pad100[0xe];
    s16 f10e;
    s16 f110;
    u8 pad112[0x1e];
    s32 f130;
    s32 f134;
    s16 f138;
} Obj;
typedef struct {
    u8 pad[0x4c];
    MtxFx33 mtx;
} Camera;
typedef struct {
    u8 pad[0xc];
    fx32 f0c;
} Glb28;
typedef struct {
    u8 pad[0x84];
    u16 f84;
} Glb44;
typedef struct {
    u16 f0;
    u16 f2;
} Pad;
typedef struct {
    u8 pad[0xc];
    void *f0c;
} Glb7c;
extern TouchPos data_0214b024;
extern Glb44 *data_02153720;
extern Pad data_0214affc;
extern u16 *data_02153708;
extern Glb7c *data_021538dc;
extern Camera data_02150330;
extern Glb28 *data_02153704;
extern const fx16 data_02124ad8[];
extern void func_02092a20(Obj *p);
extern void func_02006638(TouchPos *tp);
extern BOOL func_020f7778(void *o);
extern BOOL func_020f7780(void *o);
extern void func_020951e0(Obj *p);
extern s32 func_021060cc(void);
extern void *func_01ffda04(s32 i);
extern BOOL func_020219f8(void *dog);
extern void func_020a0198(Obj *p);
extern void func_020a04a0(Obj *p);
extern void func_02099420(Obj *p);
extern void func_020964c8(Obj *p);
extern void func_0209679c(Obj *p);
extern void func_02096da4(Obj *p);
extern void func_0209ac7c(Obj *p);
extern void func_0209aa9c(Obj *p);
extern void func_020a03cc(Obj *p);
extern void func_020a02dc(Obj *p);
extern void func_020a3228(Obj *p);
extern void func_0209ed58(Obj *p);
extern void func_0209ec5c(Obj *p);
extern void func_0209eb34(Obj *p);
extern void func_0209ea84(Obj *p);
extern void func_0209fe88(Obj *p);
extern void func_0209fd0c(Obj *p);
extern void func_020a18a0(Obj *p);
extern void func_020a1820(Obj *p);
extern void func_020a17a0(Obj *p);
extern void func_020a13f4(Obj *p);
extern void func_020a12cc(Obj *p);
extern void func_020a1238(Obj *p);
extern void func_020a0f60(Obj *p);
extern void func_020a0e6c(Obj *p);
extern void func_02097664(Obj *p);
extern void func_0209ccb0(Obj *p);
extern void func_0209c944(Obj *p);
extern void func_0209cc58(Obj *p);
extern void func_020a31cc(Obj *p);
extern void func_020a311c(Obj *p);
extern void func_020a3174(Obj *p);
extern void func_02098bac(Obj *p);
extern void func_0209b68c(Obj *p);
extern void func_0209f204(Obj *p);
extern void func_0209efe4(Obj *p);
extern void func_0209bc88(Obj *p);
extern void func_0209bb10(Obj *p);
extern void func_0209c83c(Obj *p);
extern void func_0209c774(Obj *p);
extern void func_0209c56c(Obj *p);
extern void func_0209c4d8(Obj *p);
extern void func_0209f570(Obj *p);
extern void func_020950c8(Obj *p);
extern fx32 func_01ff8958(fx32 a, fx32 b);
extern void func_01ff832c(fx32 s, const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern void func_02105fa4(VecFx32 *v);
extern u16 func_02069878(fx32 y, fx32 x);
extern void func_02092ee8(Obj *p, VecFx32 *out, const VecFx32 *in);
extern void func_0200b598(VecFx32 *out, const VecFx32 *a, const VecFx32 *b, const VecFx32 *c, const VecFx32 *d);
extern fx32 func_02027500(void *dog);
extern void func_02069634(const VecFx32 *a, const VecFx32 *b, VecFx32 *out);
extern void func_020d79ac(void *a, VecFx32 *b, s32 c, s32 d, s32 e);
static inline fx16 FX_SinIdx(int idx) {
    return data_02124ad8[(idx >> 4) << 1];
}
static inline fx16 FX_CosIdx(int idx) {
    return data_02124ad8[((idx >> 4) << 1) + 1];
}
void func_020942b0(Obj *p) {
    Pos16 *cur;
    s32 r;
    u32 k;
    u32 t;
    void *obj;
    s16 i;
    VecFx32 vA;
    VecFx32 vB;
    VecFx32 vC;
    VecFx32 vD;
    VecFx32 vE;
    VecFx32 v40;
    VecFx32 vG;
    VecFx32 vH;
    VecFx32 v64;
    VecFx32 vI;
    VecFx32 vJ;
    VecFx32 vK;
    VecFx32 a;
    VecFx32 b;
    void *dogs[3];
    VecFx32 buf;
    Sub *sub;

    sub = p->sub;
    cur = &p->cur;
    func_02092a20(p);
    p->f70 = 1;
    if (p->flags & 1) {
        p->tp = data_0214b024;
    } else {
        func_02006638(&p->tp);
    }
    {
        u16 *pf = &p->fb4;
        *pf     = *pf & ~2;
        if (p->fb6 != -1) {
            *pf = *pf & ~1;
        }
    }
    p->fb6 = -1;
    if (data_02153720->f84 & 2) {
        s32 bA   = p->tp.x;
        s32 bB   = p->tp.y;
        s16 sA   = bA;
        s16 sB   = bB;
        cur->x   = sA - 127;
        cur->y   = 95 - sB;
        p->prev  = *cur;
        p->prev2 = *cur;
        p->f94   = 0;
        p->f98   = 0;
        p->fb4   = p->fb4 | 1;
        p->fb8   = 120;
        p->fbc   = 0;
        p->fc0   = 0;
    } else if (data_02153720->f84 & 1) {
        p->prev2 = p->prev;
        p->prev  = p->cur;
        k        = 0xb36;
        {
            s32 bA = p->tp.x;
            s32 bB = p->tp.y;
            s16 sA = bA;
            s16 sB = bB;
            cur->x = sA - 127;
            cur->y = 95 - sB;
        }
        p->fb8 = 120;
        p->fbc = 0;
        p->fc0 = 0;
        p->f94 = ((u32) (((s64) (s32) ((s32) p->cur.x - (s32) p->prev2.x) * (s64) (s32) (k) + 0x800) >> 12));
        p->f98 = ((u32) (((s64) (s32) ((s32) p->cur.y - (s32) p->prev2.y) * (s64) (s32) (k) + 0x800) >> 12));
    } else {
        if (p->fb8 != 0) {
            p->fb8 = p->fb8 - 1;
        }
        if ((u16) (data_0214affc.f2 & 0xcf3) == 0 && p->f34 < 0 && (s32) (*(vu16 *) 0x04000304 & 0x8000) >> 15 == 0) {
            if (p->fbc < 3600) {
                p->fbc = p->fbc + 1;
            }
        } else {
            p->fbc = 0;
        }
        if (*data_02153708 == 0) {
            if ((u16) (data_0214affc.f2 & 0xcf3) == 0) {
                if (p->fc0 < 10800) {
                    p->fc0 = p->fc0 + 1;
                }
            } else {
                p->fc0 = 0;
            }
        }
    }
    obj    = data_021538dc->f0c;
    p->fc4 = 0;
    if (func_020f7778(obj)) {
        p->fc4 = p->fc4 | 1;
    }
    if (func_020f7780(obj)) {
        p->fc4 = p->fc4 | 2;
    }
    if ((p->flags & 2) && p->f2e == 1) {
        p->f34 = -1;
        r      = p->f3c;
        if (r != -1) {
            u8 ok = 0;
            if (r == -4) {
                if (func_020219f8(func_01ffda04(func_021060cc()))) {
                    ok     = 1;
                    p->f34 = p->f3c;
                    p->f3a = p->f42;
                    p->f38 = p->f40;
                }
            } else {
                p->f34 = r;
                ok     = 1;
                p->f3a = p->f42;
                p->f38 = p->f40;
            }
            if (ok) {
                p->f3c = -1;
                p->f42 = 0;
                p->f40 = 0;
            }
        } else {
            func_020951e0(p);
        }
    }
    if (p->f130 >= 0) {
        p->f130 = p->f130 - 1;
        if (p->f130 == 0) {
            p->f130 = -3;
            p->f138 = 2;
        }
    }
    if (p->f134 >= 0) {
        p->f134 = p->f134 - 1;
        if (p->f134 == 0) {
            p->f134 = -3;
        }
    }
    if (p->f74 > 0) {
        p->f74 = p->f74 - 1;
    }
    switch (p->state) {
        case 1:
            func_020a0198(p);
            break;
        case 2:
            func_020a04a0(p);
            break;
        case 4:
            func_020964c8(p);
            break;
        case 5:
            func_0209679c(p);
            break;
        case 6:
            func_02096da4(p);
            break;
        case 11:
            func_020a3228(p);
            break;
        case 12:
            func_0209ed58(p);
            break;
        case 13:
            func_0209ec5c(p);
            break;
        case 14:
            func_0209eb34(p);
            break;
        case 15:
            func_0209ea84(p);
            break;
        case 7:
            func_0209ac7c(p);
            break;
        case 8:
            func_0209aa9c(p);
            break;
        case 9:
            func_020a03cc(p);
            break;
        case 10:
            func_020a02dc(p);
            break;
        case 16:
            func_0209fe88(p);
            break;
        case 17:
            func_0209fd0c(p);
            break;
        case 18:
            func_020a18a0(p);
            break;
        case 19:
            func_020a1820(p);
            break;
        case 20:
            func_020a17a0(p);
            break;
        case 21:
            func_020a13f4(p);
            break;
        case 22:
            func_020a12cc(p);
            break;
        case 23:
            func_020a1238(p);
            break;
        case 24:
            func_020a0f60(p);
            break;
        case 25:
            func_020a0e6c(p);
            break;
        case 26:
            func_02097664(p);
            break;
        case 27:
            func_0209ccb0(p);
            break;
        case 28:
            func_0209c944(p);
            break;
        case 29:
            func_0209cc58(p);
            break;
        case 30:
            func_020a31cc(p);
            break;
        case 31:
            func_020a311c(p);
            break;
        case 32:
            func_020a3174(p);
            break;
        case 33:
            func_02098bac(p);
            break;
        case 3:
            func_02099420(p);
            break;
        case 34:
            func_0209b68c(p);
            break;
        case 38:
            func_0209bc88(p);
            break;
        case 39:
            func_0209bb10(p);
            break;
        case 40:
            func_0209c83c(p);
            break;
        case 41:
            func_0209c774(p);
            break;
        case 42:
            func_0209c56c(p);
            break;
        case 43:
            func_0209c4d8(p);
            break;
        case 44:
            func_0209f570(p);
            break;
        case 35:
            func_0209f204(p);
            break;
        case 36:
            func_0209efe4(p);
            break;
        case 0:
        case 37:
        case 45:
            break;
    }
    if (p->flags & 8) {
        func_020950c8(p);
    }
    if (p->f70 != 0) {
        vA.x       = data_02150330.mtx._00;
        vA.y       = data_02150330.mtx._10;
        vA.z       = data_02150330.mtx._20;
        vB.x       = data_02150330.mtx._01;
        vB.y       = data_02150330.mtx._11;
        vB.z       = data_02150330.mtx._21;
        vC.x       = data_02150330.mtx._02;
        vC.y       = data_02150330.mtx._12;
        vC.z       = data_02150330.mtx._22;
        p->prevPos = p->pos;
        t          = func_01ff8958(sub->f6c, sub->f6e);
        {
            u32 uT = ((u32) (((s64) (s32) (0x6018) * (s64) (s32) (t) + 0x800) >> 12));
            t      = ((u32) (((s64) (s32) (uT) * (s64) (s32) (0x2b) + 0x800) >> 12));
        }
        func_01ff832c(-0x6018, &vC, &p->sub->pos, &p->pos);
        vE = p->pos;
        vD = vE;
        func_01ff832c((s32) t * cur->x, &vA, &p->pos, &p->pos);
        func_01ff832c((s32) t * cur->y, &vB, &p->pos, &p->pos);
        func_02105fa4(&vK);
        if (p->num != -1) {
            u16 ang;
            fx32 d;
            ang   = func_02069878(-vK.x, -vK.z);
            a.x   = FX_SinIdx(ang);
            a.y   = 0;
            a.z   = FX_CosIdx(ang);
            b.x   = -a.z;
            b.y   = 0;
            b.z   = a.x;
            d     = 0x2008 - data_02153704->f0c;
            v64.x = ((fx32) (((s64) (a.x) * (d) + 0x800) >> 12));
            v64.y = ((fx32) (((s64) (a.y) * (d) + 0x800) >> 12));
            v64.z = ((fx32) (((s64) (a.z) * (d) + 0x800) >> 12));
            func_02092ee8(p, &v40, &v64);
            func_01ff832c((s32) t * -127, &b, &vD, &vD);
            func_01ff832c((s32) t * 128, &b, &vE, &vE);
            func_0200b598(&vG, &vK, &vD, &v64, &a);
            func_0200b598(&vH, &vK, &vE, &v64, &a);
            for (i = 0; i < 3; i++) {
                p->vecs[i] = v40;
            }
            for (i = 0; i < 3; i++) {
                if (p->slot[i] != -1) {
                    dogs[p->slot[i]] = func_01ffda04(i);
                }
            }
            switch (p->num) {
                case 1:
                    func_01ff832c(-func_02027500(dogs[0]), &b, &v40, &p->vecs[0]);
                    func_01ff832c(func_02027500(dogs[1]), &b, &v40, &p->vecs[1]);
                    break;
                case 2:
                    func_01ff832c(-(func_02027500(dogs[0]) + func_02027500(dogs[1])), &b, &v40, &p->vecs[0]);
                    func_01ff832c(func_02027500(dogs[2]) + func_02027500(dogs[1]), &b, &v40, &p->vecs[2]);
                    break;
            }
            func_01ff832c(-func_02027500(dogs[0]), &b, &p->vecs[0], &vI);
            func_01ff832c(func_02027500(dogs[p->num]), &b, &p->vecs[p->num], &vJ);
            vI.x -= vG.x;
            vI.z -= vG.z;
            vJ.x -= vH.x;
            vJ.z -= vH.z;
            if (((fx32) (((s64) (vI.x) * (b.x) + 0x800) >> 12)) + ((fx32) (((s64) (vI.z) * (b.z) + 0x800) >> 12)) < 0) {
                for (i = 0; i <= p->num; i++) {
                    p->vecs[i].x -= vI.x;
                    p->vecs[i].z -= vI.z;
                }
            }
            i = 0;
            if (((fx32) (((s64) (vJ.x) * (b.x) + 0x800) >> 12)) + ((fx32) (((s64) (vJ.z) * (b.z) + 0x800) >> 12)) > 0) {
                for (; i <= p->num; i++) {
                    p->vecs[i].x -= vJ.x;
                    p->vecs[i].z -= vJ.z;
                }
            }
        }
        if (p->fb8 != 0) {
            p->ff4 = v40;
        } else {
            p->ff4 = p->sub->pos;
        }
    }
    func_02069634(&p->pos, &p->prevPos, &buf);
    func_020d79ac(p->f50, &buf, 0, p->f34 != -1, 0);
    p->f10e = -1;
    p->f110 = -1;
}

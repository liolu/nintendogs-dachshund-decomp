/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ef2c8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ef2c8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
typedef struct {
    u32 hdr;
    s32 id[6];
    s32 inited[6];
    MtxFx43 rec[6];
    VecFx32 pos[6];
    VecFx32 vel[6];
    s16 *len;
} JointTbl;
typedef struct {
    u8 pad00[0x90];
    s16 mode;
    u8 pad92[0xbc - 0x92];
    VecFx32 trans;
    MtxFx33 rot;
    u8 padec[0x214 - 0xec];
    JointTbl *tbl;
} Model;
typedef struct {
    u8 b0;
    u8 id;
} Info;
typedef struct {
    Info *info;
} Node;
extern Model *data_027c0408;
extern s32 data_0212fc80[];
extern void func_01ff8058(const VecFx32 *v, const MtxFx33 *m, VecFx32 *out);
extern void func_02069668(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02069634(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02069504(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_020692f0(const VecFx32 *a, VecFx32 *out);
static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z) {
    a->x = x;
    a->y = y;
    a->z = z;
}
static inline void VecScale(VecFx32 *v, fx32 s) {
    v->x = ((fx32) (((fx64) (v->x) * (s) + 0x800LL) >> 12));
    v->y = ((fx32) (((fx64) (v->y) * (s) + 0x800LL) >> 12));
    v->z = ((fx32) (((fx64) (v->z) * (s) + 0x800LL) >> 12));
}
static inline void Tr_1(const MtxFx33 *src, MtxFx43 *dst) {
    fx32 t01;
    fx32 t02;
    fx32 t12;
    t01      = src->_01;
    t02      = src->_02;
    t12      = src->_12;
    dst->_01 = src->_10;
    dst->_02 = src->_20;
    dst->_12 = src->_21;
    dst->_20 = t02;
    dst->_21 = t12;
    dst->_10 = t01;
    dst->_00 = src->_00;
    dst->_11 = src->_11;
    dst->_22 = src->_22;
    dst->_30 = 0;
    dst->_31 = 0;
    dst->_32 = 0;
}
void func_020dcf60(Node *node, MtxFx43 *mtx) {
    MtxFx43 m;
    VecFx32 a;
    VecFx32 b;
    VecFx32 x;
    VecFx32 y;
    VecFx32 z;
    VecFx32 u;
    VecFx32 w;
    VecFx32 v;
    VecFx32 d;
    Model *const obj = data_027c0408;
    JointTbl *t      = obj->tbl;
    BOOL big;
    s32 k;
    s32 len;
    s32 i;
    MtxFx43 *rec;

    for (i = 0; i < 6; i++) {
        if (node->info->id == t->id[i]) {
            k = i;
        }
    }
    if (data_0212fc80[k] == 0) {
        return;
    }
    rec = &t->rec[k];
    if (t->inited[k] == 0) {
        *rec         = *mtx;
        t->inited[k] = 1;
        VEC_Set(&a, rec->_30, rec->_31, rec->_32);
        func_01ff8058(&a, &obj->rot, &a);
        func_02069668(&a, &obj->trans, &t->pos[k]);
        VEC_Set(&b, mtx->_00, mtx->_01, mtx->_02);
        func_01ff8058(&b, &obj->rot, &b);
        len         = t->len[k];
        t->vel[k].x = ((fx32) (((fx64) (b.x) * (len) + 0x800LL) >> 12));
        t->vel[k].y = ((fx32) (((fx64) (b.y) * (len) + 0x800LL) >> 12));
        t->vel[k].z = ((fx32) (((fx64) (b.z) * (len) + 0x800LL) >> 12));
        return;
    }

    VEC_Set(&a, mtx->_30, mtx->_31, mtx->_32);
    func_01ff8058(&a, &obj->rot, &a);
    func_02069668(&a, &obj->trans, &a);
    Tr_1(&obj->rot, &m);
    VEC_Set(&y, rec->_10, rec->_11, rec->_12);
    VEC_Set(&z, rec->_20, rec->_21, rec->_22);
    func_02069634(&t->pos[k], &a, &d);
    func_02069668(&d, &t->vel[k], &v);
    t->pos[k] = a;
    if (k != 5) {
        v.y -= t->len[k] >> 3;
    }
    if (obj->mode == 1 && k != 5 && a.y + v.y < 0) {
        fx32 over = -(a.y + v.y);
        fx32 abs;
        v.y += over;
        abs = v.x > 0 ? v.x : -v.x;
        if (abs < 41) {
            v.x = 41;
        } else if (v.x > 0) {
            v.x += over;
        } else {
            v.x -= over;
        }
        abs = v.z > 0 ? v.z : -v.z;
        if (abs < 41) {
            v.z = 41;
        } else if (v.z > 0) {
            v.z += over;
        } else {
            v.z -= over;
        }
    }
    func_01ff8058(&v, (MtxFx33 *) &m, &x);
    if (k >= 1 && k <= 4) {
        s32 half;
        len  = t->len[k];
        half = len >> 1;
        if (x.y > (len >> 3)) {
            x.y = len >> 3;
        }
        if (k == 1 || k == 3) {
            if (x.x < -half) {
                x.x = -half;
            }
        } else {
            if (x.x > half) {
                x.x = half;
            }
        }
        VEC_Set(&w, mtx->_10, mtx->_11, mtx->_12);
        w.x >>= 4;
        w.y >>= 4;
        w.z >>= 4;
        func_02069668(&y, &w, &y);
    }
    if (k == 5) {
        len = t->len[k];
        {
            s32 l = t->len[k];
            if (x.y < (0 - len)) {
                x.y = (0 - len);
            }
            if (x.y < 0) {
                x.y = 0;
            }
            if (x.x < -(fx32) l) {
                x.x = -(fx32) l;
            }
            if (x.x > l) {
                x.x = l;
            }
            if (x.z < 0x802) {
                x.z = 0x802;
            }
            if (y.y < 0x802) {
                y.y = 0x802;
            }
        }
        VEC_Set(&u, mtx->_00, mtx->_01, mtx->_02);
        VecScale(&u, t->len[k] >> 4);
        VEC_Set(&w, mtx->_10, mtx->_11, mtx->_12);
        VecScale(&w, t->len[k] >> 4);
        func_02069668(&x, &u, &x);
        func_02069668(&y, &w, &y);
    }
    if (x.x > 40) {
        big = 1;
    } else if (x.x < -40) {
        big = 1;
    } else if (x.y > 40) {
        big = 1;
    } else if (x.y < -40) {
        big = 1;
    } else if (x.z > 40) {
        big = 1;
    } else if (x.z < -40) {
        big = 1;
    } else {
        big = 0;
    }
    if (big) {
        func_020692f0(&x, &x);
    } else {
        VEC_Set(&x, rec->_00, rec->_01, rec->_02);
    }
    func_02069504(&x, &y, &z);
    if (z.x == 0 && z.y == 0 && z.z == 0) {
        func_02069504(&x, &z, &y);
        y.x = -y.x;
        y.y = -y.y;
        y.z = -y.z;
        if (y.x == 0 && y.y == 0 && y.z == 0) {
            VEC_Set(&y, rec->_10, rec->_11, rec->_12);
        } else {
            func_020692f0(&y, &y);
        }
        func_02069504(&x, &y, &z);
        if (z.x == 0 && z.y == 0 && z.z == 0) {
            VEC_Set(&z, rec->_20, rec->_21, rec->_22);
        }
    } else {
        func_020692f0(&z, &z);
        func_02069504(&z, &x, &y);
        if (y.x == 0 && y.y == 0 && y.z == 0) {
            VEC_Set(&y, rec->_10, rec->_11, rec->_12);
        }
    }
    mtx->_00 = x.x;
    mtx->_01 = x.y;
    mtx->_02 = x.z;
    mtx->_10 = y.x;
    mtx->_11 = y.y;
    mtx->_12 = y.z;
    mtx->_20 = z.x;
    mtx->_21 = z.y;
    mtx->_22 = z.z;
    *rec     = *mtx;
    VEC_Set(&x, rec->_00, rec->_01, rec->_02);
    func_01ff8058(&x, &obj->rot, &v);
    len         = t->len[k];
    t->vel[k].x = ((fx32) (((fx64) (v.x) * (len) + 0x800LL) >> 12));
    t->vel[k].y = ((fx32) (((fx64) (v.y) * (len) + 0x800LL) >> 12));
    t->vel[k].z = ((fx32) (((fx64) (v.z) * (len) + 0x800LL) >> 12));
}

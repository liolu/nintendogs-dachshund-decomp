/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d58b0 from projets/nintendogs-shiba-friends/src/donor/func_020d58b0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
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
    fx32 m[3][3];
} MtxFx33;
typedef struct {
    fx32 m[4][3];
} MtxFx43;
typedef struct {
    u32 unk0;
    u32 id[7];
    u32 flag[7];
    MtxFx43 rec[7];
    VecFx32 va[7];
    VecFx32 vb[7];
} Tbl;
typedef struct {
    u8 pad0[0x90];
    s16 mode;
    u8 pad92[0xbc - 0x92];
    VecFx32 pos;
    MtxFx33 rot;
    u8 padec[0x214 - 0xec];
    Tbl *tbl;
} Mgr;
typedef struct {
    u8 b0;
    u8 id;
} Key;
extern Mgr *data_027c0408;
extern u32 data_0212dac4[];
extern fx32 data_0212dae0[];
extern void func_01ff8058(const VecFx32 *src, const MtxFx33 *m, VecFx32 *dst);
extern void func_02069668(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_02069634(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_020692f0(const VecFx32 *src, VecFx32 *dst);
extern void func_02069504(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z) {
    a->x = x;
    a->y = y;
    a->z = z;
}
static inline BOOL IsOver_t3(VecFx32 *v) {
    if (v->x > 40) {
        return 1;
    }
    if (v->x < -40) {
        return 1;
    }
    if (v->y > 40) {
        return 1;
    }
    if (v->y < -40) {
        return 1;
    }
    if (v->z > 40) {
        return 1;
    }
    if (v->z < -40) {
        return 1;
    }
    return 0;
}
void func_020d58b8(Key **param_1, MtxFx43 *param_2) {
    u8 *mgr;
    Tbl *tbl;
    s32 idx;
    MtxFx43 *pr;
    MtxFx43 T;
    VecFx32 v;
    VecFx32 w;
    VecFx32 fwd;
    VecFx32 up;
    VecFx32 side;
    VecFx32 a;
    VecFx32 b;
    VecFx32 rel;
    VecFx32 d;
    s32 i;

    mgr = (u8 *) data_027c0408;
    tbl = ((Mgr *) mgr)->tbl;
    for (i = 0; i < 7; i++) {
        if ((*param_1)->id == tbl->id[i]) {
            idx = i;
        }
    }
    if (data_0212dac4[idx] == 0) {
        return;
    }
    pr = &tbl->rec[idx];
    if (tbl->flag[idx] == 0) {
        *pr            = *param_2;
        tbl->flag[idx] = 1;
        VEC_Set(&v, pr->m[3][0], pr->m[3][1], pr->m[3][2]);
        func_01ff8058(&v, &((Mgr *) mgr)->rot, &v);
        func_02069668(&v, &((Mgr *) mgr)->pos, &tbl->va[idx]);
        VEC_Set(&w, param_2->m[0][0], param_2->m[0][1], param_2->m[0][2]);
        func_01ff8058(&w, &((Mgr *) mgr)->rot, &w);
        {
            fx32 s         = data_0212dae0[idx];
            tbl->vb[idx].x = ((fx32) (((fx64) (w.x) * (s) + 0x800) >> 12));
            tbl->vb[idx].y = ((fx32) (((fx64) (w.y) * (s) + 0x800) >> 12));
            tbl->vb[idx].z = ((fx32) (((fx64) (w.z) * (s) + 0x800) >> 12));
        }
        return;
    }
    VEC_Set(&v, param_2->m[3][0], param_2->m[3][1], param_2->m[3][2]);
    func_01ff8058(&v, &((Mgr *) mgr)->rot, &v);
    func_02069668(&v, &((Mgr *) mgr)->pos, &v);
    {
        fx32 t01  = ((Mgr *) mgr)->rot.m[0][1];
        fx32 t02  = ((Mgr *) mgr)->rot.m[0][2];
        fx32 t12  = ((Mgr *) mgr)->rot.m[1][2];
        T.m[0][1] = ((Mgr *) mgr)->rot.m[1][0];
        T.m[0][2] = ((Mgr *) mgr)->rot.m[2][0];
        T.m[1][2] = ((Mgr *) mgr)->rot.m[2][1];
        T.m[1][0] = t01;
        T.m[2][0] = t02;
        T.m[2][1] = t12;
        T.m[0][0] = ((Mgr *) mgr)->rot.m[0][0];
        T.m[1][1] = ((Mgr *) mgr)->rot.m[1][1];
        T.m[2][2] = ((Mgr *) mgr)->rot.m[2][2];
    }
    T.m[3][0] = 0;
    T.m[3][1] = 0;
    T.m[3][2] = 0;
    VEC_Set(&up, pr->m[1][0], pr->m[1][1], pr->m[1][2]);
    VEC_Set(&side, pr->m[2][0], pr->m[2][1], pr->m[2][2]);
    func_02069634(&tbl->va[idx], &v, &d);
    func_02069668(&d, &tbl->vb[idx], &rel);
    tbl->va[idx] = v;
    if (idx != 5) {
        rel.y -= data_0212dae0[idx] >> 3;
    }
    if (((Mgr *) mgr)->mode == 1 && idx != 5) {
        fx32 t = v.y + rel.y;
        if (t < 0) {
            fx32 n = -t;
            rel.y += n;
            if ((rel.x > 0 ? rel.x : -rel.x) < 41) {
                rel.x = 41;
            } else if (rel.x > 0) {
                rel.x += n;
            } else {
                rel.x -= n;
            }
            if ((rel.z > 0 ? rel.z : -rel.z) < 41) {
                rel.z = 41;
            } else if (rel.z > 0) {
                rel.z += n;
            } else {
                rel.z -= n;
            }
        }
    }
    func_01ff8058(&rel, (MtxFx33 *) &T, &fwd);
    if (idx >= 1 && idx <= 4) {
        fx32 s   = data_0212dae0[idx];
        fx32 lim = s >> 3;
        fx32 h;
        h = s >> 1;
        if (fwd.y > lim) {
            fwd.y = lim;
        }
        if (idx == 1 || idx == 3) {
            if (fwd.x < -h) {
                fwd.x = -h;
            }
        } else if (fwd.x > h) {
            fwd.x = h;
        }
        VEC_Set(&b, param_2->m[1][0], param_2->m[1][1], param_2->m[1][2]);
        b.x >>= 4;
        b.y >>= 4;
        b.z >>= 4;
        func_02069668(&up, &b, &up);
    }
    if (idx == 5) {
        fx32 h;
        fx32 q;
        fx32 s = data_0212dae0[idx];
        if (fwd.y < (-s >> 1)) {
            fwd.y = -s >> 1;
        }
        h = s >> 1;
        if (fwd.y < 0) {
            fwd.y = 0;
        }
        if (fwd.x < -h) {
            fwd.x = -h;
        }
        if (fwd.x > h) {
            fwd.x = h;
        }
        if (fwd.z < 410) {
            fwd.z = 410;
        }
        q = s >> 4;
        if (up.y < 410) {
            up.y = 410;
        }
        VEC_Set(&a, param_2->m[0][0], param_2->m[0][1], param_2->m[0][2]);
        a.x = ((fx32) (((fx64) (a.x) * (q) + 0x800) >> 12));
        a.y = ((fx32) (((fx64) (a.y) * (q) + 0x800) >> 12));
        a.z = ((fx32) (((fx64) (a.z) * (q) + 0x800) >> 12));
        VEC_Set(&b, param_2->m[1][0], param_2->m[1][1], param_2->m[1][2]);
        b.x = ((fx32) (((fx64) (b.x) * (q) + 0x800) >> 12));
        b.y = ((fx32) (((fx64) (b.y) * (q) + 0x800) >> 12));
        b.z = ((fx32) (((fx64) (b.z) * (q) + 0x800) >> 12));
        func_02069668(&fwd, &a, &fwd);
        func_02069668(&up, &b, &up);
    }
    if (IsOver_t3(&fwd)) {
        func_020692f0(&fwd, &fwd);
    } else {
        VEC_Set(&fwd, pr->m[0][0], pr->m[0][1], pr->m[0][2]);
    }
    func_02069504(&fwd, &up, &side);
    if (side.x == 0 && side.y == 0 && side.z == 0) {
        func_02069504(&fwd, &side, &up);
        up.x = -up.x;
        up.y = -up.y;
        up.z = -up.z;
        if (up.x == 0 && up.y == 0 && up.z == 0) {
            VEC_Set(&up, pr->m[1][0], pr->m[1][1], pr->m[1][2]);
        } else {
            func_020692f0(&up, &up);
        }
        func_02069504(&fwd, &up, &side);
        if (side.x == 0 && side.y == 0 && side.z == 0) {
            VEC_Set(&side, pr->m[2][0], pr->m[2][1], pr->m[2][2]);
        }
    } else {
        func_020692f0(&side, &side);
        func_02069504(&side, &fwd, &up);
        if (up.x == 0 && up.y == 0 && up.z == 0) {
            VEC_Set(&up, pr->m[1][0], pr->m[1][1], pr->m[1][2]);
        }
    }
    param_2->m[0][0] = fwd.x;
    param_2->m[0][1] = fwd.y;
    param_2->m[0][2] = fwd.z;
    param_2->m[1][0] = up.x;
    param_2->m[1][1] = up.y;
    param_2->m[1][2] = up.z;
    param_2->m[2][0] = side.x;
    param_2->m[2][1] = side.y;
    param_2->m[2][2] = side.z;
    *pr              = *param_2;
    VEC_Set(&fwd, pr->m[0][0], pr->m[0][1], pr->m[0][2]);
    func_01ff8058(&fwd, &((Mgr *) mgr)->rot, &rel);
    {
        fx32 s         = data_0212dae0[idx];
        tbl->vb[idx].x = ((fx32) (((fx64) (rel.x) * (s) + 0x800) >> 12));
        tbl->vb[idx].y = ((fx32) (((fx64) (rel.y) * (s) + 0x800) >> 12));
        tbl->vb[idx].z = ((fx32) (((fx64) (rel.z) * (s) + 0x800) >> 12));
    }
}

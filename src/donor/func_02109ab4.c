/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02109aac from projets/nintendogs-shiba-friends/src/donor/func_02109aac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
typedef struct {
    u8 pad[0x30];
    VecFx32 pos;
} Cam;
typedef struct {
    u8 pad[0x1c];
    Cam *cam;
} Mgr;
typedef struct {
    u8 pad[0x4c];
    MtxFx43 m;
} Glb;
extern Mgr *data_02153720;
extern Glb data_02150330;
static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z) {
    a->x = x;
    a->y = y;
    a->z = z;
}
extern void func_02069634(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern void func_020069bc(const VecFx32 *src, VecFx32 *dst);
extern void func_02109ce8(s32 p, fx32 *a, fx32 *b);
extern void func_01ff832c(fx32 a, const VecFx32 *v1, const VecFx32 *v2, VecFx32 *dst);
void func_02109ab4(s32 p1, const VecFx32 *target, fx32 a, fx32 b, fx32 c, VecFx32 *out) {
    fx32 s;
    fx32 k;
    VecFx32 fwd;
    VecFx32 up;
    VecFx32 dir;
    VecFx32 pos;
    fx32 sv;
    fx32 kv;
    s32 id;

    id  = p1;
    pos = data_02153720->cam->pos;
    func_02069634(target, &pos, &dir);
    dir.y = 0;
    func_020069bc(&dir, &dir);
    VEC_Set(&up, 0, 0x1000, 0);
    VEC_Set(&fwd, data_02150330.m._00, data_02150330.m._10, data_02150330.m._20);
    fwd.x = -fwd.x;
    fwd.y = -fwd.y;
    fwd.z = -fwd.z;
    func_02109ce8(id, &s, &k);
    kv     = k;
    sv     = s;
    out->x = 0;
    out->y = 0;
    out->z = 0;
    func_01ff832c(-((fx32) (((fx64) (a) * (sv) + 0x800LL) >> 12)), &fwd, out, out);
    func_01ff832c(((fx32) (((fx64) (b) * (kv) + 0x800LL) >> 12)), &up, out, out);
    if (kv < 0) {
        kv = -(kv >> 1);
    }
    func_01ff832c(((fx32) (((fx64) (c) * (kv) + 0x800LL) >> 12)), &dir, out, out);
}

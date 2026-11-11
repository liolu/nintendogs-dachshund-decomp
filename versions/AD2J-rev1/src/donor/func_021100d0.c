/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021100c8 from projets/nintendogs-shiba-friends/src/donor/func_021100c8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
} MtxFx33;
typedef struct {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;
typedef struct {
    u8 pad[0xbc];
    VecFx32 pos;
    MtxFx43 mtx;
} Obj;
extern const fx64 data_021245cc;
extern const VecFx32 data_02148df0;
extern const VecFx32 data_02148dfc;
extern void func_01ff8058(const VecFx32 *v, const MtxFx43 *m, VecFx32 *dst);
extern fx32 func_02069098(fx32 a, fx32 b);
extern fx32 func_020695f0(const VecFx32 *a, const VecFx32 *b);
extern fx32 func_02069430(const VecFx32 *a);
extern void func_020692f0(const VecFx32 *a, VecFx32 *b);
extern void func_02069504(const VecFx32 *a, const VecFx32 *b, VecFx32 *c);
extern BOOL func_020069bc(const VecFx32 *a, VecFx32 *b);
static inline void VecSet(VecFx32 *v, fx32 x, fx32 y, fx32 z) {
    v->x = x;
    v->y = y;
    v->z = z;
}
static inline BOOL SafeNormalize(VecFx32 *v) {
    BOOL ok;
    if ((fx64) v->x * v->x + (fx64) v->y * v->y + (fx64) v->z * v->z < data_021245cc) {
        ok = 0;
    } else {
        ok = func_020069bc(v, v);
    }
    return ok;
}
BOOL func_021100d0(Obj *obj, const VecFx32 *ext, const fx32 *size, VecFx32 *move, MtxFx43 *out) {
    VecFx32 pos;
    MtxFx43 mtx;
    MtxFx33 scl;
    VecFx32 up;
    VecFx32 down;
    MtxFx33 rows;
    MtxFx33 res;
    VecFx32 axes[6];
    VecFx32 offs[6];
    fx32 t;
    s32 i;
    s32 idx;
    fx32 minY;
    fx32 push;

    pos     = obj->pos;
    mtx     = obj->mtx;
    push    = 0;
    idx     = -1;
    minY    = 0x3e8000;
    scl._00 = ext->x;
    scl._01 = 0;
    scl._02 = 0;
    scl._11 = ext->y;
    scl._10 = 0;
    scl._12 = 0;
    scl._22 = ext->z;
    scl._20 = 0;
    scl._21 = 0;
    func_01ff8058((VecFx32 *) &scl._00, &mtx, &axes[0]);
    func_01ff8058((VecFx32 *) &scl._10, &mtx, &axes[2]);
    func_01ff8058((VecFx32 *) &scl._20, &mtx, &axes[4]);
    axes[1].x = -axes[0].x;
    axes[1].y = -axes[0].y;
    axes[1].z = -axes[0].z;
    axes[3].x = -axes[2].x;
    axes[3].y = -axes[2].y;
    axes[3].z = -axes[2].z;
    axes[5].x = -axes[4].x;
    axes[5].y = -axes[4].y;
    axes[5].z = -axes[4].z;
    if (size != ((void *) 0)) {
        fx32 s;
        s         = size[0];
        offs[0].x = ((fx32) (((fx64) (axes[0].x) * (s) + 0x800) >> 12));
        offs[0].y = ((fx32) (((fx64) (axes[0].y) * (s) + 0x800) >> 12));
        offs[0].z = ((fx32) (((fx64) (axes[0].z) * (s) + 0x800) >> 12));
        s         = size[1];
        offs[1].x = ((fx32) (((fx64) (axes[1].x) * (s) + 0x800) >> 12));
        offs[1].y = ((fx32) (((fx64) (axes[1].y) * (s) + 0x800) >> 12));
        offs[1].z = ((fx32) (((fx64) (axes[1].z) * (s) + 0x800) >> 12));
        s         = size[2];
        offs[2].x = ((fx32) (((fx64) (axes[2].x) * (s) + 0x800) >> 12));
        offs[2].y = ((fx32) (((fx64) (axes[2].y) * (s) + 0x800) >> 12));
        offs[2].z = ((fx32) (((fx64) (axes[2].z) * (s) + 0x800) >> 12));
        s         = size[3];
        offs[3].x = ((fx32) (((fx64) (axes[3].x) * (s) + 0x800) >> 12));
        offs[3].y = ((fx32) (((fx64) (axes[3].y) * (s) + 0x800) >> 12));
        offs[3].z = ((fx32) (((fx64) (axes[3].z) * (s) + 0x800) >> 12));
        s         = size[4];
        offs[4].x = ((fx32) (((fx64) (axes[4].x) * (s) + 0x800) >> 12));
        offs[4].y = ((fx32) (((fx64) (axes[4].y) * (s) + 0x800) >> 12));
        offs[4].z = ((fx32) (((fx64) (axes[4].z) * (s) + 0x800) >> 12));
        s         = size[5];
        offs[5].x = ((fx32) (((fx64) (axes[5].x) * (s) + 0x800) >> 12));
        offs[5].y = ((fx32) (((fx64) (axes[5].y) * (s) + 0x800) >> 12));
        offs[5].z = ((fx32) (((fx64) (axes[5].z) * (s) + 0x800) >> 12));
    } else {
        fx32 s;
        s         = func_02069098(((fx32) (((fx64) (ext->y) * (ext->z) + 0x800) >> 12)), ext->x);
        offs[0].x = ((fx32) (((fx64) (axes[0].x) * (s) + 0x800) >> 12));
        offs[0].y = ((fx32) (((fx64) (axes[0].y) * (s) + 0x800) >> 12));
        offs[0].z = ((fx32) (((fx64) (axes[0].z) * (s) + 0x800) >> 12));
        s         = func_02069098(((fx32) (((fx64) (ext->z) * (ext->x) + 0x800) >> 12)), ext->y);
        offs[2].x = ((fx32) (((fx64) (axes[2].x) * (s) + 0x800) >> 12));
        offs[2].y = ((fx32) (((fx64) (axes[2].y) * (s) + 0x800) >> 12));
        offs[2].z = ((fx32) (((fx64) (axes[2].z) * (s) + 0x800) >> 12));
        s         = func_02069098(((fx32) (((fx64) (ext->x) * (ext->y) + 0x800) >> 12)), ext->z);
        offs[4].x = ((fx32) (((fx64) (axes[4].x) * (s) + 0x800) >> 12));
        offs[4].y = ((fx32) (((fx64) (axes[4].y) * (s) + 0x800) >> 12));
        offs[4].z = ((fx32) (((fx64) (axes[4].z) * (s) + 0x800) >> 12));
        offs[1].x = -offs[0].x;
        offs[1].y = -offs[0].y;
        offs[1].z = -offs[0].z;
        offs[3].x = -offs[2].x;
        offs[3].y = -offs[2].y;
        offs[3].z = -offs[2].z;
        offs[5].x = -offs[4].x;
        offs[5].y = -offs[4].y;
        offs[5].z = -offs[4].z;
    }
    for (i = 0; i < 6; i++) {
        if (axes[i].y < minY) {
            fx32 d;
            minY = axes[i].y;
            d    = pos.y + axes[i].y;
            if (d < 0) {
                idx  = i;
                push = -d;
            }
        }
    }
    move->y += push;
    if (idx >= 0) {
        minY = 0x2710000;
        for (i = 0; i < 6; i++) {
            if (offs[i].y < minY) {
                idx  = i;
                minY = offs[i].y;
            }
        }
    }
    if (idx >= 0) {
        up   = data_02148df0;
        down = data_02148dfc;
        t    = (func_02069098(func_020695f0(&axes[idx], &up), func_02069430(&axes[idx])) >> 3) + 0xcc;
        VecSet((VecFx32 *) &rows._00, obj->mtx._00, obj->mtx._01, obj->mtx._02);
        VecSet((VecFx32 *) &rows._10, obj->mtx._10, obj->mtx._11, obj->mtx._12);
        VecSet((VecFx32 *) &rows._20, obj->mtx._20, obj->mtx._21, obj->mtx._22);
        if (t > 0x1000) {
            t = 0x1000;
        }
        switch (idx) {
            case 0:
                res._00 = rows._00 + ((fx32) (((fx64) (t) * (up.x - rows._00) + 0x800) >> 12));
                res._01 = rows._01 + ((fx32) (((fx64) (t) * (up.y - rows._01) + 0x800) >> 12));
                res._02 = rows._02 + ((fx32) (((fx64) (t) * (up.z - rows._02) + 0x800) >> 12));
                break;
            case 1:
                res._00 = rows._00 + ((fx32) (((fx64) (t) * (down.x - rows._00) + 0x800) >> 12));
                res._01 = rows._01 + ((fx32) (((fx64) (t) * (down.y - rows._01) + 0x800) >> 12));
                res._02 = rows._02 + ((fx32) (((fx64) (t) * (down.z - rows._02) + 0x800) >> 12));
                break;
            case 2:
                res._10 = rows._10 + ((fx32) (((fx64) (t) * (up.x - rows._10) + 0x800) >> 12));
                res._11 = rows._11 + ((fx32) (((fx64) (t) * (up.y - rows._11) + 0x800) >> 12));
                res._12 = rows._12 + ((fx32) (((fx64) (t) * (up.z - rows._12) + 0x800) >> 12));
                break;
            case 3:
                res._10 = rows._10 + ((fx32) (((fx64) (t) * (down.x - rows._10) + 0x800) >> 12));
                res._11 = rows._11 + ((fx32) (((fx64) (t) * (down.y - rows._11) + 0x800) >> 12));
                res._12 = rows._12 + ((fx32) (((fx64) (t) * (down.z - rows._12) + 0x800) >> 12));
                break;
            case 4:
                res._20 = rows._20 + ((fx32) (((fx64) (t) * (up.x - rows._20) + 0x800) >> 12));
                res._21 = rows._21 + ((fx32) (((fx64) (t) * (up.y - rows._21) + 0x800) >> 12));
                res._22 = rows._22 + ((fx32) (((fx64) (t) * (up.z - rows._22) + 0x800) >> 12));
                break;
            case 5:
                res._20 = rows._20 + ((fx32) (((fx64) (t) * (down.x - rows._20) + 0x800) >> 12));
                res._21 = rows._21 + ((fx32) (((fx64) (t) * (down.y - rows._21) + 0x800) >> 12));
                res._22 = rows._22 + ((fx32) (((fx64) (t) * (down.z - rows._22) + 0x800) >> 12));
                break;
        }
        switch (idx) {
            case 0:
            case 1:
                func_020692f0((VecFx32 *) &res._00, (VecFx32 *) &res._00);
                func_02069504((VecFx32 *) &res._00, (VecFx32 *) &rows._10, (VecFx32 *) &res._20);
                if (!SafeNormalize((VecFx32 *) &res._20)) {
                    if (res._00 == 0 && res._01 == 0) {
                        VecSet((VecFx32 *) &res._20, 0x1000, 0, 0);
                    } else {
                        VecSet((VecFx32 *) &res._20, res._01, -res._00, 0);
                        func_020692f0((VecFx32 *) &res._20, (VecFx32 *) &res._20);
                    }
                }
                func_02069504((VecFx32 *) &res._20, (VecFx32 *) &res._00, (VecFx32 *) &res._10);
                break;
            case 2:
            case 3:
                func_020692f0((VecFx32 *) &res._10, (VecFx32 *) &res._10);
                func_02069504((VecFx32 *) &res._10, (VecFx32 *) &rows._20, (VecFx32 *) &res._00);
                if (!SafeNormalize((VecFx32 *) &res._00)) {
                    if (res._10 == 0 && res._11 == 0) {
                        VecSet((VecFx32 *) &res._00, 0x1000, 0, 0);
                    } else {
                        VecSet((VecFx32 *) &res._00, res._11, -res._10, 0);
                        func_020692f0((VecFx32 *) &res._00, (VecFx32 *) &res._00);
                    }
                }
                func_02069504((VecFx32 *) &res._00, (VecFx32 *) &res._10, (VecFx32 *) &res._20);
                break;
            case 4:
            case 5:
                func_020692f0((VecFx32 *) &res._20, (VecFx32 *) &res._20);
                func_02069504((VecFx32 *) &res._20, (VecFx32 *) &rows._00, (VecFx32 *) &res._10);
                if (!SafeNormalize((VecFx32 *) &res._10)) {
                    if (res._20 == 0 && res._21 == 0) {
                        VecSet((VecFx32 *) &res._10, 0x1000, 0, 0);
                    } else {
                        VecSet((VecFx32 *) &res._10, res._21, -res._20, 0);
                        func_020692f0((VecFx32 *) &res._10, (VecFx32 *) &res._10);
                    }
                }
                func_02069504((VecFx32 *) &res._10, (VecFx32 *) &res._20, (VecFx32 *) &res._00);
                break;
        }
        out->_00 = res._00;
        out->_01 = res._01;
        out->_02 = res._02;
        out->_10 = res._10;
        out->_11 = res._11;
        out->_12 = res._12;
        out->_20 = res._20;
        out->_21 = res._21;
        out->_22 = res._22;
        out->_30 = 0;
        out->_31 = 0;
        out->_32 = 0;
        return 1;
    }
    return 0;
}

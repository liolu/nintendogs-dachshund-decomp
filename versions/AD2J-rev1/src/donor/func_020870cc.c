/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020838e4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020838e4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef u16 GXRgb;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
extern fx16 data_02124ae0[];
typedef struct ResHeader {
    u8 pad00[0x30];
    fx16 aspectRatio;
    u8 pad32[0x12];
    struct {
        u32 pad : 24;
        u32 texS : 2;
        u32 texT : 2;
        u32 scaleAnimDir : 3;
        u32 pad31 : 1;
    } misc;
} ResHeader;
typedef struct Resource {
    ResHeader *header;
} Resource;
typedef struct Emitter {
    u8 pad00[0x18];
    Resource *resource;
    u8 pad1c[0x3e];
    GXRgb color;
} Emitter;
typedef struct Manager {
    u8 pad00[0x30];
    u32 polygonAttr;
    Emitter *emitter;
    const MtxFx43 *viewMtx;
} Manager;
typedef struct Visibility {
    u16 baseAlpha : 5;
    u16 animAlpha : 5;
    u16 polygonID : 6;
} Visibility;
typedef struct Particle {
    u8 pad00[8];
    VecFx32 position;
    VecFx32 emitterPos;
    u8 pad20[0x10];
    fx32 baseScale;
    fx16 animScale;
    u16 rotation;
    u16 pad38;
    GXRgb color;
    u8 pad3c[4];
    Visibility visibility;
} Particle;
extern void func_02068420(const VecFx32 *src, const MtxFx43 *m, VecFx32 *dst);
extern void func_0206b8a4(const MtxFx43 *m);
extern void func_0208755c(u8 s, u8 t);
static inline void G3_PolygonAttr(int light, int polyMode, int cullMode, int polygonID, int alpha, int misc) {
    (*(vu32 *) 0x040004a4) =
        (u32) (((light) << 0) | ((polyMode) << 4) | ((cullMode) << 6) | (misc) | ((polygonID) << 24) | ((alpha) << 16));
}
void func_020870cc(Manager *mgr, Particle *ptcl) {
    VecFx32 vec;
    MtxFx43 mtx;
    fx32 sclX, sclY;
    fx16 sin, cos;
    fx16 aspect        = mgr->emitter->resource->header->aspectRatio;
    const MtxFx43 *cmr = mgr->viewMtx;
    int alpha          = ptcl->visibility.baseAlpha * (ptcl->visibility.animAlpha + 1) >> 5;

    G3_PolygonAttr(0, 0, 3, ptcl->visibility.polygonID, alpha, mgr->polygonAttr);
    (*(vu32 *) 0x040004a4);
    if (alpha == 0) {
        return;
    }

    sclY = ptcl->baseScale;
    sclX = ((fx32) (((fx64) (sclY) * (aspect) + 0x800LL) >> 12));
    switch (mgr->emitter->resource->header->misc.scaleAnimDir) {
        case 0:
            sclX = ((fx32) (((fx64) (sclX) * (ptcl->animScale) + 0x800LL) >> 12));
            sclY = ((fx32) (((fx64) (sclY) * (ptcl->animScale) + 0x800LL) >> 12));
            break;
        case 1:
            sclX = ((fx32) (((fx64) (sclX) * (ptcl->animScale) + 0x800LL) >> 12));
            break;
        case 2:
            sclY = ((fx32) (((fx64) (sclY) * (ptcl->animScale) + 0x800LL) >> 12));
            break;
    }

    vec.x = ptcl->emitterPos.x + ptcl->position.x;
    vec.y = ptcl->emitterPos.y + ptcl->position.y;
    vec.z = ptcl->emitterPos.z + ptcl->position.z;
    func_02068420(&vec, cmr, &vec);

    sin = (data_02124ae0[((ptcl->rotation) >> 4) << 1]);
    cos = (data_02124ae0[(((ptcl->rotation) >> 4) << 1) + 1]);

    mtx._00 = ((fx32) (((fx64) (cos) * (sclX) + 0x800LL) >> 12));
    mtx._10 = ((fx32) (((fx64) (-sin) * (sclY) + 0x800LL) >> 12));
    mtx._20 = 0;
    mtx._30 = vec.x;
    mtx._01 = ((fx32) (((fx64) (sin) * (sclX) + 0x800LL) >> 12));
    mtx._11 = ((fx32) (((fx64) (cos) * (sclY) + 0x800LL) >> 12));
    mtx._21 = 0;
    mtx._31 = vec.y;
    mtx._02 = 0;
    mtx._12 = 0;
    mtx._22 = 0x1000;
    mtx._32 = vec.z;

    (*(vu32 *) 0x04000454) = 0;
    func_0206b8a4(&mtx);

    {
        GXRgb c1               = ptcl->color;
        GXRgb c2               = mgr->emitter->color;
        (*(vu32 *) 0x04000480) = (GXRgb) (((c1 & 0x1f) * (c2 & 0x1f) >> 5) | (((c1 & 0x3e0) * (c2 & 0x3e0) >> 15) << 5) |
                                          (((c1 & 0x7c00) * (c2 & 0x7c00) >> 25) << 10));
    }

    func_0208755c(mgr->emitter->resource->header->misc.texS, mgr->emitter->resource->header->misc.texT);
}

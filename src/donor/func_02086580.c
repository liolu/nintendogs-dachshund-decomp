/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02086580 from projets/nintendogs-chihuahua-friends/src/donor/func_02086580.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
typedef s16 fx16;
typedef s32 fx32;
typedef s64 fx64;
typedef struct {
    fx32 x, y, z;
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
typedef u16 GXRgb;
typedef struct {
    u8 pad00[0x30];
    fx16 aspectRatio;
    u8 pad32[0x44 - 0x32];
    u32 pad0 : 8;
    u32 dbbScale : 16;
    u32 pad1 : 4;
    u32 scaleAnimDir : 3;
    u32 pad2 : 1;
} SPLResourceHeader;
typedef struct {
    u8 pad[0x10];
    u32 repeat : 2;
    u32 flip : 2;
    u32 rest : 28;
} SPLTexture;
typedef struct {
    SPLResourceHeader *header;
    u8 pad04[0x10];
    SPLTexture *tex;
} SPLResource;
typedef struct {
    u8 pad00[0x18];
    SPLResource *resource;
    u8 pad1c[0x5a - 0x1c];
    GXRgb color;
} SPLEmitter;
typedef struct {
    u8 pad00[0x30];
    u32 polygonAttr;
    SPLEmitter *emitter;
    const MtxFx43 *camera;
} SPLManager;
typedef struct {
    u8 pad00[0x08];
    VecFx32 position;
    VecFx32 emitterPos;
    VecFx32 velocity;
    u8 pad2c[0x30 - 0x2c];
    fx32 baseScale;
    fx16 animScale;
    u8 pad36[0x3a - 0x36];
    GXRgb color;
    u8 pad3c[0x40 - 0x3c];
    u16 alpha : 5;
    u16 baseAlpha : 5;
    u16 polygonID : 6;
} SPLParticle;
extern void func_02069504(const VecFx32 *a, const VecFx32 *b, VecFx32 *axb);
extern void func_020692f0(const VecFx32 *src, VecFx32 *dst);
extern void func_0206e0b8(const MtxFx43 *src, MtxFx33 *dst);
extern void func_02067c44(const VecFx32 *vec, const MtxFx33 *m, VecFx32 *dst);
extern void func_02068420(const VecFx32 *vec, const MtxFx43 *m, VecFx32 *dst);
extern void func_0206b8a4(const MtxFx43 *m);
extern void func_0208755c(u8 s, u8 t);
void func_02086580(SPLManager *mgr, SPLParticle *ptcl) {
    VecFx32 dir;
    VecFx32 pos;
    VecFx32 vel;
    VecFx32 look;
    MtxFx33 rot;
    MtxFx43 mtx;
    fx16 aspect;
    fx32 sclX, sclY;
    s32 alpha;
    fx32 dot, s;
    const MtxFx43 *cmr;

    aspect                 = mgr->emitter->resource->header->aspectRatio;
    alpha                  = (ptcl->alpha * (ptcl->baseAlpha + 1)) >> 5;
    cmr                    = mgr->camera;
    (*(vu32 *) 0x040004a4) = ptcl->polygonID << 24 | (mgr->polygonAttr | 0xc0) | alpha << 16;
    (void) (*(vu32 *) 0x040004a4);
    if (alpha == 0) {
        return;
    }

    sclY = ptcl->baseScale;
    sclX = ((fx32) (((fx64) (sclY) * (aspect) + 0x800LL) >> 12));
    switch (mgr->emitter->resource->header->scaleAnimDir) {
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

    pos.x  = ptcl->emitterPos.x + ptcl->position.x;
    pos.y  = ptcl->emitterPos.y + ptcl->position.y;
    pos.z  = ptcl->emitterPos.z + ptcl->position.z;
    vel    = ptcl->velocity;
    look.x = cmr->_02;
    look.y = cmr->_12;
    look.z = cmr->_22;
    func_02069504(&vel, &look, &vel);
    if (vel.x == 0 && vel.y == 0 && vel.z == 0) {
        return;
    }
    func_020692f0(&vel, &vel);
    func_0206e0b8(cmr, &rot);
    func_02067c44(&vel, &rot, &vel);
    func_02068420(&pos, cmr, &pos);

    dir = ptcl->velocity;
    func_020692f0(&dir, &dir);
    dot = ((fx32) (((fx64) (dir.x) * (-cmr->_02) + 0x800LL) >> 12)) +
          ((fx32) (((fx64) (dir.y) * (-cmr->_12) + 0x800LL) >> 12)) +
          ((fx32) (((fx64) (dir.z) * (-cmr->_22) + 0x800LL) >> 12));
    if (dot < 0) {
        dot = -dot;
    }
    s    = ((fx32) (((fx64) (4096 - dot) * ((fx32) mgr->emitter->resource->header->dbbScale) + 0x800LL) >> 12));
    sclY = ((fx32) (((fx64) (sclY) * (s + 4096) + 0x800LL) >> 12));

    mtx._00                = ((fx32) (((fx64) (vel.x) * (sclX) + 0x800LL) >> 12));
    mtx._10                = ((fx32) (((fx64) (-vel.y) * (sclY) + 0x800LL) >> 12));
    mtx._20                = 0;
    mtx._30                = pos.x;
    mtx._01                = ((fx32) (((fx64) (vel.y) * (sclX) + 0x800LL) >> 12));
    mtx._11                = ((fx32) (((fx64) (vel.x) * (sclY) + 0x800LL) >> 12));
    mtx._21                = 0;
    mtx._31                = pos.y;
    mtx._02                = 0;
    mtx._12                = 0;
    mtx._22                = 4096;
    mtx._32                = pos.z;
    (*(vu32 *) 0x04000454) = 0;
    func_0206b8a4(&mtx);

    (*(vu32 *) 0x04000480) = (GXRgb) ((((ptcl->color & 0x1f) * (mgr->emitter->color & 0x1f)) >> 5) |
                                      ((((ptcl->color & 0x3e0) * (mgr->emitter->color & 0x3e0)) >> 15) << 5) |
                                      ((((ptcl->color & 0x7c00) * (mgr->emitter->color & 0x7c00)) >> 25) << 10));

    func_0208755c(mgr->emitter->resource->tex->repeat, mgr->emitter->resource->tex->flip);
}

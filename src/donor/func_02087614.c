/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02087614 from projets/nintendogs-chihuahua-friends/src/donor/func_02087614.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef u16 GXRgb;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    u16 current : 5;
    u16 base : 5;
    u16 pad : 6;
} SPLAlpha;
typedef struct SPLParticle {
    struct SPLParticle *next;
    struct SPLParticle *prev;
    VecFx32 position;
    VecFx32 emitterPos;
    VecFx32 velocity;
    u16 lifeTime;
    u16 age;
    fx32 baseScale;
    fx16 animScale;
    u16 rotation;
    s16 angularVelocity;
    GXRgb color;
    u16 loopTimeFactor;
    u16 lifeRateOffset;
    union {
        u16 all;
        SPLAlpha bits;
    } alpha;
    u8 texture;
    u8 loopFrame;
} SPLParticle;
typedef struct {
    SPLParticle *first;
    int count;
} SPLParticleList;
typedef struct {
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 rotationType : 2;
    u16 b5 : 1;
    u16 useChildColor : 1;
    u16 rest : 9;
} SPLChildFlags;
typedef struct {
    SPLChildFlags flags;
    fx16 randomInitVelMag;
    fx16 endScale;
    u16 lifeTime;
    u8 velocityRatio;
    u8 scaleRatio;
    GXRgb color;
    u8 emissionCount;
    u8 emissionDelay;
    u8 emissionInterval;
    u8 texture;
} SPLChildResource;
typedef struct {
    u8 pad[0x14];
    SPLChildResource *childResource;
} SPLResource;
typedef struct {
    u8 pad[0x10];
    SPLParticleList childParticles;

    SPLResource *resource;
} SPLEmitter;
extern u32 data_0215367c;
extern SPLParticle *func_0208927c(SPLParticleList *list);
extern void func_020892c0(SPLParticleList *list, SPLParticle *ptcl);
extern fx32 func_02069098(fx32 numer, fx32 denom);
static inline u32 SPLRandom_U32(void) {
    data_0215367c = data_0215367c * 0x5eedf715 + 0x1b0cb173;
    return data_0215367c;
}
void func_02087614(SPLParticle *parent, SPLEmitter *emtr, SPLParticleList *list) {
    SPLParticle *chld;
    SPLChildResource *chldRes;
    int i;
    fx32 velBase;

    chldRes = emtr->resource->childResource;
    for (i = 0; i < chldRes->emissionCount; i++) {
        chld = func_0208927c(list);
        if (chld == ((void *) 0)) {
            return;
        }
        func_020892c0(&emtr->childParticles, chld);

        chld->emitterPos = parent->emitterPos;
        velBase          = func_02069098(((fx32) ((chldRes->velocityRatio) * 4096)), ((fx32) ((255) * 4096)));
        {
            fx32 v = ((fx32) (((fx64) (parent->velocity.x) * (velBase) + 0x800LL) >> 12));
            chld->velocity.x =
                v + (((chldRes->randomInitVelMag) * (s32) (SPLRandom_U32() >> 23) - ((chldRes->randomInitVelMag) << 8)) >> 8);
        }
        {
            fx32 v = ((fx32) (((fx64) (parent->velocity.y) * (velBase) + 0x800LL) >> 12));
            chld->velocity.y =
                v + (((chldRes->randomInitVelMag) * (s32) (SPLRandom_U32() >> 23) - ((chldRes->randomInitVelMag) << 8)) >> 8);
        }
        {
            fx32 v = ((fx32) (((fx64) (parent->velocity.z) * (velBase) + 0x800LL) >> 12));
            chld->velocity.z =
                v + (((chldRes->randomInitVelMag) * (s32) (SPLRandom_U32() >> 23) - ((chldRes->randomInitVelMag) << 8)) >> 8);
        }
        chld->position = parent->position;
        {
            fx32 s          = (parent->baseScale * parent->animScale) >> 12;
            chld->baseScale = s * (chldRes->scaleRatio + 1) >> 6;
        }
        chld->animScale = 4096;
        if (chldRes->flags.useChildColor) {
            chld->color = chldRes->color;
        } else {
            chld->color = parent->color;
        }
        chld->alpha.bits.current = (parent->alpha.bits.current * (parent->alpha.bits.base + 1)) >> 5;
        chld->alpha.bits.base    = 31;
        switch (chldRes->flags.rotationType) {
            case 0:
                chld->rotation        = 0;
                chld->angularVelocity = 0;
                break;
            case 1:
                chld->rotation        = parent->rotation;
                chld->angularVelocity = 0;
                break;
            case 2:
                chld->rotation        = parent->rotation;
                chld->angularVelocity = parent->angularVelocity;
                break;
        }
        chld->lifeTime       = chldRes->lifeTime;
        chld->age            = 0;
        chld->texture        = chldRes->texture;
        chld->loopTimeFactor = 0xffff / (parent->lifeTime / 2);
        chld->lifeRateOffset = 0xffff / parent->lifeTime;
        chld->loopFrame      = 0;
    }
}

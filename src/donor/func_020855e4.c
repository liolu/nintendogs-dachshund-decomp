/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020855e4 from projets/nintendogs-chihuahua-friends/src/donor/func_020855e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    u32 b0_7 : 8;
    u32 hasScaleAnim : 1;
    u32 hasColorAnim : 1;
    u32 hasAlphaAnim : 1;
    u32 hasTexAnim : 1;
    u32 b12_14 : 3;
    u32 followEmitter : 1;
    u32 hasChildResource : 1;
    u32 b17_29 : 13;
    u32 b30 : 1;
    u32 b31 : 1;
} ResFlags;
typedef struct {
    ResFlags flags;
    u8 pad04[0x34];
    u16 h38;
    u8 pad3a[8];
    u8 airResistance;
} ResHeader;
typedef struct {
    u8 pad[8];
    u16 loop : 1;
    u16 rest : 15;
} ScaleAnim;
typedef struct {
    u8 pad[8];
    u16 randomStart : 1;
    u16 loop : 1;
    u16 rest : 14;
} ColorAnim;
typedef struct {
    u8 pad[2];
    u16 rest : 8;
    u16 loop : 1;
    u16 rest2 : 7;
} AlphaAnim;
typedef struct {
    u8 pad[8];
    u32 rest : 16;
    u32 randomPattern : 1;
    u32 loop : 1;
    u32 rest2 : 14;
} TexAnim;
typedef struct {
    u16 b0 : 1;
    u16 hasScaleAnim : 1;
    u16 hasAlphaAnim : 1;
    u16 b3_4 : 2;
    u16 followEmitter : 1;
    u16 rest : 10;
    u8 pad02[0xb];
    u8 lifeScale;
    u8 interval;
} ChildRes;
typedef struct Particle Particle;
typedef struct Resource Resource;
typedef struct {
    void (*fn)(void *obj, Particle *p, VecFx32 *acc);
    void *obj;
} Behavior;
struct Resource {
    ResHeader *header;
    ScaleAnim *scaleAnim;
    ColorAnim *colorAnim;
    AlphaAnim *alphaAnim;
    TexAnim *texAnim;
    ChildRes *childResource;
    Behavior *behaviors;
    u16 behaviorCount;
};
struct Particle {
    Particle *next;
    u32 f4;
    VecFx32 emitterPos;
    VecFx32 position;
    VecFx32 velocity;
    u16 lifeTime;
    u16 age;
    u8 pad30[6];
    u16 rotation;
    s16 angularVelocity;
    u8 pad3a[2];
    u16 loopTimeOffset;
    u16 lifeRateStep;
    u16 b0_9 : 10;
    u16 polygonID : 6;
    u8 f42;
    u8 loopOffset;
};
typedef struct {
    Particle *first;
} List;
typedef struct {
    u8 pad00[8];
    List particles;
    u8 pad0c[4];
    List childParticles;
    u8 pad14[4];
    Resource *resource;
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2_3 : 2;
    u32 b4 : 1;
    u32 rest : 27;
    VecFx32 position;
    VecFx32 velocity;
    u16 age;
    u8 pad3a[0x22];
    u8 interval;
    u8 pad5d[0xf];
    void (*callback)(void *emtr);
} Emitter;
typedef struct {
    u8 pad00[0x14];
    List inactive;
    u8 pad18[0x14];
    u32 minPolyID : 6;
    u32 maxPolyID : 6;
    u32 curPolyID : 6;
    u32 fixPolyID : 6;
    u32 rest : 8;
} Manager;
typedef void (*AnimFn)(Particle *p, Resource *r, u8 rate);
typedef struct {
    AnimFn fn;
    s32 loop;
} AnimFunc;
extern void func_020878dc(Emitter *e, List *l);
extern void func_02087614(Particle *p, Emitter *e, List *l);
extern Particle *func_02089210(List *l, Particle *p);
extern void func_020892c0(List *l, Particle *p);
extern void func_02088d90(Particle *p, Resource *r, u8 rate);
extern void func_02088be4(Particle *p, Resource *r, u8 rate);
extern void func_02088b08(Particle *p, Resource *r, u8 rate);
extern void func_02088aa4(Particle *p, Resource *r, u8 rate);
extern void func_02088a58(Particle *p, Resource *r, u8 rate);
extern void func_02088a00(Particle *p, Resource *r, u8 rate);
void func_020855e4(Manager *mgr, Emitter *emtr) {
    Particle *ptcl;
    Particle *next;
    Resource *res;
    ResHeader *header;
    ChildRes *child;
    ResFlags flags;
    AnimFunc anims[4];
    AnimFunc childAnims[4];
    s32 i, n, count;
    fx32 scale;
    u8 rates[2];
    VecFx32 acc;

    res    = emtr->resource;
    child  = res->childResource;
    n      = 0;
    header = res->header;
    flags  = header->flags;
    count  = res->behaviorCount;
    scale  = header->airResistance + 384;

    if (header->h38 == 0 || emtr->age < header->h38) {
        if (emtr->age % emtr->interval == 0) {
            if (!emtr->b0 && !emtr->b1 && emtr->b4) {
                func_020878dc(emtr, &mgr->inactive);
            }
        }
    }

    if (flags.hasScaleAnim) {
        anims[n].fn     = func_02088d90;
        anims[n++].loop = res->scaleAnim->loop;
    }
    if (flags.hasColorAnim && !res->colorAnim->randomStart) {
        anims[n].fn     = func_02088be4;
        anims[n++].loop = res->colorAnim->loop;
    }
    if (flags.hasAlphaAnim) {
        anims[n].fn     = func_02088b08;
        anims[n++].loop = res->alphaAnim->loop;
    }
    if (flags.hasTexAnim && !res->texAnim->randomPattern) {
        anims[n].fn     = func_02088aa4;
        anims[n++].loop = res->texAnim->loop;
    }

    for (ptcl = emtr->particles.first; ptcl != ((void *) 0); ptcl = next) {
        next     = ptcl->next;
        rates[0] = (ptcl->lifeRateStep * ptcl->age) >> 8;
        rates[1] = ptcl->loopOffset + ((ptcl->loopTimeOffset * ptcl->age) >> 8);
        for (i = 0; i < n; i++) {
            anims[i].fn(ptcl, res, rates[anims[i].loop]);
        }
        acc.x = acc.y = acc.z = 0;
        if (flags.followEmitter) {
            ptcl->emitterPos = emtr->position;
        }
        for (i = 0; i < count; i++) {
            res->behaviors[i].fn(res->behaviors[i].obj, ptcl, &acc);
        }
        ptcl->rotation += ptcl->angularVelocity;
        ptcl->velocity.x = ptcl->velocity.x * scale >> 9;
        ptcl->velocity.y = ptcl->velocity.y * scale >> 9;
        ptcl->velocity.z = ptcl->velocity.z * scale >> 9;
        ptcl->velocity.x += acc.x;
        ptcl->velocity.y += acc.y;
        ptcl->velocity.z += acc.z;
        ptcl->position.x += ptcl->velocity.x + emtr->velocity.x;
        ptcl->position.y += ptcl->velocity.y + emtr->velocity.y;
        ptcl->position.z += ptcl->velocity.z + emtr->velocity.z;
        if (flags.hasChildResource) {
            fx32 delay = ((fx32) (((s64) ((fx32) ptcl->lifeTime << 12) * ((fx32) child->lifeScale << 12) + 0x800) >> 12));
            fx32 diff  = ((fx32) ptcl->age << 12) - (delay >> 8);
            if (diff >= 0 && (diff >> 12) % child->interval == 0) {
                func_02087614(ptcl, emtr, &mgr->inactive);
            }
        }
        if (emtr->resource->header->flags.b30) {
            ptcl->polygonID = mgr->fixPolyID;
        } else {
            ptcl->polygonID = mgr->curPolyID;
            mgr->curPolyID += 1;
            if (mgr->curPolyID > mgr->maxPolyID) {
                mgr->curPolyID = mgr->minPolyID;
            }
        }
        ptcl->age += 1;
        if (ptcl->age > ptcl->lifeTime) {
            Particle *erased = func_02089210(&emtr->particles, ptcl);
            func_020892c0(&mgr->inactive, erased);
        }
    }

    if (flags.hasChildResource) {
        n = 0;
        if (child->hasScaleAnim) {
            childAnims[n].fn     = func_02088a58;
            childAnims[n++].loop = 0;
        }
        if (child->hasAlphaAnim) {
            childAnims[n].fn     = func_02088a00;
            childAnims[n++].loop = 0;
        }
        if (!child->b0) {
            count = 0;
        }
        for (ptcl = emtr->childParticles.first; ptcl != ((void *) 0); ptcl = next) {
            next     = ptcl->next;
            rates[0] = (ptcl->age << 8) / ptcl->lifeTime;
            i        = 0;
            if (n > 0) {
                u8 rate = rates[0];
                do {
                    childAnims[i].fn(ptcl, res, rate);
                } while (++i < n);
            }
            acc.x = acc.y = acc.z = 0;
            if (child->followEmitter) {
                ptcl->emitterPos = emtr->position;
            }
            for (i = 0; i < count; i++) {
                res->behaviors[i].fn(res->behaviors[i].obj, ptcl, &acc);
            }
            ptcl->rotation += ptcl->angularVelocity;
            ptcl->velocity.x = ptcl->velocity.x * scale >> 9;
            ptcl->velocity.y = ptcl->velocity.y * scale >> 9;
            ptcl->velocity.z = ptcl->velocity.z * scale >> 9;
            ptcl->velocity.x += acc.x;
            ptcl->velocity.y += acc.y;
            ptcl->velocity.z += acc.z;
            ptcl->position.x += ptcl->velocity.x + emtr->velocity.x;
            ptcl->position.y += ptcl->velocity.y + emtr->velocity.y;
            ptcl->position.z += ptcl->velocity.z + emtr->velocity.z;
            if (emtr->resource->header->flags.b31) {
                ptcl->polygonID = mgr->fixPolyID;
            } else {
                ptcl->polygonID = mgr->curPolyID;
                mgr->curPolyID += 1;
                if (mgr->curPolyID > mgr->maxPolyID) {
                    mgr->curPolyID = mgr->minPolyID;
                }
            }
            ptcl->age += 1;
            if (ptcl->age > ptcl->lifeTime) {
                Particle *erased = func_02089210(&emtr->childParticles, ptcl);
                func_020892c0(&mgr->inactive, erased);
            }
        }
    }

    emtr->age += 1;
    if (emtr->callback != ((void *) 0)) {
        emtr->callback(emtr);
    }
}

/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02084d74 from projets/nintendogs-chihuahua-friends/src/donor/func_02084d74.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef struct SPLResourceFlags {
    u32 emitterType : 4;
    u32 drawType : 2;
    u32 circleAxis : 2;
    u32 hasScaleAnim : 1;
    u32 hasColorAnim : 1;
    u32 hasAlphaAnim : 1;
    u32 hasTexAnim : 1;
    u32 hasRotation : 1;
    u32 randomInitAngle : 1;
    u32 selfMaintaining : 1;
    u32 followEmitter : 1;
    u32 hasChildResource : 1;
    u32 polygonRotAxis : 2;
    u32 polygonReferencePlane : 1;
    u32 randomizeLoopedAnim : 1;
    u32 drawChildrenFirst : 1;
    u32 hideParent : 1;
    u32 useViewSpace : 1;
    u32 hasGravityBehavior : 1;
    u32 hasRandomBehavior : 1;
    u32 hasMagnetBehavior : 1;
    u32 hasSpinBehavior : 1;
    u32 hasCollisionPlaneBehavior : 1;
    u32 hasConvergenceBehavior : 1;
    u32 hasFixedPolygonID : 1;
    u32 childHasFixedPolygonID : 1;
} SPLResourceFlags;
typedef struct SPLResourceHeader {
    SPLResourceFlags flags;
    u8 rest[0x4c - 4];
} SPLResourceHeader;
typedef struct SPLScaleAnim {
    u8 d[12];
} SPLScaleAnim;
typedef struct SPLColorAnim {
    u8 d[12];
} SPLColorAnim;
typedef struct SPLAlphaAnim {
    u8 d[8];
} SPLAlphaAnim;
typedef struct SPLTexAnim {
    u8 d[12];
} SPLTexAnim;
typedef struct SPLChildResource {
    u8 d[20];
} SPLChildResource;
typedef struct SPLBehavior {
    void (*applyFunc)(void);
    const void *object;
} SPLBehavior;
typedef struct SPLResource {
    SPLResourceHeader *header;
    SPLScaleAnim *scaleAnim;
    SPLColorAnim *colorAnim;
    SPLAlphaAnim *alphaAnim;
    SPLTexAnim *texAnim;
    SPLChildResource *childResource;
    SPLBehavior *behaviors;
    u16 behaviorCount;
    u16 pad;
} SPLResource;
typedef struct SPLTextureParam {
    u32 format : 4;
    u32 s : 4;
    u32 t : 4;
    u32 repeat : 2;
    u32 flip : 2;
    u32 palColor0 : 1;
    u32 useSharedTexture : 1;
    u32 sharedTexID : 8;
    u32 pad : 6;
} SPLTextureParam;
typedef struct SPLTextureResource {
    u32 id;
    SPLTextureParam param;
    u32 textureSize;
    u32 paletteOffset;
    u32 paletteSize;
    u32 unk14;
    u32 unk18;
    u32 resourceSize;
} SPLTextureResource;
typedef struct SPLTexture {
    const SPLTextureResource *resource;
    const void *data;
    const void *paletteData;
    SPLTextureParam param;
    u16 width;
    u16 height;
} SPLTexture;
typedef struct SPLManager {
    void *(*alloc)(u32 size);
    u8 pad04[0x18];
    SPLResource *resources;
    SPLTexture *textures;
    u16 resCount;
    u16 texCount;
} SPLManager;
typedef struct SPLFileHeader {
    u32 magic;
    u32 version;
    u16 resCount;
    u16 texCount;
    u32 reserved0;
    u32 resSize;
    u32 texSize;
    u32 texOffset;
    u32 reserved1;
} SPLFileHeader;
extern void func_0206e124(void *p, u32 v, u32 n);
extern void func_020891dc(void);
extern void func_02089114(void);
extern void func_02089090(void);
extern void func_02088fb8(void);
extern void func_02088eb4(void);
extern void func_02088e20(void);
void func_02084d74(SPLManager *mgr, void *data) {
    SPLFileHeader *header = (SPLFileHeader *) data;
    u32 offset            = sizeof(SPLFileHeader);
    int i;

    mgr->resCount  = header->resCount;
    mgr->texCount  = header->texCount;
    mgr->resources = mgr->alloc(mgr->resCount * sizeof(SPLResource));
    func_0206e124(mgr->resources, 0, mgr->resCount * sizeof(SPLResource));

    for (i = 0; i < mgr->resCount; i++) {
        SPLResource *res = &mgr->resources[i];
        SPLResourceFlags flags;

        res->header = (SPLResourceHeader *) ((u8 *) data + offset);
        flags       = res->header->flags;
        offset += sizeof(SPLResourceHeader);

        if (flags.hasScaleAnim) {
            res->scaleAnim = (SPLScaleAnim *) ((u8 *) data + offset);
            offset += sizeof(SPLScaleAnim);
        } else {
            res->scaleAnim = ((void *) 0);
        }
        if (flags.hasColorAnim) {
            res->colorAnim = (SPLColorAnim *) ((u8 *) data + offset);
            offset += sizeof(SPLColorAnim);
        } else {
            res->colorAnim = ((void *) 0);
        }
        if (flags.hasAlphaAnim) {
            res->alphaAnim = (SPLAlphaAnim *) ((u8 *) data + offset);
            offset += sizeof(SPLAlphaAnim);
        } else {
            res->alphaAnim = ((void *) 0);
        }
        if (flags.hasTexAnim) {
            res->texAnim = (SPLTexAnim *) ((u8 *) data + offset);
            offset += sizeof(SPLTexAnim);
        } else {
            res->texAnim = ((void *) 0);
        }
        if (flags.hasChildResource) {
            res->childResource = (SPLChildResource *) ((u8 *) data + offset);
            offset += sizeof(SPLChildResource);
        } else {
            res->childResource = ((void *) 0);
        }

        res->behaviorCount = flags.hasGravityBehavior + flags.hasRandomBehavior + flags.hasMagnetBehavior +
                             flags.hasSpinBehavior + flags.hasCollisionPlaneBehavior + flags.hasConvergenceBehavior;

        if (res->behaviorCount != 0) {
            SPLBehavior *behavior;

            res->behaviors = mgr->alloc(res->behaviorCount * sizeof(SPLBehavior));
            behavior       = res->behaviors;

            if (flags.hasGravityBehavior) {
                behavior->object    = (u8 *) data + offset;
                behavior->applyFunc = func_020891dc;
                offset += 8;
                behavior++;
            }
            if (flags.hasRandomBehavior) {
                behavior->object    = (u8 *) data + offset;
                behavior->applyFunc = func_02089114;
                offset += 8;
                behavior++;
            }
            if (flags.hasMagnetBehavior) {
                behavior->object    = (u8 *) data + offset;
                behavior->applyFunc = func_02089090;
                offset += 16;
                behavior++;
            }
            if (flags.hasSpinBehavior) {
                behavior->object    = (u8 *) data + offset;
                behavior->applyFunc = func_02088fb8;
                offset += 4;
                behavior++;
            }
            if (flags.hasCollisionPlaneBehavior) {
                behavior->object    = (u8 *) data + offset;
                behavior->applyFunc = func_02088eb4;
                offset += 8;
                behavior++;
            }
            if (flags.hasConvergenceBehavior) {
                behavior->object    = (u8 *) data + offset;
                behavior->applyFunc = func_02088e20;
                offset += 16;
                behavior++;
            }
        } else {
            res->behaviors = ((void *) 0);
        }
    }

    mgr->textures = mgr->alloc(mgr->texCount * sizeof(SPLTexture));
    func_0206e124(mgr->textures, 0, mgr->texCount * sizeof(SPLTexture));

    for (i = 0; i < mgr->texCount; i++) {
        SPLTexture *tex                  = &mgr->textures[i];
        const SPLTextureResource *texRes = (const SPLTextureResource *) ((u8 *) data + offset);

        tex->resource = texRes;
        tex->width    = 1 << (texRes->param.s + 3);
        tex->height   = 1 << (texRes->param.t + 3);
        tex->param    = texRes->param;
        offset += texRes->resourceSize;
    }
}

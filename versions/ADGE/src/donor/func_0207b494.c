/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02071380 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_si3d.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long long s64;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} UnkVecFx32;
extern void func_0206cc0c(const void *src, void *dest, u32 size);
typedef struct {
    fx32 m[3][3];
} UnkMtxFx33;
typedef struct {
    u32 flag;
    UnkVecFx32 scale;
    UnkVecFx32 scaleEx0;
    UnkVecFx32 scaleEx1;
    UnkMtxFx33 rot;
    UnkVecFx32 trans;
} UnkJntAnmResult;
typedef struct {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 sinR;
    fx16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origW;
    u16 origH;
    fx32 magW;
    fx32 magH;
} UnkMatAnmResult;
typedef struct {
    u8 unk_00[0xc4];
    u32 isScaleCacheOne[8];
} UnkG3dRS;
typedef struct {
    UnkVecFx32 s;
    UnkVecFx32 inv;
} UnkScaleCache;
extern UnkG3dRS *data_021510bc;
typedef struct {
    UnkMatAnmResult matCache[64];
    UnkScaleCache scaleCache[64];
    u8 evpCache[64][0x64];
} UnkG3dRSOnGlb;
extern UnkG3dRSOnGlb data_021510c0;
void func_0207b494(UnkJntAnmResult *result, const UnkVecFx32 *p, const u8 *data, u32 srtflag) {
    u32 nodeID   = data[1];
    u32 parentID = data[2];

    if (srtflag & 4) {
        result->flag |= 1;
        if (data_021510bc->isScaleCacheOne[parentID >> 5] & (1 << (parentID & 31))) {
            data_021510bc->isScaleCacheOne[nodeID >> 5] |= 1 << (nodeID & 31);
            result->flag |= 0x18;
        } else {
            func_0206cc0c(&data_021510c0.scaleCache[parentID], &data_021510c0.scaleCache[nodeID], sizeof(UnkScaleCache));
            func_0206cc0c(&data_021510c0.scaleCache[parentID], &result->scaleEx0, sizeof(UnkScaleCache));
        }
    } else {
        result->scale.x = p->x;
        result->scale.y = p->y;
        result->scale.z = p->z;
        if (data_021510bc->isScaleCacheOne[parentID >> 5] & (1 << (parentID & 31))) {
            func_0206cc0c(p, &data_021510c0.scaleCache[nodeID], sizeof(UnkScaleCache));
            data_021510bc->isScaleCacheOne[nodeID >> 5] &= ~(1 << (nodeID & 31));
            result->flag |= 0x18;
        } else {
            data_021510bc->isScaleCacheOne[nodeID >> 5] &= ~(1 << (nodeID & 31));
            data_021510c0.scaleCache[nodeID].s.x =
                ((fx32) (((s64) (p[0].x) * (data_021510c0.scaleCache[parentID].s.x)) >> 12));
            data_021510c0.scaleCache[nodeID].s.y =
                ((fx32) (((s64) (p[0].y) * (data_021510c0.scaleCache[parentID].s.y)) >> 12));
            data_021510c0.scaleCache[nodeID].s.z =
                ((fx32) (((s64) (p[0].z) * (data_021510c0.scaleCache[parentID].s.z)) >> 12));
            data_021510c0.scaleCache[nodeID].inv.x =
                ((fx32) (((s64) (p[1].x) * (data_021510c0.scaleCache[parentID].inv.x)) >> 12));
            data_021510c0.scaleCache[nodeID].inv.y =
                ((fx32) (((s64) (p[1].y) * (data_021510c0.scaleCache[parentID].inv.y)) >> 12));
            data_021510c0.scaleCache[nodeID].inv.z =
                ((fx32) (((s64) (p[1].z) * (data_021510c0.scaleCache[parentID].inv.z)) >> 12));
            func_0206cc0c(&data_021510c0.scaleCache[parentID], &result->scaleEx0, sizeof(UnkScaleCache));
        }
    }
}

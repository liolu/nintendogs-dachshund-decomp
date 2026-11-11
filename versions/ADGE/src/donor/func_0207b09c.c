/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02070b20 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_maya.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} UnkVecFx32;
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
void func_0207b09c(UnkJntAnmResult *result, const UnkVecFx32 *p, const u8 *data, u32 srtflag) {
    u32 flag = data[3];

    if (srtflag & 4) {
        result->flag |= 1;
        if (flag & 2) {
            u32 nodeID = data[1];
            data_021510bc->isScaleCacheOne[nodeID >> 5] |= 1 << (nodeID & 31);
        }
    } else {
        result->scale.x = p[0].x;
        result->scale.y = p[0].y;
        result->scale.z = p[0].z;
        if (flag & 2) {
            u32 nodeID = data[1];
            data_021510bc->isScaleCacheOne[nodeID >> 5] &= ~(1 << (nodeID & 31));
            data_021510c0.scaleCache[nodeID].inv.x = p[1].x;
            data_021510c0.scaleCache[nodeID].inv.y = p[1].y;
            data_021510c0.scaleCache[nodeID].inv.z = p[1].z;
        }
    }

    if (flag & 1) {
        u32 parentID = data[2];
        result->flag |= 0x20;
        if (data_021510bc->isScaleCacheOne[parentID >> 5] & (1 << (parentID & 31))) {
            result->flag |= 8;
        } else {
            result->scaleEx0 = data_021510c0.scaleCache[parentID].inv;
        }
    }
    result->flag |= 0x10;
}

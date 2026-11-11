/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* NNS_G3dGlbFlushWVP from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSystem/src/g3d/glbstate.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef s32 fx32;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
    };
    fx32 m[3][3];
    fx32 a[9];
} MtxFx33;
typedef enum {
    GX_MTXMODE_PROJECTION      = 0,
    GX_MTXMODE_POSITION        = 1,
    GX_MTXMODE_POSITION_VECTOR = 2,
    GX_MTXMODE_TEXTURE         = 3
} GXMtxMode;
extern int func_02067e64(const MtxFx33 *pSrc, MtxFx33 *pDst);
typedef enum {
    NNS_G3D_GLB_FLAG_FLUSH_WVP              = 0x00000001,
    NNS_G3D_GLB_FLAG_FLUSH_VP               = 0x00000002,
    NNS_G3D_GLB_FLAG_INVBASE_UPTODATE       = 0x00000004,
    NNS_G3D_GLB_FLAG_INVCAMERA_UPTODATE     = 0x00000008,
    NNS_G3D_GLB_FLAG_INVPROJ_UPTODATE       = 0x00000010,
    NNS_G3D_GLB_FLAG_INVBASECAMERA_UPTODATE = 0x00000020,
    NNS_G3D_GLB_FLAG_INVCAMERAPROJ_UPTODATE = 0x00000040,

    NNS_G3D_GLB_FLAG_BASECAMERA_UPTODATE = 0x00000080,

    NNS_G3D_GLB_FLAG_SRTCAMERA_UPTODATE = NNS_G3D_GLB_FLAG_BASECAMERA_UPTODATE,
    NNS_G3D_GLB_FLAG_FLUSH_ALT          = NNS_G3D_GLB_FLAG_FLUSH_WVP
} NNSG3dGlbFlag;
typedef struct {
    u32 cmd0;
    u32 mtxmode_proj;
    MtxFx44 projMtx;

    u32 mtxmode_posvec;
    MtxFx43 cameraMtx;

    u32 cmd1;
    u32 lightVec[4];

    u32 cmd2;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmViewPort;

    u32 cmd3;
    u32 lightColor[4];

    u32 cmd4;
    MtxFx33 prmBaseRot;
    VecFx32 prmBaseTrans;
    VecFx32 prmBaseScale;
    u32 prmTexImageParam;

    u32 flag;
    MtxFx43 invCameraMtx;
    MtxFx43 srtCameraMtx;
    MtxFx43 invSrtCameraMtx;

    MtxFx43 invBaseMtx;

    MtxFx44 invProjMtx;
    MtxFx44 invCameraProjMtx;

    VecFx32 camPos;
    VecFx32 camUp;
    VecFx32 camTarget;
} NNSG3dGlb;
extern void func_02075d14(void);
extern NNSG3dGlb data_02150330;
extern inline void NNS_G3dGeBufferData_N(const u32 *args, u32 num);
extern inline void NNS_G3dGeMtxMode(GXMtxMode mode);
extern inline void NNS_G3dGeIdentity(void);
extern inline void NNS_G3dGeLoadMtx43(const MtxFx43 *m);
extern void func_01ffe490(u32 op, const u32 *args, u32 num);
inline void NNS_G3dGeBufferData_N(const u32 *args, u32 num) {
    func_01ffe490(*args, args + 1, num - 1);
}
inline void NNS_G3dGeMtxMode(GXMtxMode mode) {
    func_01ffe490(0x10, (u32 *) &mode, 1);
}
inline void NNS_G3dGeIdentity(void) {
    func_01ffe490(0x15, ((void *) 0), 0);
}
inline void NNS_G3dGeLoadMtx43(const MtxFx43 *m) {
    func_01ffe490(0x17, (u32 *) m, 12);
}
void func_02075d14(void) {
    static const u32 sz =
        (sizeof(data_02150330.cmd1) + sizeof(data_02150330.lightVec[0]) * 4 + sizeof(data_02150330.cmd2) +
         sizeof(data_02150330.prmMatColor0) + sizeof(data_02150330.prmMatColor1) + sizeof(data_02150330.prmPolygonAttr) +
         sizeof(data_02150330.prmViewPort) + sizeof(data_02150330.cmd3) + sizeof(data_02150330.lightColor[0]) * 4) /
        4;

    func_01ffe490(((u32) ((0x10) | ((0x16) << 8) | ((0x00) << 16) | ((0x00) << 24))), (u32 *) &data_02150330.mtxmode_proj,
                  (sizeof(data_02150330.mtxmode_proj) + sizeof(data_02150330.projMtx)) / 4);

    func_01ffe490((0x19 << 0), (u32 *) &data_02150330.cameraMtx, sizeof(data_02150330.cameraMtx) / 4);

    func_01ffe490(
        ((u32) ((0x19) | ((0x1b) << 8) | ((0x00) << 16) | ((0x00) << 24))), (u32 *) &data_02150330.prmBaseRot,
        (sizeof(data_02150330.prmBaseRot) + sizeof(data_02150330.prmBaseTrans) + sizeof(data_02150330.prmBaseScale)) / 4);

    NNS_G3dGeMtxMode(GX_MTXMODE_POSITION_VECTOR);

    {
        MtxFx43 inv;
        int result;
        result = func_02067e64(&data_02150330.prmBaseRot, (MtxFx33 *) &inv);
        NNS_G3dGeLoadMtx43(&inv);
    }

    NNS_G3dGeBufferData_N((u32 *) &data_02150330.cmd1, sz);
    NNS_G3dGeIdentity();
    func_01ffe490(0x2a, &data_02150330.prmTexImageParam, 1);

    data_02150330.flag |= NNS_G3D_GLB_FLAG_FLUSH_WVP;
    data_02150330.flag &= ~NNS_G3D_GLB_FLAG_FLUSH_VP;
}
extern NNSG3dGlb data_02150330;

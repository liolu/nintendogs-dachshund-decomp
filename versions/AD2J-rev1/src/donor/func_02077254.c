/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02077254 from projets/nintendogs-shiba-friends/src/donor/func_02077254.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef volatile u32 vu32;
typedef s32 BOOL;
typedef s32 fx32;
typedef s16 fx16;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
typedef struct {
    fx32 _00, _01, _02, _03, _10, _11, _12, _13, _20, _21, _22, _23, _30, _31, _32, _33;
} MtxFx44;
typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 unk_04;
    u16 ofsEntry;
} NNSG3dResDict;
typedef struct NNSG3dResMdlInfo {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 unk_06;
    u8 unk_07;
    fx32 posScale;
    fx32 invPosScale;
    u8 unk_10[0x2c - 0x10];
} NNSG3dResMdlInfo;
typedef struct NNSG3dResMdl {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResDict nodeInfo;
} NNSG3dResMdl;
typedef struct NNSG3dResMat {
    u16 unk_00;
    u16 unk_02;
    NNSG3dResDict dict;
} NNSG3dResMat;
typedef struct NNSG3dResShp {
    NNSG3dResDict dict;
} NNSG3dResShp;
typedef struct NNSG3dMatAnmResult {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    fx16 rotSin;
    fx16 rotCos;
    fx32 transS;
    fx32 transT;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dMatAnmResult;
typedef struct NNSG3dJntAnmResult {
    u32 flag;
    VecFx32 scale;
    VecFx32 scaleEx0;
    VecFx32 scaleEx1;
    MtxFx33 rot;
    VecFx32 trans;
} NNSG3dJntAnmResult;
typedef struct NNSG3dVisAnmResult {
    BOOL isVisible;
} NNSG3dVisAnmResult;
typedef struct NNSG3dAnmObj NNSG3dAnmObj;
typedef BOOL (*UnkBlendFunc)(void *result, NNSG3dAnmObj *obj, u32 idx);
struct NNSG3dAnmObj {
    fx32 frame;
    fx32 ratio;
    void *resAnm;
    void *funcAnm;
    NNSG3dAnmObj *next;
    void *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
};
typedef struct NNSG3dRS NNSG3dRS;
typedef void (*UnkSbcCallback)(NNSG3dRS *rs);
typedef struct NNSG3dRenderObj {
    u32 flag;
    NNSG3dResMdl *resMdl;
    NNSG3dAnmObj *anmMat;
    UnkBlendFunc funcBlendMat;
    NNSG3dAnmObj *anmJnt;
    UnkBlendFunc funcBlendJnt;
    NNSG3dAnmObj *anmVis;
    UnkBlendFunc funcBlendVis;
    UnkSbcCallback cbFunc;
    u8 cbCmd;
    u8 cbTiming;
    u16 unk_26;
    UnkSbcCallback cbInitFunc;
    void *unk_2c;
    u8 *ptrUserSbc;
    NNSG3dJntAnmResult *recJntAnm;
    NNSG3dMatAnmResult *recMatAnm;
    u32 hintMatAnmExist[2];
    u32 hintJntAnmExist[2];
    u32 hintVisAnmExist[2];
} NNSG3dRenderObj;
typedef void (*UnkJntScaleFunc)(NNSG3dJntAnmResult *r, const void *p, const u8 *cmd, u32 flag);
typedef void (*UnkJntMtxFunc)(const NNSG3dJntAnmResult *r);
typedef void (*UnkTexMtxFunc)(NNSG3dMatAnmResult *r);
struct NNSG3dRS {
    u8 *c;
    NNSG3dRenderObj *pRenderObj;
    u32 flag;
    UnkSbcCallback cbVecFunc[32];
    u8 cbVecTiming[32];
    u8 currentNode;
    u8 currentMat;
    u8 currentNodeDesc;
    u8 unk_af;
    NNSG3dMatAnmResult *pMatAnmResult;
    NNSG3dJntAnmResult *pJntAnmResult;
    NNSG3dVisAnmResult *pVisAnmResult;
    u32 isMatCached[4];
    u32 isScaleCacheOne[2];
    NNSG3dResDict *pResNodeInfo;
    NNSG3dResMat *pResMat;
    NNSG3dResShp *pResShp;
    fx32 posScale;
    fx32 invPosScale;
    UnkJntScaleFunc funcJntScale;
    UnkJntMtxFunc funcJntMtx;
    UnkTexMtxFunc funcTexMtx;
    NNSG3dMatAnmResult tmpMatAnmResult;
    NNSG3dJntAnmResult tmpJntAnmResult;
    NNSG3dVisAnmResult tmpVisAnmResult;
};
typedef struct NNSG3dGlb {
    u32 unk_000[2];
    MtxFx44 projMtx;
    u32 unk_048;
    MtxFx43 cameraMtx;
    u8 unk_07c[0x94 - 0x7c];
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u8 unk_0a0[0xbc - 0xa0];
    MtxFx33 prmBaseRot;
    VecFx32 unk_0e0;
    u8 unk_0ec[0xfc - 0xec];
    u32 flag;
} NNSG3dGlb;
static inline u32 CheckCallBack(NNSG3dRS *rs, u32 cmd) {
    return rs->cbVecFunc[cmd] ? rs->cbVecTiming[cmd] : 0;
}
static inline BOOL CallBackCheck_A(NNSG3dRS *rs, u32 cmd, u32 *pTiming) {
    *pTiming = CheckCallBack(rs, cmd);
    if (*pTiming == 1) {
        rs->flag &= ~0x40;
        rs->cbVecFunc[cmd](rs);
        *pTiming = CheckCallBack(rs, cmd);
        return rs->flag & 0x40;
    }
    return 0;
}
static inline BOOL CallBackCheck_C(NNSG3dRS *rs, u32 cmd, u32 timing) {
    if (timing == 3) {
        rs->flag &= ~0x40;
        rs->cbVecFunc[cmd](rs);
        return rs->flag & 0x40;
    }
    return 0;
}
extern void func_0206e01c(const void *src, volatile void *dest, u32 size);
extern void func_020683a8(const MtxFx43 *src, MtxFx44 *dst);
extern void func_02068c04(const MtxFx44 *a, const MtxFx44 *b, MtxFx44 *ab);
extern fx32 func_02069430(const VecFx32 *v);
extern void func_020692f0(const VecFx32 *src, VecFx32 *dst);
extern BOOL func_0206bb3c(MtxFx44 *m);
extern const MtxFx43 *func_02075bfc(void);
extern const MtxFx43 *func_02075b54(void);
extern const MtxFx43 *func_02075b10(void);
extern void func_01ffe67c(void);
extern void func_01ffe490(u32 op, const void *args, u32 num);
extern NNSG3dGlb data_02150330;
typedef struct UnkBBCmd {
    u32 op;
    u32 param[2];
    MtxFx43 mtx;
    VecFx32 scale;
} UnkBBCmd;
extern UnkBBCmd data_0213b510;
void func_02077254(NNSG3dRS *rs, u32 opt) {
    u32 cmdLen     = 2;
    VecFx32 *trans = (VecFx32 *) &data_0213b510.mtx._30;
    VecFx32 *scale = &data_0213b510.scale;
    MtxFx43 *mtx   = &data_0213b510.mtx;
    u32 timing;
    BOOL cbFlag;

    if (rs->flag & 0x200) {
        if (opt == 0x40 || opt == 0x60) {
            cmdLen++;
        }
        if (opt == 0x20 || opt == 0x60) {
            cmdLen++;
        }
        rs->c += cmdLen;
        return;
    }

    if (opt == 0x40 || opt == 0x60) {
        cmdLen++;
        if (!(rs->flag & 0x100)) {
            u32 arg;
            if (opt == 0x40) {
                arg = rs->c[2];
            } else {
                arg = rs->c[3];
            }
            func_01ffe490(0x14, &arg, 1);
        }
    }

    cbFlag = CallBackCheck_A(rs, 8, &timing);
    if (!(rs->flag & 0x100) && !cbFlag) {
        MtxFx44 m;

        func_01ffe67c();
        (*(vu32 *) 0x04000400) = 0x151110;
        (*(vu32 *) 0x04000400) = 0;
        (*(vu32 *) 0x04000400) = 0;

        while (func_0206bb3c(&m)) {
        }

        if (data_02150330.flag & 1) {
            MtxFx44 tmp;
            func_020683a8(func_02075b54(), &tmp);
            func_02068c04(&m, &tmp, &m);
        } else if (data_02150330.flag & 2) {
            MtxFx44 tmp;
            func_020683a8(&data_02150330.cameraMtx, &tmp);
            func_02068c04(&m, &tmp, &m);
        }

        trans->x = m._30;
        trans->y = m._31;
        trans->z = m._32;
        scale->x = func_02069430((VecFx32 *) &m._00);
        scale->y = func_02069430((VecFx32 *) &m._10);
        scale->z = func_02069430((VecFx32 *) &m._20);

        if (m._11 != 0 || m._12 != 0) {
            func_020692f0((VecFx32 *) &m._10, (VecFx32 *) &mtx->_10);
            mtx->_21 = -mtx->_12;
            mtx->_22 = mtx->_11;
        } else {
            func_020692f0((VecFx32 *) &m._20, (VecFx32 *) &mtx->_20);
            mtx->_12 = -mtx->_21;
            mtx->_11 = mtx->_22;
        }

        if (data_02150330.flag & 1) {
            (*(vu32 *) 0x04000400) = 0x171012;
            func_0206e01c(&data_0213b510.param[0], &(*(vu32 *) 0x04000400), 8);
            func_0206e01c(func_02075b10(), &(*(vu32 *) 0x04000400), 0x30);
            (*(vu32 *) 0x04000400) = 0x1b19;
            func_0206e01c(&data_0213b510.mtx, &(*(vu32 *) 0x04000400), 0x3c);
        } else if (data_02150330.flag & 2) {
            (*(vu32 *) 0x04000400) = 0x171012;
            func_0206e01c(&data_0213b510.param[0], &(*(vu32 *) 0x04000400), 8);
            func_0206e01c(func_02075bfc(), &(*(vu32 *) 0x04000400), 0x30);
            (*(vu32 *) 0x04000400) = 0x1b19;
            func_0206e01c(&data_0213b510.mtx, &(*(vu32 *) 0x04000400), 0x3c);
        } else {
            func_0206e01c(&data_0213b510, &(*(vu32 *) 0x04000400), 0x48);
        }
    }

    cbFlag = CallBackCheck_C(rs, 8, timing);
    if (opt == 0x20 || opt == 0x60) {
        cmdLen++;
        if (!cbFlag && !(rs->flag & 0x100)) {
            u32 arg = rs->c[2];
            func_01ffe490(0x13, &arg, 1);
        }
    }
    rs->c += cmdLen;
}

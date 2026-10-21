typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef s32 fx32;
typedef s16 fx16;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
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

void func_0206cc3c(u32 value, void *dest, u32 count);
extern void func_020775c8(NNSG3dRS *rs);
extern UnkJntScaleFunc data_0213cb74[];
extern UnkJntMtxFunc data_0213cb68[];
extern UnkTexMtxFunc data_0213cb80[];

void func_02077434(NNSG3dRS *rs, NNSG3dRenderObj *pRenderObj) {
    volatile u32 fill;

    fill = 0;
    func_0206cc3c(fill, rs, sizeof(NNSG3dRS));
    rs->isMatCached[2] = 1;
    rs->flag = 1;
    if (pRenderObj->ptrUserSbc != 0) {
        rs->c = pRenderObj->ptrUserSbc;
    } else {
        rs->c = (u8 *)pRenderObj->resMdl + pRenderObj->resMdl->ofsSbc;
    }
    rs->pRenderObj = pRenderObj;
    rs->pResNodeInfo = &pRenderObj->resMdl->nodeInfo;
    rs->pResMat = (NNSG3dResMat *)((u8 *)pRenderObj->resMdl + pRenderObj->resMdl->ofsMat);
    rs->pResShp = (NNSG3dResShp *)((u8 *)pRenderObj->resMdl + pRenderObj->resMdl->ofsShp);
    rs->funcJntScale = data_0213cb74[pRenderObj->resMdl->info.scalingRule];
    rs->funcJntMtx = data_0213cb68[pRenderObj->resMdl->info.scalingRule];
    rs->funcTexMtx = data_0213cb80[pRenderObj->resMdl->info.texMtxMode];
    rs->posScale = pRenderObj->resMdl->info.posScale;
    rs->invPosScale = pRenderObj->resMdl->info.invPosScale;
    if (pRenderObj->cbFunc != 0 && pRenderObj->cbCmd < 32) {
        rs->cbVecFunc[pRenderObj->cbCmd] = pRenderObj->cbFunc;
        rs->cbVecTiming[pRenderObj->cbCmd] = pRenderObj->cbTiming;
    }
    if (pRenderObj->flag & 1) {
        rs->flag |= 0x80;
    }
    if (pRenderObj->flag & 2) {
        rs->flag |= 0x100;
    }
    if (pRenderObj->flag & 4) {
        rs->flag |= 0x200;
    }
    if (pRenderObj->flag & 8) {
        rs->flag |= 0x400;
    }
    if (pRenderObj->cbInitFunc != 0) {
        pRenderObj->cbInitFunc(rs);
    }
    func_020775c8(rs);
    pRenderObj->flag &= ~1;
}

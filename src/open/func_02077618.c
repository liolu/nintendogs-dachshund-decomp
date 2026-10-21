typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef short s16;
typedef int s32;
typedef s32 BOOL;
typedef s32 fx32;
typedef s16 fx16;

#define FX32_ONE 0x1000

typedef struct {
    fx32 x, y, z;
} VecFx32;

typedef struct NNSG3dResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 unk_04;
    u16 ofsEntry;
} NNSG3dResDict;

typedef struct UnkResDictEntryHeader {
    u16 sizeUnit;
    u16 ofsName;
    u32 ofs;
} UnkResDictEntryHeader;

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

typedef struct NNSG3dResMatData {
    u16 itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 unk_18;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
    u8 texMtx[4];
} NNSG3dResMatData;

typedef struct NNSG3dResShp {
    NNSG3dResDict dict;
} NNSG3dResShp;

typedef struct NNSG3dResShpData {
    u16 itemTag;
    u16 size;
    u32 flag;
    u32 ofsDL;
    u32 sizeDL;
} NNSG3dResShpData;

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

typedef void (*UnkTexMtxFunc)(NNSG3dMatAnmResult *r);

extern void func_0207782c(u32 op, const u32 *args, u32 num);
extern void func_02077928(const void *src, u32 szByte);
extern UnkTexMtxFunc data_0213cb80[];

static inline UnkResDictEntryHeader *GetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    u8 *p = (u8 *) dict + dict->ofsEntry;

    return (UnkResDictEntryHeader *) (p + ((UnkResDictEntryHeader *) p)->sizeUnit * idx);
}

static inline NNSG3dResMatData *GetMatDataByIdx(const NNSG3dResMat *mat, u32 idx) {
    return (NNSG3dResMatData *) ((u8 *) mat + GetResDataByIdx(&mat->dict, idx)->ofs);
}

static inline NNSG3dResShpData *GetShpDataByIdx(const NNSG3dResShp *shp, u32 idx) {
    return (NNSG3dResShpData *) ((u8 *) shp + GetResDataByIdx(&shp->dict, idx)->ofs);
}

void func_02077618(NNSG3dResMdl *mdl, u32 matID, u32 shpID, BOOL draw) {
    struct {
        u32 cmd;
        u32 diffAmb;
        u32 specEmi;
        u32 polyAttr;
        u32 cmd1;
        u32 texImageParam;
        u32 texPlttBase;
    } data;
    NNSG3dMatAnmResult anm;
    VecFx32 s;
    VecFx32 invS;

    {
        fx32 scale = mdl->info.posScale;

        if (scale != FX32_ONE) {
            s.x = scale;
            s.y = scale;
            s.z = scale;
            func_0207782c(0x1b, (const u32 *) &s, 3);
        }
    }

    if (draw) {
        NNSG3dResMatData *mat;

        mat = GetMatDataByIdx((NNSG3dResMat *) ((u8 *) mdl + mdl->ofsMat), matID);
        if (!(mat->polyAttr & 0x1f0000)) {
            return;
        }

        data.cmd           = 0x30 | (0x31 << 8) | (0x29 << 16);
        data.diffAmb       = mat->diffAmb;
        data.specEmi       = mat->specEmi;
        data.polyAttr      = mat->polyAttr;

        if (mat->flag & 0x20) {
            data.polyAttr &= ~0x1f0000;
        }

        data.cmd1          = 0x2a | (0x2b << 8);
        data.texImageParam = mat->texImageParam;
        data.texPlttBase   = mat->texPlttBase;

        func_0207782c(data.cmd, &data.diffAmb, 6);

        if (mat->flag & 1) {
            UnkTexMtxFunc func = data_0213cb80[mdl->info.texMtxMode];
            const u8 *p        = mat->texMtx;

            anm.flag       = 8;
            anm.origWidth  = mat->origWidth;
            anm.origHeight = mat->origHeight;
            anm.magW       = mat->magW;
            anm.magH       = mat->magH;

            if (!(mat->flag & 2)) {
                anm.scaleS = ((const u32 *) p)[0];
                anm.scaleT = ((const u32 *) p)[1];
                p += 8;
            } else {
                anm.flag |= 1;
            }

            if (!(mat->flag & 4)) {
                anm.rotSin = ((const fx16 *) p)[0];
                anm.rotCos = ((const fx16 *) p)[1];
                p += 4;
            } else {
                anm.flag |= 2;
            }

            if (!(mat->flag & 8)) {
                anm.transS = ((const u32 *) p)[0];
                anm.transT = ((const u32 *) p)[1];
            } else {
                anm.flag |= 4;
            }

            func(&anm);
        }
    }

    {
        NNSG3dResShpData *shp;

        shp = GetShpDataByIdx((NNSG3dResShp *) ((u8 *) mdl + mdl->ofsShp), shpID);
        func_02077928((const u8 *) shp + shp->ofsDL, shp->sizeDL);
    }

    {
        fx32 invScale = mdl->info.invPosScale;

        if (invScale != FX32_ONE) {
            invS.x = invScale;
            invS.y = invScale;
            invS.z = invScale;
            func_0207782c(0x1b, (const u32 *) &invS, 3);
        }
    }
}

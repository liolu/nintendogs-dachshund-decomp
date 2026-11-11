/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ae800 from projets/eyeshield-21/src/auto/func_020ae800.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef s16 fx16;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
extern const u16(*ctrdgi_fl_maxtime);
typedef u16 NNSG3dItemTag;
typedef enum {
    NNS_G3D_MATFLAG_TEXMTX_USE       = 0x0001,
    NNS_G3D_MATFLAG_TEXMTX_SCALEONE  = 0x0002,
    NNS_G3D_MATFLAG_TEXMTX_ROTZERO   = 0x0004,
    NNS_G3D_MATFLAG_TEXMTX_TRANSZERO = 0x0008,
    NNS_G3D_MATFLAG_ORIGWH_SAME      = 0x0010,
    NNS_G3D_MATFLAG_WIREFRAME        = 0x0020,
    NNS_G3D_MATFLAG_DIFFUSE          = 0x0040,
    NNS_G3D_MATFLAG_AMBIENT          = 0x0080,
    NNS_G3D_MATFLAG_VTXCOLOR         = 0x0100,
    NNS_G3D_MATFLAG_SPECULAR         = 0x0200,
    NNS_G3D_MATFLAG_EMISSION         = 0x0400,
    NNS_G3D_MATFLAG_SHININESS        = 0x0800,
    NNS_G3D_MATFLAG_TEXPLTTBASE      = 0x1000,
    NNS_G3D_MATFLAG_EFFECTMTX        = 0x2000
} NNSG3dMatFlag;
typedef struct NNSG3dResDictTreeNode_ {
    u8 refBit;
    u8 idxLeft;
    u8 idxRight;
    u8 idxEntry;
} NNSG3dResDictTreeNode;
typedef struct NNSG3dResDict_ {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;

    NNSG3dResDictTreeNode node[1];
} NNSG3dResDict;
typedef struct NNSG3dResDictEntryHeader_ {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} NNSG3dResDictEntryHeader;
typedef struct NNSG3dResDictMatData_ {
    u32 offset;
} NNSG3dResDictMatData;
typedef struct NNSG3dResMatData_ {
    NNSG3dItemTag itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth, origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dResMatData;
typedef struct NNSG3dResMat_ {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    NNSG3dResDict dict;
} NNSG3dResMat;
typedef struct NNSG3dResDictShpData_ {
    u32 offset;
} NNSG3dResDictShpData;
typedef struct NNSG3dResShpData_ {
    NNSG3dItemTag itemTag;
    u16 size;
    u32 flag;
    u32 ofsDL;
    u32 sizeDL;
} NNSG3dResShpData;
typedef struct NNSG3dResShp_ {
    NNSG3dResDict dict;
} NNSG3dResShp;
typedef struct NNSG3dResMdlInfo_ {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;

    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackID;
    u8 dummy_;

    fx32 posScale;
    fx32 invPosScale;

    u16 numVertex;
    u16 numPolygon;
    u16 numTriangle;
    u16 numQuad;

    fx16 boxX, boxY, boxZ;
    fx16 boxW, boxH, boxD;

    fx32 boxPosScale;
    fx32 boxInvPosScale;
} NNSG3dResMdlInfo;
typedef struct NNSG3dResNodeInfo_ {
    NNSG3dResDict dict;

} NNSG3dResNodeInfo;
typedef struct NNSG3dResMdl_ {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    NNSG3dResMdlInfo info;
    NNSG3dResNodeInfo nodeInfo;
} NNSG3dResMdl;
extern void func_0207811c(const NNSG3dResMdl *pResMdl, u32 matID, u32 shpID, BOOL sendMat);
extern inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx);
extern inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl);
extern inline NNSG3dResShp *NNS_G3dGetShp(const NNSG3dResMdl *mdl);
extern inline NNSG3dResMatData *NNS_G3dGetMatDataByIdx(const NNSG3dResMat *mat, u32 idx);
extern inline NNSG3dResShpData *NNS_G3dGetShpDataByIdx(const NNSG3dResShp *shp, u32 idx);
extern inline const void *NNS_G3dGetShpDLPtr(const NNSG3dResShpData *shp);
extern inline u32 NNS_G3dGetShpDLSize(const NNSG3dResShpData *shp);
inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    NNSG3dResDictEntryHeader *hdr;

    hdr = (NNSG3dResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);

    return (void *) (&hdr->data[0] + hdr->sizeUnit * idx);
}
inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl) {
    return (NNSG3dResMat *) ((u8 *) mdl + mdl->ofsMat);
}
inline NNSG3dResShp *NNS_G3dGetShp(const NNSG3dResMdl *mdl) {
    return (NNSG3dResShp *) ((u8 *) mdl + mdl->ofsShp);
}
inline NNSG3dResMatData *NNS_G3dGetMatDataByIdx(const NNSG3dResMat *mat, u32 idx) {
    NNSG3dResDictMatData *data;

    data = (NNSG3dResDictMatData *) NNS_G3dGetResDataByIdx(&mat->dict, idx);

    return (NNSG3dResMatData *) ((u8 *) mat + data->offset);
}
inline NNSG3dResShpData *NNS_G3dGetShpDataByIdx(const NNSG3dResShp *shp, u32 idx) {
    NNSG3dResDictShpData *data;

    data = (NNSG3dResDictShpData *) NNS_G3dGetResDataByIdx(&shp->dict, idx);

    return (NNSG3dResShpData *) ((u8 *) shp + data->offset);
}
inline const void *NNS_G3dGetShpDLPtr(const NNSG3dResShpData *shp) {
    return (u8 *) shp + shp->ofsDL;
}
inline u32 NNS_G3dGetShpDLSize(const NNSG3dResShpData *shp) {
    return shp->sizeDL;
}
extern inline void NNS_G3dGeBufferData_N(const u32 *args, u32 num);
extern inline void NNS_G3dGeScale(fx32 x, fx32 y, fx32 z);
extern void func_01ffe58c(const void *src, u32 szByte);
extern void func_01ffe490(u32 op, const u32 *args, u32 num);
inline void NNS_G3dGeBufferData_N(const u32 *args, u32 num) {
    func_01ffe490(*args, args + 1, num - 1);
}
inline void NNS_G3dGeScale(fx32 x, fx32 y, fx32 z) {
    VecFx32 vec;
    vec.x = x;
    vec.y = y;
    vec.z = z;

    func_01ffe490(0x1b, (u32 *) &vec, 3);
}
typedef enum {
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_SCALEONE  = 0x00000001,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_ROTZERO   = 0x00000002,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_TRANSZERO = 0x00000004,

    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_SET  = 0x00000008,
    NNS_G3D_MATANM_RESULTFLAG_TEXMTX_MULT = 0x00000010,
    NNS_G3D_MATANM_RESULTFLAG_WIREFRAME   = 0x00000020
} NNSG3dMatAnmResultFlag;
typedef struct NNSG3dMatAnmResult_ {
    NNSG3dMatAnmResultFlag flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;

    fx32 scaleS, scaleT;
    fx16 sinR, cosR;
    fx32 transS, transT;

    u16 origWidth, origHeight;
    fx32 magW, magH;
} NNSG3dMatAnmResult;
typedef void (*NNSG3dSendTexSRT)(const NNSG3dMatAnmResult *);
extern NNSG3dSendTexSRT data_0213b468[4];
void func_0207811c(const NNSG3dResMdl *pResMdl, u32 matID, u32 shpID, BOOL sendMat) {
    if (pResMdl->info.posScale != ((fx32) 0x0000000000001000L)) {
        NNS_G3dGeScale(pResMdl->info.posScale, pResMdl->info.posScale, pResMdl->info.posScale);
    }

    if (sendMat) {
        const NNSG3dResMatData *mat;
        u32 cmd[7];

        {
            const NNSG3dResMat *p = NNS_G3dGetMat(pResMdl);
            mat                   = NNS_G3dGetMatDataByIdx(p, matID);
        }

        if (!(mat->polyAttr & 0x001f0000)) {
            return;
        }

        cmd[0] = ((u32) ((0x30) | ((0x31) << 8) | ((0x29) << 16) | ((0x00) << 24)));
        cmd[1] = mat->diffAmb;
        cmd[2] = mat->specEmi;
        cmd[3] = mat->polyAttr;

        if (mat->flag & NNS_G3D_MATFLAG_WIREFRAME) {
            cmd[3] &= ~0x001f0000;
        }

        cmd[4] = ((u32) ((0x2a) | ((0x2b) << 8) | ((0x00) << 16) | ((0x00) << 24)));
        cmd[5] = mat->texImageParam;
        cmd[6] = mat->texPlttBase;

        NNS_G3dGeBufferData_N(&cmd[0], 7);

        if (mat->flag & NNS_G3D_MATFLAG_TEXMTX_USE) {
            NNSG3dSendTexSRT func;
            NNSG3dMatAnmResult dummy;

            func = data_0213b468[pResMdl->info.texMtxMode];

            const u8 *p = (const u8 *) mat + sizeof(NNSG3dResMatData);

            dummy.flag       = NNS_G3D_MATANM_RESULTFLAG_TEXMTX_SET;
            dummy.origWidth  = mat->origWidth;
            dummy.origHeight = mat->origHeight;
            dummy.magW       = mat->magW;
            dummy.magH       = mat->magH;

            if (!(mat->flag & NNS_G3D_MATFLAG_TEXMTX_SCALEONE)) {
                const fx32 *p_fx32 = (const fx32 *) p;

                dummy.scaleS = *(p_fx32 + 0);
                dummy.scaleT = *(p_fx32 + 1);
                p += 2 * sizeof(fx32);
            } else {
                dummy.flag |= NNS_G3D_MATANM_RESULTFLAG_TEXMTX_SCALEONE;
            }

            if (!(mat->flag & NNS_G3D_MATFLAG_TEXMTX_ROTZERO)) {
                const fx16 *p_fx16 = (const fx16 *) p;

                dummy.sinR = *(p_fx16 + 0);
                dummy.cosR = *(p_fx16 + 1);
                p += 2 * sizeof(fx16);
            } else {
                dummy.flag |= NNS_G3D_MATANM_RESULTFLAG_TEXMTX_ROTZERO;
            }

            if (!(mat->flag & NNS_G3D_MATFLAG_TEXMTX_TRANSZERO)) {
                const fx32 *p_fx32 = (const fx32 *) p;

                dummy.transS = *(p_fx32 + 0);
                dummy.transT = *(p_fx32 + 1);
            } else {
                dummy.flag |= NNS_G3D_MATANM_RESULTFLAG_TEXMTX_TRANSZERO;
            }

            (*func)(&dummy);
        }
    }

    {
        const NNSG3dResShp *p;
        const NNSG3dResShpData *shp;

        p   = NNS_G3dGetShp(pResMdl);
        shp = NNS_G3dGetShpDataByIdx(p, shpID);

        func_01ffe58c(NNS_G3dGetShpDLPtr(shp), NNS_G3dGetShpDLSize(shp));
    }

    if (pResMdl->info.invPosScale != ((fx32) 0x0000000000001000L)) {
        NNS_G3dGeScale(pResMdl->info.invPosScale, pResMdl->info.invPosScale, pResMdl->info.invPosScale);
    }
}

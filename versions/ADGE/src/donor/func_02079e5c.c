/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02070258 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_anm_mat.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef long fx32;
typedef s16 fx16;
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
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} UnkResDict;
typedef struct {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} UnkResDictEntryHeader;
typedef struct {
    u8 category0;
    u8 revision;
    u16 category1;
    u16 numFrame;
    u16 flag;
    UnkResDict dict;
} UnkResAnm;
typedef void (*UnkAnmFunc)(void *result, const struct UnkAnmObj *obj, u32 dataIdx);
typedef struct UnkAnmObj {
    fx32 frame;
    fx32 ratio;
    void *resAnm;
    UnkAnmFunc funcAnm;
    struct UnkAnmObj *next;
    const void *resTex;
    u8 priority;
    u8 numMapData;
    u16 mapData[1];
} UnkAnmObj;
static inline void *UnkGetResDataByIdx_(const UnkResDict *dict, u32 idx) {
    const UnkResDictEntryHeader *p = (const UnkResDictEntryHeader *) ((const u8 *) dict + dict->ofsEntry);
    return (void *) (&p->data[0] + p->sizeUnit * idx);
}
typedef struct {
    u32 tagDiffuse;
    u32 tagAmbient;
    u32 tagSpecular;
    u32 tagEmission;
    u32 tagPolygonAlpha;
} UnkMatCAnmData;
u16 func_0207a0dc(const UnkResAnm *anm, u32 info, u32 frame);
u16 func_02079fe8(const UnkResAnm *anm, u32 info, u32 frame);
void func_02079e5c(UnkMatAnmResult *result, const UnkAnmObj *obj, u32 dataIdx) {
    const UnkResAnm *anm       = obj->resAnm;
    u32 frame                  = obj->frame >> 12;
    const UnkMatCAnmData *data = UnkGetResDataByIdx_(&anm->dict, (u16) dataIdx);
    u32 diff, amb, spec, emi;

    diff                 = func_0207a0dc(anm, data->tagDiffuse, frame);
    amb                  = func_0207a0dc(anm, data->tagAmbient, frame);
    result->prmMatColor0 = (result->prmMatColor0 & 0x8000) | diff | (amb << 16);

    emi                  = func_0207a0dc(anm, data->tagEmission, frame);
    spec                 = func_0207a0dc(anm, data->tagSpecular, frame);
    result->prmMatColor1 = (result->prmMatColor1 & 0x8000) | spec | (emi << 16);

    result->prmPolygonAttr = (result->prmPolygonAttr & ~0x1f0000) | (func_02079fe8(anm, data->tagPolygonAlpha, frame) << 16);
}

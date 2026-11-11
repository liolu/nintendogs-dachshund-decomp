/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G3dAnmObjInitNsBva from projets/blue-dragon-awakened-shadow/src/auto/NNSi_G3dAnmObjInitNsBva.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef long fx32;
typedef struct {
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackID;
    u8 dummy_;
} UnkResMdlInfo;
typedef struct {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    UnkResMdlInfo info;
} UnkResMdl;
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
typedef struct {
    u8 category0;
    u8 revision;
    u16 category1;
    u16 numFrame;
    u16 numNode;
    u16 flag;
    u16 dummy_;
    u32 visData[1];
} UnkResVisAnm;
extern UnkAnmFunc data_0213b3e0;
void func_0207b1e8(UnkAnmObj *obj, const UnkResVisAnm *anm, const UnkResMdl *mdl) {
    u32 i;

    obj->funcAnm    = data_0213b3e0;
    obj->numMapData = mdl->info.numNode;
    obj->resAnm     = (void *) anm;

    for (i = 0; i < obj->numMapData; i++) {
        obj->mapData[i] = (u16) (i | 0x100);
    }
}

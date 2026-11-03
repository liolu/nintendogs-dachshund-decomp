/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* bindMdlTex_Internal_ from https://github.com/7ucina/acww-decomp src/autoload_2/unk_02103aa4.c (license: MIT), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef struct ResDict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} ResDict;
typedef struct ResDictEntryHeader {
    u16 sizeUnit;
    u16 ofsName;
    u8 data[4];
} ResDictEntryHeader;
typedef struct ResMat {
    u16 ofsDictTexToMatList;
    u16 ofsDictPlttToMatList;
    ResDict dict;
} ResMat;
typedef struct ResDictMatData {
    u32 offset;
} ResDictMatData;
typedef struct ResMatData {
    u8 pad[0x14];
    u32 texImageParam;
    u32 pad18;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth, origHeight;
    s32 magW, magH;
} ResMatData;
typedef struct BindData {
    u16 offset;
    u8 numIdx;
    u8 flag;
} BindData;
typedef struct ResDictTexData {
    u32 texImageParam;
    u32 extraParam;
} ResDictTexData;
typedef struct ResTex {
    u8 pad0[8];
    u32 texKey;
    u8 pad0c[0xc];
    u32 tex4x4Key;
    u8 pad1c[0x10];
    u32 plttKey;
} ResTex;
extern s32 func_02069098(s32, s32);
static inline void *GetResDataByIdx(const ResDict *dict, u32 idx) {
    const ResDictEntryHeader *hdr = (const ResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
    return (void *) &hdr->data[hdr->sizeUnit * idx];
}
static inline ResMatData *GetMatDataByIdx(const ResMat *pResMat, u32 idx) {
    ResDictMatData *pDictData = (ResDictMatData *) GetResDataByIdx(&pResMat->dict, idx);
    return (ResMatData *) ((u8 *) pResMat + pDictData->offset);
}
void func_02075448(ResMat *pMat, BindData *pBindData, const ResTex *pTex, const ResDictTexData *pTexData) {
    u8 *base = (u8 *) pMat + pBindData->offset;
    u32 vramOffset;
    u32 j;
    if ((pTexData->texImageParam & 0x1c000000) != 0x14000000) {
        vramOffset = (((pTex->texKey) & 0xffff) << 3) >> 3;
    } else {
        vramOffset = (((pTex->tex4x4Key) & 0xffff) << 3) >> 3;
    }
    for (j = 0; j < pBindData->numIdx; ++j) {
        ResMatData *matData = GetMatDataByIdx(pMat, *(base + j));
        matData->texImageParam |= (pTexData->texImageParam + vramOffset);
        {
            u32 w         = pTexData->extraParam & 0x7ff;
            u32 h         = (pTexData->extraParam >> 11) & 0x7ff;
            matData->magW = (w != matData->origWidth) ? func_02069098(w << 12, matData->origWidth << 12) : 0x1000;
            matData->magH = (h != matData->origHeight) ? func_02069098(h << 12, matData->origHeight << 12) : 0x1000;
        }
    }
    pBindData->flag |= 1;
}

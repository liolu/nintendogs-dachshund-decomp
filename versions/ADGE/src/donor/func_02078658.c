/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206e9dc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g3d/g3d_res_struct.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef s16 fx16;
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
    u8 data[4];
} UnkResDictEntryHeader;
static inline void *GetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    UnkResDictEntryHeader *p = (UnkResDictEntryHeader *) ((u8 *) dict + dict->ofsEntry);
    return (void *) ((u8 *) &p->data[0] + p->sizeUnit * idx);
}
typedef struct UnkTexPatDictData {
    u16 numFV;
    u16 flag;
    fx16 ratioDataFrame;
    u16 offset;
} UnkTexPatDictData;
typedef struct UnkTexPatAnm {
    u8 unk_00[0xc];
    NNSG3dResDict dict;
} UnkTexPatAnm;
extern const UnkTexPatDictData *func_02078658(const UnkTexPatAnm *pat, u32 idx);
const UnkTexPatDictData *func_02078658(const UnkTexPatAnm *pat, u32 idx) {
    return (const UnkTexPatDictData *) GetResDataByIdx(&pat->dict, idx);
}

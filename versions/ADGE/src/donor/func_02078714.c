/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b02f8 from projets/code-lyoko/src/donor/func_020b02f8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
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
typedef struct UnkBinFileHeader {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} UnkBinFileHeader;
typedef struct UnkResAnmSet {
    u32 kind;
    u32 size;
    NNSG3dResDict dict;
} UnkResAnmSet;
void *func_02078714(const UnkBinFileHeader *file, u32 idx) {
    UnkResAnmSet *set = (UnkResAnmSet *) ((u8 *) file + *(const u32 *) ((u8 *) file + file->headerSize));
    const u32 *data   = (const u32 *) GetResDataByIdx(&set->dict, idx);
    if (data) {
        return (u8 *) set + *data;
    }
    return 0;
}

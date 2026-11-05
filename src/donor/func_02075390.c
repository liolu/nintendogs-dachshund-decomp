/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206b24c from projets/children-of-mana/src/auto/func_0206b24c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkResDict {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
} UnkResDict;
typedef struct UnkResDictEntryHeader {
    u16 unk_00;
    u16 unk_02;
    u8 unk_04[1];
} UnkResDictEntryHeader;
typedef struct UnkResTexInfo {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u32 unk_0c;
} UnkResTexInfo;
typedef struct UnkResTex4x4Info {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u32 unk_0c;
    u32 unk_10;
} UnkResTex4x4Info;
typedef struct UnkResPlttInfo {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u32 unk_0c;
} UnkResPlttInfo;
typedef struct UnkResTex {
    u32 unk_00;
    u32 unk_04;
    UnkResTexInfo unk_08;
    UnkResTex4x4Info unk_18;
    UnkResPlttInfo unk_2c;
    UnkResDict unk_3c;
} UnkResTex;
typedef struct UnkResDictTexData {
    u32 unk_00;
    u32 unk_04;
} UnkResDictTexData;
typedef struct UnkResDictToMatIdxData {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
} UnkResDictToMatIdxData;
typedef struct UnkResMat {
    u16 unk_00;
    u16 unk_02;
    UnkResDict unk_04;
} UnkResMat;
typedef struct UnkResMdl {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
} UnkResMdl;
extern void *func_02078d54(const UnkResDict *dict, const void *name);
static inline void *GetResDataByIdx(const UnkResDict *dict, int idx) {
    UnkResDictEntryHeader *hdr = (UnkResDictEntryHeader *) ((u8 *) dict + dict->unk_06);
    return (u8 *) hdr->unk_04 + hdr->unk_00 * idx;
}
typedef struct UnkResName {
    char unk_00[16];
} UnkResName;
static inline UnkResName *GetResNameByIdx(const UnkResDict *dict, int idx) {
    UnkResDictEntryHeader *hdr = (UnkResDictEntryHeader *) ((u8 *) dict + dict->unk_06);
    return &((UnkResName *) ((u8 *) hdr + hdr->unk_02))[idx];
}
static inline UnkResMat *GetMat(UnkResMdl *mdl) {
    return (UnkResMat *) ((u8 *) mdl + mdl->unk_08);
}
extern void func_02075448(UnkResMat *mat, UnkResDictToMatIdxData *data, UnkResTex *tex, UnkResDictTexData *texData);
BOOL func_02075390(UnkResMdl *mdl, UnkResTex *tex) {
    UnkResMat *mat   = GetMat(mdl);
    UnkResDict *dict = (UnkResDict *) ((u8 *) mat + mat->unk_00);
    int i;
    BOOL result = 1;

    for (i = 0; (u32) i < dict->unk_01; i++) {
        UnkResDictTexData *texData = func_02078d54(&tex->unk_3c, GetResNameByIdx(dict, i));

        if (texData != 0) {
            UnkResDictToMatIdxData *data = GetResDataByIdx(dict, i);

            if (!(data->unk_03 & 1)) {
                func_02075448(mat, data, tex, texData);
            }
        } else {
            result = 0;
        }
    }
    return result;
}

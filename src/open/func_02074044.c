typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
typedef long fx32;
typedef struct {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
} UnkResTexInfo;
typedef struct {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 dummy_;
    u32 ofsTex;
    u32 ofsTexPlttIdx;
} UnkResTex4x4Info;
typedef struct {
    u32 kind;
    u32 size;
    UnkResTexInfo texInfo;
    UnkResTex4x4Info tex4x4Info;
} UnkResTex;
typedef struct {
    u32 imageKey;
    u32 size;
} UnkResDictTexData;
typedef struct {
    u16 ofsIdx;
    u8 numIdx;
    u8 flag;
} UnkHeader;
typedef struct {
    u32 dummy_0x0[5];
    u32 prmTexPltt;
    u32 dummy_0x18[2];
    u16 origW;
    u16 origH;
    fx32 magW;
    fx32 magH;
} UnkObj;
s32 func_02067ca0(s32, s32);

void func_02074044(void *mat, UnkHeader *data, UnkResTex *tex, UnkResDictTexData *texData) {
    u32 plttBase;
    u8 *idxTbl;
    u32 i;

    idxTbl = (u8 *) mat + data->ofsIdx;
    if ((texData->imageKey & 0x1c000000) != 0x14000000) {
        plttBase = tex->texInfo.vramKey & 0xffff;
    } else {
        plttBase = tex->tex4x4Info.vramKey & 0xffff;
    }
    for (i = 0; i < data->numIdx; i++) {
        u32 sizeW;
        u32 sizeH;
        u16 *eh   = (u16 *) ((u8 *) mat + 4 + *(u16 *) ((u8 *) mat + 0xa));
        UnkObj *obj = (UnkObj *) ((u8 *) mat + *(u32 *) ((u8 *) eh + eh[0] * idxTbl[i] + 4));

        obj->prmTexPltt |= texData->imageKey + plttBase;
        sizeW = texData->size & 0x7ff;
        sizeH = (texData->size >> 0xb) & 0x7ff;
        obj->magW = (sizeW == obj->origW) ? 0x1000 : func_02067ca0(sizeW << 12, obj->origW << 12);
        obj->magH = (sizeH == obj->origH) ? 0x1000 : func_02067ca0(sizeH << 12, obj->origH << 12);
    }
    data->flag |= 1;
}

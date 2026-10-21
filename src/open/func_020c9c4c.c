typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef long long s64;

typedef struct {
    s32 x, y, z;
} UnkVec32;

typedef struct {
    u8 pad00[0x24];
    u16 unk24;
    u16 unk26;
    u8 pad28[4];
    s16 unk2c;
    s16 unk2e;
    UnkVec32 unk30;
    UnkVec32 unk3c;
    u8 pad48[12];
    UnkVec32 unk54;
    u8 pad60[12];
    s16 unk6c;
    s16 unk6e;
    s32 unk70;
    s32 unk74;
    s32 unk78;
} Obj020c9c4c;

typedef struct {
    u8 pad00[0x1c];
    s32 unk1c;
    u8 pad20[12];
    s32 unk2c;
    u8 pad30[0xCC];
    u32 unkfc;
} Glob02150e58;

extern s32 func_0205df50(s32, s32);
extern s32 func_02067ca0(s32, s32);
extern void func_0206ac98(s16, s16, s32, s32, s32, s32, s32, void *);
extern void func_0206ab00(const UnkVec32 *, const UnkVec32 *, const UnkVec32 *, s32, void *);

extern s32 data_02142bec;
extern Glob02150e58 data_02150e58;
extern u8 data_02150e60[];
extern UnkVec32 data_02151098;
extern UnkVec32 data_021510a4;
extern UnkVec32 data_021510b0;
extern u8 data_02150ea4[];

#pragma opt_propagation off
void func_020c9c4c(Obj020c9c4c *o) {
    UnkVec32 *dst;
    UnkVec32 *src;

    if (o->unk24 == 1) {
        o->unk70 = func_02067ca0(func_0205df50(o->unk2c << 12, o->unk2e), data_02142bec + 0x2000);
    }
    func_0206ac98(o->unk6c, o->unk6e, o->unk70, o->unk74, o->unk78, 0x1000, 0, data_02150e60);
    data_02150e58.unkfc &= ~0x50;
    dst = &data_02151098;
    *dst = o->unk30;
    dst = &data_021510a4;
    *dst = o->unk54;
    src = &o->unk3c;
    dst = &data_021510b0;
    *dst = *src;
    func_0206ab00(&o->unk30, &o->unk54, src, 0, data_02150ea4);
    data_02150e58.unkfc &= ~0xE8;
    if (o->unk24 != 1) {
        return;
    }
    if (o->unk26 & 1) {
        data_02150e58.unk1c = (s32) (((s64) data_02150e58.unk1c * (data_02142bec + 0x2000) + 0x800) >> 12);
        data_02150e58.unk2c = func_02067ca0(data_02142bec + 0x1000, data_02142bec - 0x1000);
    } else {
        data_02150e58.unk1c = (s32) (((s64) data_02150e58.unk1c * (data_02142bec + 0x2000) + 0x800) >> 12);
        data_02150e58.unk2c = func_02067ca0(data_02142bec + 0x1000, 0x1000 - data_02142bec);
    }
}

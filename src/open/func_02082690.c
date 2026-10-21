#include "m2c.h"

typedef struct {
    u8 pad_00[0x04];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x04];
    s32 unk_14;
    s32 unk_18;
    u16 unk_1C;
    u16 unk_1E;
    u16 unk_20;
    u8 pad_22[0x02];
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    u8 pad_30[0x0A];
    u16 unk_3A;
    u8 pad_3C[0x04];
    u8 unk_40;
    u8 unk_41;
} Unk02082690Desc;

typedef struct {
    Unk02082690Desc *desc;
} Unk02082690Handle;

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Unk02082690Vec;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    Unk02082690Handle *unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s16 unk_38;
    s16 unk_3A;
    s16 unk_3C;
    s16 unk_3E;
    s16 unk_40;
    s16 unk_42;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    s32 unk_50;
    s32 unk_54;
    s16 unk_58;
    s16 unk_5A;
    u8 unk_5C;
    u8 unk_5D;
    s16 unk_5E;
    u8 pad_60[0x0C];
    s32 unk_6C;
    s32 unk_70;
    s32 unk_74;
} Unk02082690;

void func_02082690(Unk02082690 *obj, Unk02082690Handle *handle, Unk02082690Vec *vec) {
    Unk02082690Desc *d;
    u16 v1;
    u16 v2;

    obj->unk_18 = handle;
    obj->unk_1C = 0;
    obj->unk_20 = vec->x + obj->unk_18->desc->unk_04;
    obj->unk_24 = vec->y + obj->unk_18->desc->unk_08;
    obj->unk_28 = vec->z + obj->unk_18->desc->unk_0C;
    obj->unk_34 = 0;
    obj->unk_30 = obj->unk_34;
    obj->unk_2C = obj->unk_30;
    obj->unk_38 = 0;
    obj->unk_3A = 0;
    d = obj->unk_18->desc;
    v1 = *(volatile u16 *) &d->unk_1C;
    v2 = *(volatile u16 *) &d->unk_1E;
    obj->unk_3C = v1;
    obj->unk_3E = v2;
    obj->unk_40 = d->unk_20;
    obj->unk_42 = 0;
    obj->unk_44 = obj->unk_18->desc->unk_14;
    obj->unk_48 = obj->unk_18->desc->unk_18;
    obj->unk_4C = obj->unk_18->desc->unk_24;
    obj->unk_50 = obj->unk_18->desc->unk_28;
    obj->unk_54 = obj->unk_18->desc->unk_2C;
    obj->unk_58 = obj->unk_18->desc->unk_3A;
    obj->unk_5A = 0x7FFF;
    obj->unk_5C = obj->unk_18->desc->unk_40;
    obj->unk_5D = obj->unk_18->desc->unk_41;
    obj->unk_5E = 0;
    obj->unk_04 = 0;
    obj->unk_00 = obj->unk_04;
    obj->unk_10 = 0;
    obj->unk_08 = obj->unk_10;
    obj->unk_14 = 0;
    obj->unk_0C = obj->unk_14;
    obj->unk_6C = 0;
    obj->unk_70 = 0;
    obj->unk_74 = 0;
}

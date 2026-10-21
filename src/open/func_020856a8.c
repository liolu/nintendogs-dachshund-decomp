#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    s16 w;
} Src020856a8;

typedef struct {
    u8 pad[0x14];
    s32 x;
    s32 y;
    s32 z;
} Dst020856a8;

void func_020856a8(M2C_UNK arg0, M2C_UNK arg1) {
    M2C_FIELD(arg1, s32 *, 0x14) = M2C_FIELD(arg1, s32 *, 0x14) + (s32) (((s64) M2C_FIELD(arg0, s16 *, 0xC) * (M2C_FIELD(arg0, s32 *, 0x0) - M2C_FIELD(arg1, s32 *, 0x14)) + 0x800) >> 12);
    M2C_FIELD(arg1, s32 *, 0x18) = M2C_FIELD(arg1, s32 *, 0x18) + (s32) (((s64) M2C_FIELD(arg0, s16 *, 0xC) * (M2C_FIELD(arg0, s32 *, 0x4) - M2C_FIELD(arg1, s32 *, 0x18)) + 0x800) >> 12);
    M2C_FIELD(arg1, s32 *, 0x1C) = M2C_FIELD(arg1, s32 *, 0x1C) + (s32) (((s64) M2C_FIELD(arg0, s16 *, 0xC) * (M2C_FIELD(arg0, s32 *, 0x8) - M2C_FIELD(arg1, s32 *, 0x1C)) + 0x800) >> 12);
}

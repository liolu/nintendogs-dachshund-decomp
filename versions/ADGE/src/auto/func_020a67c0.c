#include "engine.h"
#include "m2c.h"

extern void *data_021555f8;

void func_020a67c0(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x88) = (s16) M2C_FIELD(data_021555f8, s16 *, 0x20);
    M2C_FIELD((data_021555f8 + (M2C_FIELD(data_021555f8, s16 *, 0x20) * 4)), s32 *, 4) = arg0;
    M2C_FIELD(data_021555f8, s16 *, 0x20) = (s16) (M2C_FIELD(data_021555f8, s16 *, 0x20) + 1);
}

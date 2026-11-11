#include "m2c.h"

extern M2C_UNK data_021556e0;

s32 func_020bf97c(s32 arg0) {
    if (((u32) M2C_FIELD(&data_021556e0, u16 *, 0x3C) >= 8U) && (M2C_FIELD(&data_021556e0, s32 *, 0x44) == arg0)) {
        return 1;
    }
    return 0;
}

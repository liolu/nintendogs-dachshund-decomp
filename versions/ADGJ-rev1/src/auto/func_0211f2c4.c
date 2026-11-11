#include "m2c.h"

extern M2C_UNK data_02156180;

s32 func_0211f2c4(s32 arg0) {
    if (((u32) M2C_FIELD(&data_02156180, u16 *, 0x3C) >= 8U) && (M2C_FIELD(&data_02156180, s32 *, 0x44) == arg0)) {
        return 1;
    }
    return 0;
}

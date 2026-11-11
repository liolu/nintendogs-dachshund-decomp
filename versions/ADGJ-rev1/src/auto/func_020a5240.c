#include "m2c.h"

extern void *data_02153740;

void func_020a5240(s32 arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB0) != 0) {
        return;
    }
    if (arg0 < 0) {
        return;
    }
    if (arg0 < 0x2B) {
        M2C_FIELD(data_02153740, s32 *, 0xB4) = arg0;
    }
}

#include "m2c.h"

extern M2C_UNK data_02154cb8;

s32 func_020e96f0(void) {
    if (M2C_FIELD(&data_02154cb8, s32 *, 0x38) != 0) {
        return 0;
    }
    M2C_FIELD(&data_02154cb8, s32 *, 0x38) = 1;
    return 1;
}

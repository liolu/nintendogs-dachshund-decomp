#include "m2c.h"

extern M2C_UNK data_02154cac;

s32 func_020e2e1c(void) {
    if (M2C_FIELD(&data_02154cac, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}

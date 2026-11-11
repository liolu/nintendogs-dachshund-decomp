#include "m2c.h"

extern M2C_UNK data_ov003_0216be20;

s32 func_ov003_0216028c(void) {
    if (M2C_FIELD(&data_ov003_0216be20, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}

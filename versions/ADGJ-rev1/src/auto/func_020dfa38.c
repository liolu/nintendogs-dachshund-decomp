#include "m2c.h"

extern M2C_UNK data_02154ca8;

s32 func_020dfa38(void) {
    if (M2C_FIELD(&data_02154ca8, s32 *, 0) != 0) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

extern M2C_UNK data_0214a79c;

s32 func_020039d0(void) {
    if (M2C_FIELD(&data_0214a79c, u16 *, 4) == 0) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

extern M2C_UNK data_0214a79c;

s32 func_02003964(void) {
    if (M2C_FIELD(&data_0214a79c, u16 *, 4) == 2) {
        return 1;
    }
    return 0;
}

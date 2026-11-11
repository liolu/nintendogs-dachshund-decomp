#include "m2c.h"

extern M2C_UNK data_0214a878;

s32 func_020039ec(void) {
    if (M2C_FIELD(&data_0214a878, u16 *, 4) == 0) {
        return 1;
    }
    return 0;
}

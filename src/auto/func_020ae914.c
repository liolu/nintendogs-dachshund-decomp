#include "m2c.h"

extern void *data_02153740;

s16 func_020ae914(void) {
    s16 var_r0;

    var_r0 = -1;
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 0xD) {
        var_r0 = M2C_FIELD(data_02153740, s16 *, 0x9BC);
    }
    return var_r0;
}

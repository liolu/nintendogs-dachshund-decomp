#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

s32 func_020e21b8(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 5) {
        return 0;
    }
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 2) {
        var_r0 = M2C_FIELD(data_02159e70, s32 *, 0xE4);
    }
    return var_r0;
}

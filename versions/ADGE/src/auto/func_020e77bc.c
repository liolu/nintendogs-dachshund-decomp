#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

s32 func_020e77bc(void) {
    s32 var_r0;

    var_r0 = 0;
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 0x26) {
        var_r0 = M2C_FIELD(data_02159e70, s32 *, 0xC4);
    }
    return var_r0;
}

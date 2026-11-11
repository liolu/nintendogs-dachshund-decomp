#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

s32 func_020e15a8(void) {
    s16 var_r0;

    var_r0 = -1;
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 0xD) {
        var_r0 = M2C_FIELD(data_02159e70, s16 *, 0x1D4C);
    }
    return (s32) var_r0;
}

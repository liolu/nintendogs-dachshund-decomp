#include "engine.h"
#include "m2c.h"

s32 func_02022dc0(s32 arg0) {
    s16 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xF0);
    var_r0  = 0;
    if ((s32) temp_r1 <= 0xC) {
        return 0;
    }
    if ((s32) temp_r1 < 0x6F) {
        var_r0 = 1;
    }
    return var_r0;
}

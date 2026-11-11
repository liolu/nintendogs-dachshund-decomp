/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02022d18(s32 arg0) {
    s16 temp_r1;
    s32 var_r1;
    s32 var_r2;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xF0);
    if (((s32) temp_r1 >= 0x5B) && ((s32) temp_r1 < 0x6F)) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2 != 0) {
        var_r1 = 1;
    } else if (((s32) temp_r1 >= 0xF) && ((s32) temp_r1 <= 0x4A)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        return (s32) M2C_FIELD(arg0, u8 *, 0xA5);
    }
    return 0;
}

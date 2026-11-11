#include "engine.h"
#include "m2c.h"

void func_020f9578(s32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 1;
    if ((1 << arg1) != 0) {
        var_r2 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x16C) = (s32) (M2C_FIELD(arg0, s32 *, 0x16C) & var_r2);
    M2C_FIELD(arg0, s32 *, 0xB4)  = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 0x52);
}

#include "m2c.h"
s32 func_01ffdb08(s32);
s32 func_02033ed0(s32);
s32 func_02114c08(void) {
    s32 temp_r0;
    s32 var_r5;
    s32 var_r4;

    var_r5 = 0;
    var_r4 = var_r5;
loop_1:
    temp_r0 = func_01ffdb08(var_r4);
    if (temp_r0 != 0) {
        if (func_02033ed0(temp_r0) == 0) {
            var_r5 = 1;
            goto end;
        }
    }
    var_r4 = (s32) (s16) (var_r4 + 1);
    if (var_r4 < 3) {
        goto loop_1;
    }
end:
    return var_r5;
}

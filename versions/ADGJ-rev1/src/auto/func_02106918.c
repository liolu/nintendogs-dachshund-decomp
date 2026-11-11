/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0210775c();                                /* extern */
extern void *data_02156080;

s32 func_02106918(void) {
    s32 var_r0;
    s32 var_r6;

    var_r6 = 0;
loop_1:
    if ((var_r6 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= var_r6)) {
        var_r0 = 0;
    } else {
        var_r0 = M2C_FIELD((data_02156080 + (var_r6 * 4)), s32 *, 4);
    }
    if ((var_r0 != 0) && (func_0210775c() == 0)) {
        return 1;
    }
    var_r6 = (s32) (s16) (var_r6 + 1);
    if (var_r6 >= 7) {
        return 0;
    }
    goto loop_1;
}

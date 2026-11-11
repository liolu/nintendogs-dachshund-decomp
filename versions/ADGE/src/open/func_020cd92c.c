#include "m2c.h"
extern void *data_02159e38;
s32 func_020cd92c(s16 arg0, s16 arg1) {
    s32 var_r2 = 0;

    if (arg1 >= 2 && arg1 <= 5) {
        var_r2 = (s32) ((char *) M2C_FIELD(data_02159e38, s32 *, 0x141C) + 0xF8 + arg0 * 0x70 + (s16) (arg1 - 2) * 0x1C);
    }
    return var_r2;
}

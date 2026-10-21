#include "m2c.h"
extern void *data_02159e70;
s32 func_020e3b98(s32);
s32 func_020e2178(void) {
    s8 *base = (s8 *) data_02159e70;
    s32 result = 0;

    if (M2C_FIELD(base, s32 *, 0xA8) == 5) {
        result = func_020e3b98(3);
    }
    return result;
}

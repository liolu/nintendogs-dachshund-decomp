#include "m2c.h"
extern void *data_02159e70;
s32 func_020d7da8(void) {
    s8 *base = (s8 *) data_02159e70;
    s32 v;
    s32 result = 0;

    if (M2C_FIELD(base, s32 *, 0x5038) == 0) {
        v = M2C_FIELD(base, s32 *, 0xA8);
        if (v == 0 || v == 4) {
            result = 1;
        }
    }
    return result;
}

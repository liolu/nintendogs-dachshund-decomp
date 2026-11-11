#include "m2c.h"
s32 func_02009ea8(s32 *arg0, s32 *arg1) {
    s32 x = (s32) (((s64) arg0[0] * arg1[0] + 0x800) >> 12);
    s32 y = (s32) (((s64) arg0[1] * arg1[1] + 0x800) >> 12);
    s32 z = (s32) (((s64) arg0[2] * arg1[2] + 0x800) >> 12);

    return (x + y + z) > 0;
}

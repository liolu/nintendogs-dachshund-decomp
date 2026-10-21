#include "m2c.h"
s32 func_020861a4(u16 arg0, s32 arg1, ...) {
    s32 m;
    s32 result;

    m = ((u32) *((volatile u16 *) &arg0) << 0x10) >> 0x1E;
    if (m == 1) {
        return (arg1 + 1) / 2;
    }
    result = arg1;
    if (m != 2) {
        result = 0;
    }
    return result;
}

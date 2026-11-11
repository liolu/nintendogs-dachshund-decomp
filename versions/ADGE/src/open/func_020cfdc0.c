#include "m2c.h"
s32 func_020cd6bc(s32 arg0);
s64 func_020cd01c(s32 arg0, s32 arg1, s32 arg2);
s32 func_020cfdc0(s32 arg0, s32 arg1, s32 arg2) {
    s32 result = 0;

    if (func_020cd6bc(arg0 + 0x834) != 0) {
        if (func_020cd01c(arg0 + 0x834, arg1, arg2) >= 0x708) {
            result = 1;
        }
    } else {
        result = 1;
    }
    return result;
}

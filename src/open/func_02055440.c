#include "m2c.h"

s32 func_02057d5c(void *arg0, s32 arg1, s32 arg2);
s32 func_02057764(void *arg0, s32 arg1, s32 arg2);
s32 func_02057148(void *arg0, s32 arg1, s32 arg2);

s32 func_02055440(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 == 0) {
        return 0;
    }
    switch (M2C_FIELD(arg0, s8 *, 0x8b)) {
    case 0:
        return func_02057d5c(arg0, arg1, arg2);
    case 1:
    case 2:
        return func_02057764(arg0, arg1, arg2);
    case 3:
        return func_02057148(arg0, arg1, arg2);
    default:
        return 0;
    }
}

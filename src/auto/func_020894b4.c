#include "m2c.h"

s32 func_020894b4(void *arg0, s32 arg1) {
    return (M2C_FIELD(((arg1 * 6) + (s32) (arg0 + M2C_FIELD(arg0, s32 *, 8))), u16 *, 2) * 0xC) +
           (s32) (arg0 + M2C_FIELD(arg0, s32 *, 0xC));
}

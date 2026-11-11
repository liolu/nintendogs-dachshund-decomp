#include "engine.h"
#include "m2c.h"

s32 func_02085d3c(s32 arg0, s32 arg1) {
    return (M2C_FIELD(((arg1 * 6) + (arg0 + M2C_FIELD(arg0, s32 *, 8))), u16 *, 2) * 0xC) +
           (arg0 + M2C_FIELD(arg0, s32 *, 0xC));
}

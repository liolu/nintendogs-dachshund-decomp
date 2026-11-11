#include "engine.h"
#include "m2c.h"

s32 func_02033ec4(s32 arg0) {
    return M2C_FIELD(arg0, s32 *, 0x948) & 1;
}

#include "engine.h"
#include "m2c.h"

s32 func_02033edc(s32 arg0) {
    return M2C_FIELD(arg0, u8 *, 0xB5) & 1;
}

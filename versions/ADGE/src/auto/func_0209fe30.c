#include "engine.h"
#include "m2c.h"

s32 func_0209fe30(s32 arg0) {
    return M2C_FIELD(arg0, s32 *, 0x5C) - (M2C_FIELD(arg0, s32 *, 0x40) * M2C_FIELD(arg0, s32 *, 0x48));
}

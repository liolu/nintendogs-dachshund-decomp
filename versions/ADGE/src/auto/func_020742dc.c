#include "engine.h"
#include "m2c.h"

s32 func_020742dc(s32 arg0) {
    return M2C_FIELD(arg0, u16 *, 0xC) * 8;
}

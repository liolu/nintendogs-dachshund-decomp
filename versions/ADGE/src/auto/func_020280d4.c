#include "engine.h"
#include "m2c.h"

s32 func_020280d4(s32 arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x9E8) + 0x540 + (arg1 * 4);
}

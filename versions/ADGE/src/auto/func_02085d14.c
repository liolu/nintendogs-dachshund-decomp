#include "engine.h"
#include "m2c.h"

s32 func_02085d14(s32 arg0, s32 arg1) {
    return (arg1 * 6) + (arg0 + M2C_FIELD(arg0, s32 *, 8));
}

#include "engine.h"
#include "m2c.h"

s32 func_02085d30(s32 arg0) {
    return arg0 + M2C_FIELD(arg0, s32 *, 0x10);
}

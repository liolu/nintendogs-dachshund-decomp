#include "engine.h"
#include "m2c.h"

s32 func_0203523c(s32 arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x8B) == 4) {
        return 1;
    }
    return 0;
}

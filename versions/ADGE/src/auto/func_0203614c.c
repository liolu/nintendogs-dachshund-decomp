#include "engine.h"
#include "m2c.h"

s32 func_0203614c(s32 arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x13E) == 0xA) {
        return 1;
    }
    return 0;
}

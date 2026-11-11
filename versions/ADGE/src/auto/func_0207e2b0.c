#include "engine.h"
#include "m2c.h"

s32 func_0207e2b0(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0x4352414E) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 4) != 0xFFFE) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 6) == 0x100) {
        return 1;
    }
    return 0;
}

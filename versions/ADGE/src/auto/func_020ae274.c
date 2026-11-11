#include "engine.h"
#include "m2c.h"

s32 func_020ae274(s32 arg0) {
    if (((u32) M2C_FIELD(arg0, u16 *, 0xA0) > 0x78U) && ((s32) M2C_FIELD(arg0, s32 *, 0xC0) > 0xA000)) {
        return 1;
    }
    return 0;
}

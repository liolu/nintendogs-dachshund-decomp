#include "engine.h"
#include "m2c.h"

s32 func_02034c74(s32 arg0) {
    if ((u32) (u16) (s16) (M2C_FIELD(arg0, s16 *, 0xEA) + 0xFFFFFBD6) <= 3U) {
        return 1;
    }
    return 0;
}

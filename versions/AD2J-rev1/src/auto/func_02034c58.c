#include "m2c.h"

s32 func_02034c58(void *arg0) {
    if ((u32) (u16) (s16) (M2C_FIELD(arg0, s16 *, 0xE8) + 0xFFFFFC22) <= 2U) {
        return 1;
    }
    return 0;
}

#include "m2c.h"

s32 func_02034a24(void *arg0) {
    if (((u32) (u16) (s16) (M2C_FIELD(arg0, s16 *, 0xEC) + 0xFFFFFBD5) <= 1U) &&
        ((u32) (u16) (s16) (M2C_FIELD(arg0, s16 *, 0xE8) + 0xFFFFFBD5) > 1U) && (M2C_FIELD(arg0, u16 *, 0x10A) == 1)) {
        return 1;
    }
    return 0;
}

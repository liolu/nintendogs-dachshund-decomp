#include "engine.h"
#include "m2c.h"

extern void *data_02153740;

s32 func_020b0b88(void) {
    return (s32) (s16) (M2C_FIELD(data_02153740, s16 *, 0x334) - 1);
}

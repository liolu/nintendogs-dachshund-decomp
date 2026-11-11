#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

s32 func_020e38a4(void) {
    return (s32) (s16) (M2C_FIELD(data_02159e70, s16 *, 0x334) - 1);
}

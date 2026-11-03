#include "engine.h"
#include "m2c.h"

extern void *data_02154cb4;

s32 func_020e97e4(void) {
    return (s32) M2C_FIELD(data_02154cb4, s16 *, 0x4E30);
}

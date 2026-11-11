#include "engine.h"
#include "m2c.h"

extern void *data_02155660;

s32 func_020bee8c(void) {
    return (s32) M2C_FIELD(data_02155660, u16 *, 0x28);
}

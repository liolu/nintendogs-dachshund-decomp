#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

s32 func_020e1a70(void) {
    return (s32) M2C_FIELD(data_02159e70, u8 *, 0x11164);
}

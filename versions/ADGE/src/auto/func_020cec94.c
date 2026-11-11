#include "engine.h"
#include "m2c.h"

extern void *data_02159e38;

s32 func_020cec94(void) {
    return (s32) M2C_FIELD(M2C_FIELD(data_02159e38, void **, 0x141C), s8 *, 0x88);
}

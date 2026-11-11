#include "engine.h"
#include "m2c.h"

extern void *data_02154228;

s32 func_02088ecc(void) {
    return (s32) M2C_FIELD(data_02154228, s16 *, 0x4E30);
}

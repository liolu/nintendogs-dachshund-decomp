#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214f450;

s32 func_02068cf0(void) {
    return (s32) M2C_FIELD(&data_0214f450, u16 *, 8);
}

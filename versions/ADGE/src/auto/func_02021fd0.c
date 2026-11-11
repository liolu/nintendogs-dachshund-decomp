#include "engine.h"
#include "m2c.h"

extern void *data_0214da84;

s32 func_02021fd0(s32 arg0) {
    if (arg0 == M2C_FIELD(data_0214da84, s8 *, 0xA)) {
        return (s32) M2C_FIELD(data_0214da84, s16 *, 0x20);
    }
    return -1;
}

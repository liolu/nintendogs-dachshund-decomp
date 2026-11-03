#include "engine.h"
#include "m2c.h"

extern void *data_02153720;

void func_020a1788(s32 arg0) {
    M2C_FIELD(data_02153720, s16 *, 0x124) = (s16) arg0;
}

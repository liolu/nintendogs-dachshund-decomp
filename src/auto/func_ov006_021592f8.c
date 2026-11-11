#include "engine.h"
#include "m2c.h"

extern void *data_ov006_0215bb60;

void func_ov006_021592f8(s32 arg0) {
    M2C_FIELD(data_ov006_0215bb60, s32 *, 0x18) = arg0;
}

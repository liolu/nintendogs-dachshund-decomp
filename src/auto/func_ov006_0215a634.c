#include "engine.h"
#include "m2c.h"

extern void *data_ov006_0215bb64;

void func_ov006_0215a634(s32 arg0, s32 arg1) {
    M2C_FIELD(data_ov006_0215bb64, s32 *, 0x118) = arg0;
    M2C_FIELD(data_ov006_0215bb64, s32 *, 0x11C) = arg1;
}

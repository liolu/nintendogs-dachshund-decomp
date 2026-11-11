#include "engine.h"
#include "m2c.h"

extern void *data_ov006_0215bb64;

s32 func_ov006_0215a388(void) {
    if (data_ov006_0215bb64 == NULL) {
        return 0;
    }
    if ((s32) M2C_FIELD(data_ov006_0215bb64, s16 *, 0x12C) > 0) {
        return 1;
    }
    return 0;
}

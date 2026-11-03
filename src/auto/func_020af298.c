#include "engine.h"
#include "m2c.h"

extern void *data_02153740;
extern void *data_02153894;

void func_020af298(s32 arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 0x28) {
        M2C_FIELD(data_02153894, s32 *, 0x1C) = arg0;
    }
}

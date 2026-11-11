#include "engine.h"
#include "m2c.h"

void func_020dca54(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
    }
}

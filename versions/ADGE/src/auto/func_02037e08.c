#include "engine.h"
#include "m2c.h"

void func_02037e08(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x148) = (s16) (arg1 + 0x11);
}

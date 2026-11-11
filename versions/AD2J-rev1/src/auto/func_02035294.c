#include "m2c.h"

s32 func_02035294(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s16 *, 0x160) == M2C_FIELD(arg0, s16 *, 0x150)) && ((s32) M2C_FIELD(arg0, s16 *, 0x102) >= arg1)) {
        return 1;
    }
    return 0;
}

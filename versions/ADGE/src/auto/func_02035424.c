#include "m2c.h"

s32 func_02035424(void *arg0, s32 arg1) {
    if ((M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) && ((s32) M2C_FIELD(arg0, s16 *, 0x14E) <= arg1)) {
        return 1;
    }
    return 0;
}

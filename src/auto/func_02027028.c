#include "m2c.h"

s32 func_02027028(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xE8) == 0x437) {
        return 1;
    }
    return 0;
}

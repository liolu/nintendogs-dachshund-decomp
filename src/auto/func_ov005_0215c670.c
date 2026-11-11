#include "m2c.h"

s32 func_ov005_0215c670(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xEA) == 0x440) {
        return 1;
    }
    return 0;
}

#include "engine.h"
#include "m2c.h"

s32 func_0202dfe4(s32 arg0) {
    if ((s32) M2C_FIELD(arg0, s8 *, 0x8D) >= 5) {
        return 1;
    }
    return 0;
}

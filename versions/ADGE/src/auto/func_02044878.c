#include "engine.h"
#include "m2c.h"

extern void *data_0214da84;

s32 func_02044878(void) {
    if (M2C_FIELD(data_0214da84, s8 *, 0xE) != 0) {
        return 1;
    }
    return 0;
}

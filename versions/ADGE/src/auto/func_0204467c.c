#include "engine.h"
#include "m2c.h"

extern void *data_0214da84;

s32 func_0204467c(void) {
    if (M2C_FIELD(data_0214da84, s8 *, 0x13) == 3) {
        return 1;
    }
    return 0;
}

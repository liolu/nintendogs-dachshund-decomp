#include "engine.h"
#include "m2c.h"

extern void *data_02156ec0;

s32 func_020c186c(void) {
    if (data_02156ec0 == NULL) {
        return 0;
    }
    if ((s32) M2C_FIELD(data_02156ec0, s16 *, 0x12C) > 0) {
        return 1;
    }
    return 0;
}

#include "engine.h"
#include "m2c.h"

extern void *data_02156ec0;

s32 func_020c1780(void) {
    return M2C_FIELD(data_02156ec0, s32 *, 0x10C);
}

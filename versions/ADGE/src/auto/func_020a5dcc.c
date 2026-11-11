#include "engine.h"
#include "m2c.h"

extern void *data_021555f4;

s32 func_020a5dcc(void) {
    return M2C_FIELD(data_021555f4, s32 *, 0x7C);
}

#include "m2c.h"

u8 func_02028078(void *arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x9E4) + arg1), u8 *, 0x10);
}

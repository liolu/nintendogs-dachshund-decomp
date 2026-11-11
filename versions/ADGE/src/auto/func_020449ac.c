#include "engine.h"
#include "m2c.h"

extern s32 data_0214da84;

s32 func_020449ac(s32 arg0) {
    return M2C_FIELD((data_0214da84 + (arg0 * 4)), s32 *, 0x48);
}

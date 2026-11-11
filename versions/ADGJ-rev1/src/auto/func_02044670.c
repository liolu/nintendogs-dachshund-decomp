#include "m2c.h"

extern s32 data_0214b484;

s32 func_02044670(s32 arg0) {
    return M2C_FIELD((data_0214b484 + (arg0 * 4)), s32 *, 0x44);
}

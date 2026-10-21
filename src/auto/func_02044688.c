#include "m2c.h"

extern s32 data_0214b484;

s8 func_02044688(s32 arg0) {
    return M2C_FIELD((data_0214b484 + arg0), s8 *, 0x19);
}

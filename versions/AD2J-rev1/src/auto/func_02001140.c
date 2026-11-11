#include "m2c.h"

extern M2C_UNK data_0214a6a4;

s32 func_02001140(s32 arg0) {
    return M2C_FIELD(&data_0214a6a4, u16 *, 0x34) & arg0;
}

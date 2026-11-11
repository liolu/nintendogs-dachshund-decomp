#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214cd5c;

s32 func_02002ff8(void) {
    return M2C_FIELD(&data_0214cd5c, s32 *, 0x14);
}

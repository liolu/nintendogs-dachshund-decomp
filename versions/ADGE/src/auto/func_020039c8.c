#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214cd9c;

s32 func_020039c8(void) {
    if (M2C_FIELD(&data_0214cd9c, u16 *, 4) == 2) {
        return 1;
    }
    return 0;
}

#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215422c;

s32 func_02088dd0(void) {
    if (M2C_FIELD(&data_0215422c, s32 *, 0x38) != 0) {
        return 0;
    }
    M2C_FIELD(&data_0215422c, s32 *, 0x38) = 1;
    return 1;
}

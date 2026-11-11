#include "engine.h"
#include "m2c.h"

s32 func_020bace4(s32 arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 >= (s32) (*M2C_FIELD(arg0, s32 **, 0) - 1)) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r2 + 1);
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return 1;
}

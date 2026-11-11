#include "m2c.h"

extern s32 data_0214da84;

s32 func_01ffdb08(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 3)) {
        return 0;
    }
    return M2C_FIELD((data_0214da84 + (arg0 * 4)), s32 *, 0x54);
}

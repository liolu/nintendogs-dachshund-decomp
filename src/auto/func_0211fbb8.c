#include "m2c.h"

extern s32 data_02156100;
extern s32 data_02156104;

s32 func_0211fbb8(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return 0;
    }
    data_02156104 = 0;
    data_02156100 = 0;
    return 1;
}

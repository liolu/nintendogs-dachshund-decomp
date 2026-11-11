#include "m2c.h"

extern u16 data_021560f8;
extern s32 data_02156100;
extern s32 data_02156104;

s32 func_0211f80c(void *arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        temp_r1 = M2C_FIELD(arg0, u16 *, 8);
        if (temp_r1 == 6) {
            data_02156104 = 0;
            data_02156100 = 8;
        } else if (temp_r1 == 7) {
            data_021560f8 = M2C_FIELD(arg0, u16 *, 0xA);
        }
        return 1;
    }
    return 0;
}

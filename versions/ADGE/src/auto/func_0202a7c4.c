#include "m2c.h"

extern s32 *data_0214da84;

s32 func_0202a7c4(void *arg0) {
    s32 temp_r2;
    u16 temp_r1;

    temp_r2        = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r2;
    temp_r1        = (u16) ((u32) (temp_r2 << 0x10) >> 0x1F);
    switch (temp_r1) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0x42A;
            return 1;
        case 1:
            M2C_FIELD(arg0, s16 *, 0xEA) = 0x42B;
            return 1;
        default:
            return 0;
    }
}

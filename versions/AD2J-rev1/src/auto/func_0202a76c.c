#include "m2c.h"

extern s32 *data_0214b484;

s32 func_0202a76c(void *arg0) {
    s32 temp_r2;
    u16 temp_r1;

    temp_r2        = (*data_0214b484 * 0x10DCD) + 1;
    *data_0214b484 = temp_r2;
    temp_r1        = (u16) ((u32) (temp_r2 << 0x10) >> 0x1F);
    switch (temp_r1) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s16 *, 0xE8) = 0x429;
            return 1;
        case 1:
            M2C_FIELD(arg0, s16 *, 0xE8) = 0x42A;
            return 1;
        default:
            return 0;
    }
}

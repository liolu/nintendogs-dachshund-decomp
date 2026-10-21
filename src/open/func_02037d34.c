#include "m2c.h"
typedef enum {
    ENUM_02038094_0 = 0,
    ENUM_02038094_1,
    ENUM_02038094_2,
    ENUM_02038094_3,
} Enum_02038094;

Enum_02038094 func_0203820c(void *);                /* extern */
void func_02037d34(void *arg0) {
    s32 temp_r1;
    s32 var_r1;

    switch (func_0203820c(arg0)) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0x148) = 0x11;
        return;
    case 1:
        M2C_FIELD(arg0, s16 *, 0x148) = 0x12;
        return;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x148) = 0x13;
        return;
    case 3:
        temp_r1 = M2C_FIELD((void *) M2C_FIELD(arg0, u32 *, 0x9E8), s32 *, 0xC);
        switch (temp_r1 < 0xCCD ? 0 : temp_r1 <= 0x119A ? 1 : 2) {
        case 0:
            var_r1 = 0x16;
            break;
        case 1:
        default:
            var_r1 = 0x15;
            break;
        case 2:
            var_r1 = 0x14;
            break;
        }
        M2C_FIELD(arg0, s16 *, 0x148) = var_r1;
        return;
    }
}

#include "m2c.h"
M2C_UNK func_02038094(void *);                      /* extern */
void func_02037b2c(void *arg0) {
    s32 temp_r1;
    s32 var_r1;

    switch (func_02038094(arg0)) {
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

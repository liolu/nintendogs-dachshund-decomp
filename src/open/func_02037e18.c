#include "m2c.h"
void func_02037e18(void *arg0, s32 arg1) {
    s32 v;
    s32 var_r1;

    switch (arg1) {
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
        v = M2C_FIELD((void *) M2C_FIELD(arg0, u32 *, 0x9E8), s32 *, 0xC);
        switch (v < 0xCCD ? 0 : v <= 0x119A ? 1 : 2) {
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

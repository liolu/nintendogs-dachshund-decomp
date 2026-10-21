#include "m2c.h"
s32 func_020bfcc4(s32);
extern void *data_02155660;
void func_020bd8fc(s32 arg0) {
    M2C_UNK (*temp_r1)(s32);

    if (func_020bfcc4(arg0) == 0) {
        return;
    }
    switch (M2C_FIELD(arg0, u16 *, 0x4)) {
    case 0xA:
        break;
    case 0xB:
        return;
    case 0xC:
        return;
    default:
        return;
    }
    switch (M2C_FIELD(data_02155660, s32 *, 0x24)) {
    case 1:
        if (M2C_FIELD(data_02155660, s16 *, 0x30) == 0) {
            M2C_FIELD(data_02155660, s16 *, 0x30) = 1;
        }
        return;
    case 2:
    case 3:
        M2C_FIELD(data_02155660, s32 *, 0x34) = 1;
        M2C_FIELD(data_02155660, s32 *, 0x20) = M2C_FIELD(data_02155660, s32 *, 0x24);
        temp_r1 = M2C_FIELD(data_02155660, M2C_UNK(**)(), 0x18);
        if (temp_r1 == NULL) {
            return;
        }
        temp_r1(arg0);
        break;
    }
}

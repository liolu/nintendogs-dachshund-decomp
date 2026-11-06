#include "m2c.h"

extern void *data_02153740;

void func_02101a54(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB4) == 0x1D) {
        if (M2C_FIELD(data_02153740, u16 *, 0xFDD0) == 0) {
            M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
        }
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
}

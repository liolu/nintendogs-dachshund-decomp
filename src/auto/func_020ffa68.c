#include "m2c.h"

extern void *data_02153740;

void func_020ffa68(void) {
    if (M2C_FIELD(data_02153740, u16 *, 0xFDD0) == 0) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
    }
}

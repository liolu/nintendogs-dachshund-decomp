#include "m2c.h"

extern void *data_02159e70;

void func_020d7880(s32 arg0) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xB0) != 0) {
        return;
    }
    if (arg0 < 0) {
        return;
    }
    if (arg0 < 0x2B) {
        M2C_FIELD(data_02159e70, s32 *, 0xB4) = arg0;
    }
}

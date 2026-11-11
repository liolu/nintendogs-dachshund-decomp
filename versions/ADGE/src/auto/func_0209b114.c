#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_0209b114(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xB4) == 0x17) {
        if (M2C_FIELD(data_02159e70, u16 *, 0x11160) == 0) {
            M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        }
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
}

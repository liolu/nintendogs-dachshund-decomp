#include "m2c.h"
extern u32 data_021544dc;
void func_0209114c(void) {
    u32 *p = &data_021544dc;

    if (M2C_FIELD(p, s32 *, 0x8C) != 0) {
        M2C_FIELD(p, s32 *, 0x8C) = 0;
        M2C_FIELD(p, s16 *, 2) = ~0;
    }
}

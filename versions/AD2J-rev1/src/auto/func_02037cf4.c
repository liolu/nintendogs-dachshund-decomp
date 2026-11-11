/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 *data_0214b484;

s16 func_02037cf4(void) {
    s32 temp_r2;

    temp_r2        = (*data_0214b484 * 0x10DCD) + 1;
    *data_0214b484 = temp_r2;
    return (s16) ((u16) ((u32) (temp_r2 << 0x10) >> 0x1F) + 0x141);
}

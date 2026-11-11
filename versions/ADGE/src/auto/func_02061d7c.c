/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern u32 data_0213ca00;

s32 func_02061d7c(void) {
    u32 temp_r0;

    temp_r0       = (data_0213ca00 * 0x41C64E6D) + 0x3039;
    data_0213ca00 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}

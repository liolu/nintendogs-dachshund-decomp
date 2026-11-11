/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_0213b2e8;

s32 func_020619e4(void) {
    u32 temp_r0;

    temp_r0       = (data_0213b2e8 * 0x41C64E6D) + 0x3039;
    data_0213b2e8 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}

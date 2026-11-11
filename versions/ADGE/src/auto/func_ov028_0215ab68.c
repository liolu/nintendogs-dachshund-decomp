/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov028_0215bfb4;

s32 func_ov028_0215ab68(void) {
    if ((M2C_FIELD(data_ov028_0215bfb4, s32 *, 0x108) == 1) && (M2C_FIELD(data_ov028_0215bfb4, s32 *, 0x10C) == 1)) {
        return 1;
    }
    return 0;
}

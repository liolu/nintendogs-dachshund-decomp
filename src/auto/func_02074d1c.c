/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02074d1c(void *arg0, u32 arg1) {
    if (arg1 >= (u32) M2C_FIELD(arg0, u16 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 2) & 1) {
        return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 0x10);
    }
    return M2C_FIELD(arg0, s32 *, 4) + (arg1 * 8);
}

/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02088db4(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1F) & 1) {
        return (s32) ((u32) (M2C_FIELD(arg0, s32 *, 0x1C) << 8) >> 8);
    }
    return M2C_FIELD(arg0, s32 *, 8);
}

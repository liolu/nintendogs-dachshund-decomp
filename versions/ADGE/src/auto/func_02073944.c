/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02073944(s32 arg0) {
    if (M2C_FIELD(arg0, u16 *, 2) & 1) {
        return M2C_FIELD(arg0, s32 *, 4) + (M2C_FIELD(arg0, u16 *, 0) * 0x10);
    }
    return M2C_FIELD(arg0, s32 *, 4) + (M2C_FIELD(arg0, u16 *, 0) * 8);
}

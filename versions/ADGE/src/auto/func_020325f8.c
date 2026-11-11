/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020325f8(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x924) & 0x80000000) {
        return 1;
    }
    return 0;
}

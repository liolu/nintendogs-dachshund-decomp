/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02039268(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x152);
    if (((s32) temp_r1 >= 0x14) && ((s32) temp_r1 <= 0x16)) {
        M2C_FIELD(arg0, s16 *, 0xEA) = 0x260;
        return 1;
    }
    return 0;
}

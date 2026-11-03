/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_02153740;

void func_020b93d4(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (arg0 * 0x294) + (data_02153740 + 0xA5C);
    if (arg1 == 0) {
        M2C_FIELD(temp_r2, s32 *, 4) = 0;
        return;
    }
    M2C_FIELD(temp_r2, s32 *, 4) = arg1;
}

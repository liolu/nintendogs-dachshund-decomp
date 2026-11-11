/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
M2C_UNK func_02027c48(M2C_UNK);
M2C_UNK func_02102fe4(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_020c260c(s32 arg0) {
    s32 *temp_r4;
    s32 temp_r0;

    temp_r4 = M2C_FIELD(arg0, s32 **, 0x214);
    temp_r0 = func_01ffdb08((s32) M2C_FIELD(arg0, s16 *, 0x98));
    if (*temp_r4 == 0) {
        *temp_r4 = func_02102fe4(func_02027c48(temp_r0), 1, 0);
    }
    return *temp_r4;
}

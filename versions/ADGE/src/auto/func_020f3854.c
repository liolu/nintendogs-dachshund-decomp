/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02027f68(M2C_UNK, M2C_UNK);

void func_020f3854(s32 arg0) {
    s16 var_r0;
    s32 temp_r0;

    temp_r0 = func_02027f68(M2C_FIELD(arg0, s32 *, 4), 7);
    if (temp_r0 == 0) {
        var_r0 = 0;
    } else if (temp_r0 <= 0xBB8) {
        var_r0 = 1;
    } else if (temp_r0 <= 0x1770) {
        var_r0 = 2;
    } else if (temp_r0 <= 0x2328) {
        var_r0 = 3;
    } else {
        var_r0 = 4;
    }
    M2C_FIELD(arg0, s16 *, 2) = var_r0;
}

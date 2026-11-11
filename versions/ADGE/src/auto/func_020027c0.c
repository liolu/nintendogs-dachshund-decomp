/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020027fc(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_02002dd8();                            /* extern */
extern M2C_UNK func_02002dd0;

s32 func_020027c0(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020027fc(arg0, arg1, &func_02002dd0, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02002dd8();
    return sp0;
}

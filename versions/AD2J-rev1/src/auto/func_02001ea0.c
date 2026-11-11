/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001bc8();                            /* extern */
s32 func_02001ee4(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_0214a6e0;
extern M2C_UNK func_02001be0;

s32 func_02001ea0(void) {
    s32 temp_r0;

    temp_r0                               = func_02001ee4(&func_02001be0, 0);
    M2C_FIELD(&data_0214a6e0, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_02001bc8();
    }
    return M2C_FIELD(&data_0214a6e0, s32 *, 0xC);
}

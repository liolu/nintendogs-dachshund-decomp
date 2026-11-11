/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001c2c();                            /* extern */
s32 func_02001f48(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_0214cce0;
extern M2C_UNK func_02001c44;

s32 func_02001f04(void) {
    s32 temp_r0;

    temp_r0                               = func_02001f48(&func_02001c44, 0);
    M2C_FIELD(&data_0214cce0, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_02001c2c();
    }
    return M2C_FIELD(&data_0214cce0, s32 *, 0xC);
}

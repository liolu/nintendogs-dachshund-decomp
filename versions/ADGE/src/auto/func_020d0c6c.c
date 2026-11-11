/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d18ac(void *, M2C_UNK, M2C_UNK);        /* extern */
void *func_020d28d8();                              /* extern */
extern s32 data_02159e3c;

s32 func_020d0c6c(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_r4;
    void *temp_r0;

    var_r4  = 0;
    temp_r0 = func_020d28d8();
    if ((M2C_FIELD(temp_r0, s32 *, 0x10) != 0) && ((arg3 != 0) || (M2C_FIELD(temp_r0, s32 *, 0xC) != data_02159e3c))) {
        var_r4 = func_020d18ac(temp_r0, arg2, 0);
    }
    return var_r4;
}

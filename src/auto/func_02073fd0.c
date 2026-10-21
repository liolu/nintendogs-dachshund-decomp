/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02073130();                              /* extern */
s32 func_02073d54(s32, M2C_UNK);                    /* extern */
s32 func_02073e54(u16, s32, M2C_UNK);               /* extern */

s32 func_02073fd0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0 = func_02073130();
    if (temp_r0 == NULL) {
        return 0;
    }
    if (func_02073e54(M2C_FIELD(temp_r0, u16 *, 4), arg1, arg2) == 0) {
        return 0;
    }
    if ((arg1 & 1) && (func_02073d54(M2C_FIELD(temp_r0, s32 *, 0), arg2) == 0)) {
        return 0;
    }
    return 1;
}

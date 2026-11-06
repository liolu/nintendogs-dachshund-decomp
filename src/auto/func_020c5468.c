/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844();                              /* extern */
M2C_UNK func_02078b34(s32, M2C_UNK, M2C_UNK);       /* extern */
void *func_020c4b44(M2C_UNK, s32, M2C_UNK);         /* extern */
M2C_UNK func_020c54dc();                            /* extern */

void *func_020c5468(M2C_UNK arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_02003844();
    if (temp_r0 != NULL) {
        func_020c54dc();
        if (arg2 == 0) {
            M2C_FIELD(temp_r0, void **, 0x1C) = NULL;
        } else {
            M2C_FIELD(temp_r0, void **, 0x1C) = func_020c4b44(arg0, arg2, 0);
            func_02078b34(M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x1C), s32 *, 8), 0, 0x1F0000);
            func_02078b34(M2C_FIELD(M2C_FIELD(temp_r0, void **, 0x1C), s32 *, 8), 0, 0x3F000000);
        }
    }
    return temp_r0;
}

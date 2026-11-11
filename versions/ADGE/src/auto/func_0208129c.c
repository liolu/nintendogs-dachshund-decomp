/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02082690(void *, s32, M2C_UNK);        /* extern */
void *func_02085b04(void *);                        /* extern */
M2C_UNK func_02085b48(void *, void *);              /* extern */

void *func_0208129c(void *arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;
    void *var_r4;

    var_r4 = NULL;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        temp_r0 = func_02085b04(arg0 + 0xC);
        var_r4  = temp_r0;
        func_02082690(temp_r0, M2C_FIELD(arg0, s32 *, 0x1C) + (arg1 << 5), arg2);
        func_02085b48(arg0 + 4, var_r4);
        if (((u32) (**M2C_FIELD(var_r4, s32 ***, 0x18) << 0x11) >> 0x1F) != 0) {
            var_r4 = NULL;
        }
    }
    return var_r4;
}

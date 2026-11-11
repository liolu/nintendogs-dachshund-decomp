/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e124();                            /* extern */

void func_020c8af0(void *arg0) {
    s16 var_r7;
    void *var_r6;

    var_r7 = 0;
    if ((s32) M2C_FIELD(arg0, s16 *, 0x32) <= 0) {
        return;
    }
    var_r6 = arg0 + 0x38;
    do {
        if (M2C_FIELD(var_r6, s32 *, 0x48) != 0) {
            func_0207e124();
            M2C_FIELD(var_r6, s32 *, 0x48) = 0;
        }
        var_r7 += 1;
        var_r6 += 0x4C;
    } while ((s32) var_r7 < (s32) M2C_FIELD(arg0, s16 *, 0x32));
}

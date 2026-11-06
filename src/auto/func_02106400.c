/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0210647c(M2C_UNK);                         /* extern */
M2C_UNK func_021077ac(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *data_02156080;

s32 func_02106400(s16 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    void *var_r0;

    temp_r0 = func_0210647c(arg1);
    if ((temp_r0 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= temp_r0)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_02156080 + (temp_r0 * 4)), void **, 4);
    }
    if (var_r0 == NULL) {
        return -1;
    }
    M2C_FIELD(var_r0, s16 *, 0x9C) = arg0;
    M2C_FIELD(var_r0, s16 *, 0x9E) = 0;
    func_021077ac(var_r0, arg2, -1, -1);
    return temp_r0;
}

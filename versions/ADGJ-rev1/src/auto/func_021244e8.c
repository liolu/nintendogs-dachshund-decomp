/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02112828();                                /* extern */
M2C_UNK func_02118e5c(M2C_UNK, M2C_UNK, s16, M2C_UNK); /* extern */
extern void *data_02153720;
extern void *data_02156080;

void func_021244e8(M2C_UNK arg0) {
    s16 temp_r2;
    s16 temp_r2_2;
    s32 temp_r0;
    void *var_r5;

    temp_r2 = M2C_FIELD(data_02153720, s16 *, 0x7A);
    if (((s32) temp_r2 < 0) || ((s32) M2C_FIELD(data_02156080, s16 *, 0x20) <= (s32) temp_r2)) {
        var_r5 = NULL;
    } else {
        var_r5 = M2C_FIELD((data_02156080 + (temp_r2 * 4)), void **, 4);
    }
    temp_r0 = func_02112828();
    if (var_r5 == NULL) {
        return;
    }
    if (temp_r0 == -1) {
        return;
    }
    temp_r2_2 = M2C_FIELD(var_r5, s16 *, 0x98);
    if (temp_r0 != temp_r2_2) {
        return;
    }
    func_02118e5c(arg0, 0x10, temp_r2_2, 4);
}

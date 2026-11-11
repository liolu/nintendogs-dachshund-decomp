/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a60fc(M2C_UNK);
M2C_UNK func_020a742c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_021555f8;

s32 func_020a6080(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    void *var_r0;

    temp_r0 = func_020a60fc(arg1);
    if ((temp_r0 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= temp_r0)) {
        var_r0 = NULL;
    } else {
        var_r0 = M2C_FIELD((data_021555f8 + (temp_r0 * 4)), void **, 4);
    }
    if (var_r0 == NULL) {
        return -1;
    }
    M2C_FIELD(var_r0, s16 *, 0x9C) = (s16) arg0;
    M2C_FIELD(var_r0, s16 *, 0x9E) = 0;
    func_020a742c((s32) var_r0, arg2, -1, -1);
    return temp_r0;
}

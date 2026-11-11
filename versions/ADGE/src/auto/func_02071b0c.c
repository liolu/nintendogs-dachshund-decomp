/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02087e04(void *, s32, M2C_UNK);            /* extern */
s32 func_02087e70(void *, M2C_UNK, u32);            /* extern */
extern void *data_0215087c;

s32 func_02071b0c(u32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    u32 temp_r0;
    u32 var_r5;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    var_r5  = arg2;
    temp_r4 = data_0215087c;
    temp_r2 = M2C_FIELD(temp_r4, void **, 0x80);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return -1;
    }
    temp_r1 = temp_r2 + 0xC + (arg0 * 0x10);
    temp_r0 = M2C_FIELD(temp_r1, s32 *, 4) - arg3;
    if (var_r5 > temp_r0) {
        var_r5 = temp_r0;
    }
    if (func_02087e04(temp_r4 + 0x34, M2C_FIELD(temp_r1, s32 *, 0) + arg3, 0) == 0) {
        return -1;
    }
    return func_02087e70(temp_r4 + 0x34, arg1, var_r5);
}

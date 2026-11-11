/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02071ae4(u32, s32);                        /* extern */
void *func_02071c80();                              /* extern */
s32 func_020727f8(u32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0207292c(u32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_02072bd0(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 *arg4) {
    s32 temp_r1;
    s32 var_r0;
    void *temp_r0;

    temp_r0 = func_02071c80();
    if (temp_r0 == NULL) {
        return 5;
    }
    temp_r1 = arg1 & 4;
    if (temp_r1 != 0) {
        if (M2C_FIELD(temp_r0, u8 *, 3) & 1) {
            var_r0 = func_020727f8((u32) (M2C_FIELD(temp_r0, s32 *, 0) << 8) >> 8, arg2, arg3);
        } else {
            var_r0 = func_0207292c((u32) (M2C_FIELD(temp_r0, s32 *, 0) << 8) >> 8, arg2, arg3);
        }
        if (var_r0 == 0) {
            return 9;
        }
        goto block_9;
    }
    var_r0 = func_02071ae4((u32) (M2C_FIELD(temp_r0, s32 *, 0) << 8) >> 8, temp_r1);
block_9:
    if (arg4 != NULL) {
        *arg4 = var_r0;
    }
    return 0;
}

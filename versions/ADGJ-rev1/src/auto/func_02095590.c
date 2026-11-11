/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003b70(s32);                         /* extern */
s32 func_02003b9c(M2C_UNK);                         /* extern */
s32 func_020f07bc(M2C_UNK);                         /* extern */

s32 func_02095590(void *arg0, s16 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(arg0, s16 *, 0x2C) = arg1;
    temp_r0_2                    = arg1 & 1;
    if (temp_r0_2 != 0) {
        func_02003b70(temp_r0_2);
        if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
            return func_020f07bc(0x28);
        }
        return func_020f07bc(0x44);
    }
    temp_r0 = arg1 & 2;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_02003b9c(0x14);
}

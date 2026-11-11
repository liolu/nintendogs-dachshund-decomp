/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ec2a0();                                /* extern */
M2C_UNK func_020edb5c(M2C_UNK);                     /* extern */
extern M2C_UNK data_02154dd8;

s32 func_020ec220(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_020ec2a0();
    if (temp_r0 != -1) {
        M2C_FIELD((arg0 + (temp_r0 * 4)), s32 *, 0x28) = arg2;
        M2C_FIELD(arg0, u16 *, 0x26)                   = (u16) (M2C_FIELD(arg0, u16 *, 0x26) | (1 << temp_r0));
    }
    if ((M2C_FIELD(&data_02154dd8, s32 *, 4) == 0) && (M2C_FIELD(arg0, u16 *, 0x24) == 0x4B) && (arg1 == 0)) {
        func_020edb5c(0x7A);
    }
    return temp_r0;
}

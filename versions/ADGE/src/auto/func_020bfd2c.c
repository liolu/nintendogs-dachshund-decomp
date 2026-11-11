/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02064f3c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern u16 data_0215566c;
extern s32 data_0215567c;

s32 func_020bfd2c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, u16 *arg6) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if ((data_0215567c == 1) || (data_0215566c == 1)) {
        *arg6 = 0x17;
        return 0;
    }
    *arg6 = func_02064f3c(arg0, arg1, arg2, arg3, (s32) arg4, (s32) arg5, 0, 0, 0, 0, 0);
    if (*arg6 == 2) {
        data_0215567c = 1;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_020647a0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern u16 data_0215566c;
extern s32 data_0215567c;
extern M2C_UNK data_021556e0;

s32 func_020bff2c(M2C_UNK arg0, M2C_UNK arg1, u16 *arg2) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if ((data_0215567c == 1) || (data_0215566c == 1)) {
        *arg2 = 0x17;
        return 0;
    }
    *arg2 = func_020647a0(arg0, &data_021556e0, arg1, 1, 0);
    if (*arg2 == 2) {
        data_0215567c = 1;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}

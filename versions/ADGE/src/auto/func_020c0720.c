/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_020641a8(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
extern u16 data_0215566c;
extern s32 data_02155678;
extern s32 data_0215567c;
extern M2C_UNK data_021557a0;

s32 func_020c0720(M2C_UNK arg0, u16 *arg1) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if ((data_0215567c == 1) || (data_0215566c == 1)) {
        *arg1 = 0x17;
        return 0;
    }
    *arg1 = func_020641a8(&data_021557a0, arg0);
    if (*arg1 == 0) {
        data_02155678 = 1;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}

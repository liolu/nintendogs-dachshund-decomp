/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
s32 func_020c05c8(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02140b54;
extern s16 data_02155664;
extern s16 data_02155670;
extern M2C_UNK func_020649bc;

s32 func_020c01fc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if (func_020c05c8(&data_02140b54, &func_020649bc, arg0, arg1) != 0) {
        data_02155670 = 0;
        data_02155664 = 0;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}

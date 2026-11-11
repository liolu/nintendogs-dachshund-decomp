/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02065c64(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
extern u16 data_021560f4;
extern s32 data_02156104;
extern M2C_UNK data_02156180;

s32 func_0211f86c(M2C_UNK arg0, M2C_UNK arg1, u16 *arg2) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if ((data_02156104 == 1) || (data_021560f4 == 1)) {
        *arg2 = 0x17;
        return 0;
    }
    *arg2 = func_02065c64(arg0, &data_02156180, arg1, 1, 0);
    if (*arg2 == 2) {
        data_02156104 = 1;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}

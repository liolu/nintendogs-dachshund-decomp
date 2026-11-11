/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
s32 func_0211ff08(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0214a494;
extern s16 data_021560ec;
extern s16 data_021560f8;
extern M2C_UNK func_02066064;

s32 func_0211f790(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if (func_0211ff08(&data_0214a494, &func_02066064, arg0, arg1) != 0) {
        data_021560f8 = 0;
        data_021560ec = 0;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}

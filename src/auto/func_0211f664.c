/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_020663d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32); /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
extern u16 data_021560f4;
extern s32 data_02156104;

s32 func_0211f664(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, u16 *arg6) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if ((data_02156104 == 1) || (data_021560f4 == 1)) {
        *arg6 = 0x17;
        return 0;
    }
    *arg6 = func_020663d8(arg0, arg1, arg2, arg3, (s32) arg4, (s32) arg5, 0, 0, 0, 0, 0);
    if (*arg6 == 2) {
        data_02156104 = 1;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}

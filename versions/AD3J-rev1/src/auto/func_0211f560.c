/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_02065f14(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
extern u16 data_021560f4;
extern s32 data_02156104;
extern M2C_UNK data_02156140;

s32 func_0211f560(M2C_UNK arg0, u16 *arg1) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if ((data_02156104 == 1) || (data_021560f4 == 1)) {
        *arg1 = 0x17;
        return 0;
    }
    *arg1 = func_02065f14(arg0, &data_02156140);
    if (*arg1 == 2) {
        data_02156104 = 1;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_020654b8();                                /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
extern u16 data_021560f4;
extern s32 data_02156100;
extern s32 data_02156104;

s32 func_0211ffb8(u16 *arg0) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    if ((data_02156104 == 1) || (data_021560f4 == 1)) {
        *arg0 = 0x17;
        return 0;
    }
    *arg0 = func_020654b8();
    if (*arg0 == 0) {
        data_02156100 = 0;
        func_02081220(temp_r4);
        return 1;
    }
    func_02081220(temp_r4);
    return 0;
}

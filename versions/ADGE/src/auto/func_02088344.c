/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02088468();                            /* extern */
extern s32 data_021541b8;

void func_02088344(s32 arg0) {
    if (data_021541b8 != 0) {
        return;
    }
    data_021541b8 = 1;
    func_02088468(arg0);
}

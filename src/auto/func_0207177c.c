/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063760(s32, M2C_UNK);                /* extern */
extern s32 data_0214f360;

void func_0207177c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02063760(arg0, 0);
    data_0214f360 &= ~arg0;
}

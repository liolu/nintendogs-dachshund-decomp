/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206378c(s32, M2C_UNK);                /* extern */
extern s32 data_0214f360;

s32 func_020717b4(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_0214f360) {
        return 0;
    }
    func_0206378c(arg0, 0);
    data_0214f360 |= arg0;
    return 1;
}

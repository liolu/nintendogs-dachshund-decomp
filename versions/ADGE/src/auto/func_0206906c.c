/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069de4(u16);                         /* extern */
extern u16 data_0214f450;

u16 func_0206906c(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0214f450 |= temp_r4;
    func_02069de4(temp_r4);
    return temp_r4;
}

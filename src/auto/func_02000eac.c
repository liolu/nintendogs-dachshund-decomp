/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02081288();                            /* extern */
extern s16 data_0214a5c0;

void func_02000eac(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0214a5c0 = 1;
        return;
    }
    func_02081288();
}

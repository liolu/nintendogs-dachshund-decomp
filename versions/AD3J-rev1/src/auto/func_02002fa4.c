/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002dfc(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02002f28(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0214a774;

void func_02002fa4(M2C_UNK arg0) {
    func_02002f28(&data_0214a774, arg0);
    func_02002dfc(&data_0214a774, 0xBEEF);
}

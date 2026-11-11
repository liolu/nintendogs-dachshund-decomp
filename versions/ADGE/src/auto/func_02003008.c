/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002e60(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02002f8c(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0214cd74;

void func_02003008(M2C_UNK arg0) {
    func_02002f8c(&data_0214cd74, arg0);
    func_02002e60(&data_0214cd74, 0xBEEF);
}

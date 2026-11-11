/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207cf0c();                            /* extern */
extern M2C_UNK *data_0213b5c0;
extern M2C_UNK *data_0213b5c4;
extern M2C_UNK data_021532a0;
extern M2C_UNK func_0207cf44;
extern M2C_UNK func_0207cf4c;

void func_0207d08c(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_021532a0, s32 *, 8) = arg0;
    func_0207cf0c();
    if (arg1 == 0) {
        return;
    }
    data_0213b5c0 = &func_0207cf4c;
    data_0213b5c4 = &func_0207cf44;
}

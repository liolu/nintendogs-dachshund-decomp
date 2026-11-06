/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02072214(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern s32 data_02154efc;

void func_020ef590(M2C_UNK arg0, M2C_UNK arg1) {
    if (data_02154efc == 0) {
        return;
    }
    func_02072214(&data_02154efc, arg0, arg1);
}

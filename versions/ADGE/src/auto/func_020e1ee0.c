/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d7880(M2C_UNK);                     /* extern */
M2C_UNK func_020e3e2c(M2C_UNK);                     /* extern */
extern void *data_02159e70;

void func_020e1ee0(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 7) {
        return;
    }
    func_020d7880(2);
    M2C_FIELD(data_02159e70, s32 *, 0x1D14) = 0x12;
    func_020e3e2c(4);
}

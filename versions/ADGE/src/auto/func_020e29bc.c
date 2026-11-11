/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e3df0();                            /* extern */
M2C_UNK func_020e3e2c(M2C_UNK);                     /* extern */
extern void *data_02159e70;
extern s32 *data_02159fc4;

void func_020e29bc(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(data_02159e70, s32 *, 0xB8);
    if ((temp_r1 != 2) && (temp_r1 != 0x25)) {
        return;
    }
    if (arg0 != 0) {
        if (*data_02159fc4 == 0xD) {
            return;
        }
        func_020e3e2c(0xD);
        return;
    }
    if (*data_02159fc4 != 0xD) {
        return;
    }
    func_020e3df0();
}

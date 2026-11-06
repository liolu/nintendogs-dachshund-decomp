/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ed3b0();                            /* extern */
M2C_UNK func_020f98ac();                            /* extern */
extern M2C_UNK data_02154cb8;

void func_020e9858(void) {
    func_020f98ac();
    func_020ed3b0();
    M2C_FIELD(&data_02154cb8, s32 *, 0x2C) = 0;
}

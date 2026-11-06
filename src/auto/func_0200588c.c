/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02069bf8();                            /* extern */
M2C_UNK func_0207f1c8(M2C_UNK, M2C_UNK);            /* extern */

void func_0200588c(void) {
    func_0207f1c8(1, 1);
    func_02069bf8();
    *(s32 *) 0x04001000 |= 0x10000;
}

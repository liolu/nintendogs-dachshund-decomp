/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023610(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02025a2c(void *);                      /* extern */
M2C_UNK func_02026bcc();                            /* extern */

void func_0201f6c8(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0x41;
    func_02026bcc(arg0);
    func_02025a2c(arg0);
    func_02023610(arg0, 0x30, 2);
}

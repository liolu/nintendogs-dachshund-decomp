/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023610(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02025b58(void *);                      /* extern */
M2C_UNK func_02026458();                            /* extern */

void func_0201d8a4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0x8B;
    func_02026458(arg0);
    func_02025b58(arg0);
    func_02023610(arg0, 0x29, 1);
}

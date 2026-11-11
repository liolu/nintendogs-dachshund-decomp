/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023644(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02025ba0(void *);                      /* extern */
M2C_UNK func_020264a0();                            /* extern */

void func_0201d870(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0x8B;
    func_020264a0(arg0);
    func_02025ba0(arg0);
    func_02023644(arg0, 0x29, 1);
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023644(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02025538(void *);                      /* extern */
M2C_UNK func_02026c14();                            /* extern */

void func_0201f5bc(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0x65;
    func_02026c14(arg0);
    func_02025538(arg0);
    func_02023644(arg0, 0x31, 2);
}

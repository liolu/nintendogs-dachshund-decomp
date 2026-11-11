/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02044980(M2C_UNK);                     /* extern */
M2C_UNK func_020b95c4(void *);                      /* extern */

void func_020bc2ec(void *arg0) {
    void *temp_r4;

    temp_r4 = arg0 + 0x60;
    func_02044980(0);
    func_020b95c4(arg0);
    M2C_FIELD(arg0, s16 *, 0x60) = 2;
    M2C_FIELD(temp_r4, s16 *, 2) = 2;
    M2C_FIELD(temp_r4, s16 *, 4) = 2;
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffec9c(void *);                      /* extern */

void func_02107810(void *arg0) {
    M2C_UNK (*temp_r1)(arg0);

    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(), 0x20C);
    if (temp_r1 != NULL) {
        temp_r1(arg0);
    }
    func_01ffec9c(arg0);
}

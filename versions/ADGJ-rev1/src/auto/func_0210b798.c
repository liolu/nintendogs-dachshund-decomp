/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0210b7d4();                            /* extern */

void func_0210b798(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 1:
            func_0210b7d4(arg0);
            return;
    }
}

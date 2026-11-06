/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020dc6c4();                            /* extern */
M2C_UNK func_020dc8b0();                            /* extern */

void func_020dc66c(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 2:
            func_020dc8b0(arg0);
            return;
        case 3:
            func_020dc6c4(arg0);
            return;
    }
}

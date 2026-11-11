/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02095524();                                /* extern */
M2C_UNK func_02095610();                            /* extern */
M2C_UNK func_02095784(void *);                      /* extern */

void func_020a31cc(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x2E);
    switch (temp_r1) {                              /* irregular */
        case 1:
            return;
        case 0:
            func_02095610(arg0);
            return;
        case 4:
            if (func_02095524() == 0) {
                return;
            }
            func_02095784(arg0);
            return;
    }
}

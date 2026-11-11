/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098748();                            /* extern */

void func_020986f4(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            M2C_FIELD(arg0, u16 *, 4) = 0x200U;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            return;
        case 0x200:
            func_02098748();
            return;
    }
}

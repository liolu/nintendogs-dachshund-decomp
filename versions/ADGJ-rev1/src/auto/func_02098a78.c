/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02098acc();                            /* extern */

void func_02098a78(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0x0:
            M2C_FIELD(arg0, u16 *, 4) = 0x400U;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            return;
        case 0x400:
            func_02098acc();
            return;
    }
}

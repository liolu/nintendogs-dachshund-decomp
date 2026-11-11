/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021077e0();                            /* extern */
M2C_UNK func_021077f0();                            /* extern */

void func_020d4c04(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 1:
            return;
        case 0:
            func_021077e0(arg0);
            return;
        case 2:
            func_021077f0(arg0);
            return;
    }
}

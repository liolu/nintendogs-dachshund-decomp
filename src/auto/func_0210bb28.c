/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_021077e0();                            /* extern */
M2C_UNK func_0210bb84();                            /* extern */

void func_0210bb28(void *arg0) {
    s16 temp_r1;
    void *temp_r2;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 0:
            temp_r2                         = *M2C_FIELD(arg0, void ***, 0x214);
            M2C_FIELD(temp_r2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x20) | 1);
            func_021077e0(arg0);
            return;
        case 1:
            func_0210bb84(arg0);
            return;
    }
}

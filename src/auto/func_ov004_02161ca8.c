/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov004_02161cf4();                      /* extern */

void func_ov004_02161ca8(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 0:
            return;
        case 3:
            M2C_FIELD(arg0, s32 *, 0xA8) = 0;
            return;
        case 2:
            func_ov004_02161cf4();
            return;
    }
}

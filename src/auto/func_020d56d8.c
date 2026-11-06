/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02068380(void *);                      /* extern */
M2C_UNK func_021077e0();                            /* extern */
M2C_UNK func_021077f0(void *);                      /* extern */

void func_020d56d8(void *arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 1:
            return;
        case 0:
            func_021077e0(arg0);
            return;
        case 2:
            M2C_FIELD(arg0, s32 *, 0xBC) = 0;
            M2C_FIELD(arg0, s32 *, 0xC0) = 0;
            M2C_FIELD(arg0, s32 *, 0xC4) = 0;
            func_02068380(arg0 + 0xC8);
            func_021077f0(arg0);
            return;
    }
}

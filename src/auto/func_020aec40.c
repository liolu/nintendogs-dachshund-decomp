/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020b0e0c();                                /* extern */
extern void *data_02153740;

void func_020aec40(void) {
    s32 temp_r0;

    temp_r0 = func_020b0e0c();
    switch (temp_r0) {                              /* irregular */
        case 2:
            M2C_FIELD(data_02153740, s32 *, 0x98C) = 0x12;
            return;
        case 1:
            M2C_FIELD(data_02153740, s32 *, 0x98C) = 0xD;
            return;
    }
}

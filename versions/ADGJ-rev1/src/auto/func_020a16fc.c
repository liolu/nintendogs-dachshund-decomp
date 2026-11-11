/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200399c();                                /* extern */

void func_020a16fc(void *arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            if (func_0200399c() != 0) {
                M2C_FIELD(arg0, u16 *, 4) = 0x1000U;
                M2C_FIELD(arg0, s16 *, 6) = 0;
            }
            return;
        case 0x1000:
            if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
                M2C_FIELD(arg0, u16 *, 4)    = 1U;
                M2C_FIELD(arg0, s32 *, 0xC)  = 1;
                M2C_FIELD(arg0, s32 *, 0x18) = 1;
                return;
            }
            if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
                M2C_FIELD(arg0, u16 *, 4)    = 1U;
                M2C_FIELD(arg0, s32 *, 0xC)  = 1;
                M2C_FIELD(arg0, s32 *, 0x18) = 9;
            }
            return;
    }
}

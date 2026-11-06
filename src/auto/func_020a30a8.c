/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200399c();                                /* extern */
extern void *data_02153720;

void func_020a30a8(void *arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            if (func_0200399c() != 0) {
                M2C_FIELD(arg0, u16 *, 4) = 0x1100U;
                M2C_FIELD(arg0, s16 *, 6) = 0;
            }
            return;
        case 0x1100:
            if (M2C_FIELD(data_02153720, s16 *, 0x100) == 2) {
                M2C_FIELD(arg0, u16 *, 4)   = 1U;
                M2C_FIELD(arg0, s32 *, 0xC) = 1;
            }
            return;
    }
}

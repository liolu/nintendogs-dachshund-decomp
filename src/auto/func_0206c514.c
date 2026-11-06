/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206a41c();                                /* extern */
extern s32 data_0214e9d0;
extern s32 data_0214e9d4;

void func_0206c514(void) {
    s32 temp_r0;

    temp_r0       = func_0206a41c();
    data_0214e9d4 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_0214e9d0 = 0x06894000;
            return;
        case 0x20:
            data_0214e9d0 = 0x06890000;
            return;
    }
}

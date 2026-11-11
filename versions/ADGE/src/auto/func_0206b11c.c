/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02069024(void);

extern s32 data_0214f470;
extern s32 data_0214f474;

void func_0206b11c(void) {
    s32 temp_r0;

    temp_r0       = func_02069024();
    data_0214f474 = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            data_0214f470 = 0x06894000;
            return;
        case 0x20:
            data_0214f470 = 0x06890000;
            return;
    }
}

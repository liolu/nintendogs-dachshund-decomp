/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e3b2c(void);

extern void *data_02159e70;

void func_020e18f0(void) {
    s32 temp_r0;

    temp_r0 = func_020e3b2c();
    switch (temp_r0) {                              /* irregular */
        case 2:
            M2C_FIELD(data_02159e70, s32 *, 0x1D1C) = 0x12;
            return;
        case 1:
            M2C_FIELD(data_02159e70, s32 *, 0x1D1C) = 0xD;
            return;
    }
}

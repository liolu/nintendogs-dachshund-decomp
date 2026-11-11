/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a34(void);

extern void *data_02159e70;

void func_020e784c(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xB4);
    if (temp_r0 == 3) {
        if (func_02003a34() == 0) {
            return;
        }
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    if (temp_r0 == 4) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    if (M2C_FIELD(data_02159e70, u16 *, 0x11160) == 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
    }
}

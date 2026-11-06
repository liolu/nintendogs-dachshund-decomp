/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039d0();                                /* extern */
extern void *data_02153740;

void func_020a6074(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 < 0x10) {
        M2C_FIELD(arg0, s32 *, 0)     = (s32) (temp_r1 + 1);
        M2C_FIELD(arg0, s32 *, 0x1D4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1D4) - 0x100);
        return;
    }
    if (func_020039d0() != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
    }
}

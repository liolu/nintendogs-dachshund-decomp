#include "m2c.h"
extern s8 data_02154350[];
extern s8 data_02154358[];
void func_02073328();
#pragma opt_propagation off
void func_0208c4fc(void) {
    s8 *base;
    s8 *arg;

    base = data_02154350;
    arg = data_02154358;
    if (M2C_FIELD(base, s32 *, 0x44) == 0) {
        func_02073328(arg, 0x30, 7);
        M2C_FIELD(base, s32 *, 0x40) = 0;
        M2C_FIELD(base, s32 *, 0x44) = 1;
        M2C_FIELD(base, s32 *, 0x4C) = 0;
        M2C_FIELD(base, s16 *, 0x38) = 0;
    }
    M2C_FIELD(base, s32 *, 0x48) = 1;
}

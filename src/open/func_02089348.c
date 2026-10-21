#include "m2c.h"
extern s32 data_0215422c;
extern u16 data_02154234[];
#pragma opt_propagation off
s32 func_02089348(s32 arg0) {
    u16 *base = data_02154234;

    base[arg0] = func_02072278(data_0215422c);
    M2C_FIELD(base, u16 *, 0xA) = arg0;
    return 1;
}

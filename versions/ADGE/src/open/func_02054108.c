#include "m2c.h"
s32 func_02036258(M2C_UNK);
void func_02035fd8(M2C_UNK);
s32 func_0202fa5c(M2C_UNK);
s32 func_0202f9a0(M2C_UNK);
s32 func_02054b30();
s32 func_020545d0();
s32 func_020541ac();
s32 func_02054108(M2C_UNK arg0) {
    s32 temp_r1;
    u16 temp_r2;

    temp_r1 = func_02036258(arg0);
    temp_r2 = *(u16 *) (arg0 + 0xFC);
    if (temp_r2 > 0x320) {
        func_02035fd8(arg0);
        return func_0202fa5c(arg0);
    }
    if (temp_r1 == 0) {
        func_02035fd8(arg0);
        return func_0202f9a0(arg0);
    }
    if (temp_r2 == 0xB4) {
        return func_02054b30(arg0, temp_r1);
    }
    if (temp_r2 == 0xFA) {
        return func_020545d0(arg0, temp_r1);
    }
    if (temp_r2 != 0x320) {
        return 0;
    }
    return func_020541ac(arg0, temp_r1);
}

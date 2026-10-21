#include "m2c.h"
extern u8 data_02154350[];
void func_02070e7c(u8 *, s32, s32);
s32 func_0208dd94(s32 arg0, s32 arg1) {
    u8 *p = data_02154350;
    s32 diff = arg1;

    M2C_FIELD(p, u16 *, 0xE) = arg0;
    if (M2C_FIELD(p, u32 *, 0) != 0) {
        if (M2C_FIELD(p, u32 *, 0x1C) != 0) {
            u16 a = M2C_FIELD(p, u16 *, 0x1A);
            u16 b = M2C_FIELD(p, u16 *, 0x18);

            M2C_FIELD(p, u16 *, 0x18) = 0;
            M2C_FIELD(p, u32 *, 0x1C) = 0;
            diff = a - b;
        }
        func_02070e7c(p, M2C_FIELD(p, s16 *, 0xC) * arg0 / 100, diff);
        return 1;
    }
    return 0;
}

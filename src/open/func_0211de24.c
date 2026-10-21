#include "m2c.h"
s32 func_ov004_0215ab08(void);
void func_02116dec(s32, s32);
#pragma opt_propagation off
s32 func_0211de24(u8 *arg0) {
    s32 v;
    s32 zero;

    v = func_ov004_0215ab08();
    zero = 0;
    switch (v + 1) {
    case 2:
        func_02116dec((s32) arg0, 0x2B);
        return 1;
    case 3:
        M2C_FIELD(arg0, u16 *, 0x2E) = 2;
        M2C_FIELD(arg0, u16 *, 0x30) = (u16) zero;
        M2C_FIELD(arg0, u16 *, 0x100) = 0xB;
        return 1;
    case 4:
        M2C_FIELD(arg0, u16 *, 0x2E) = 2;
        M2C_FIELD(arg0, u16 *, 0x30) = (u16) zero;
        M2C_FIELD(arg0, u16 *, 0x100) = 4;
        return 1;
    case 5:
        M2C_FIELD(arg0, u16 *, 0x2E) = 2;
        M2C_FIELD(arg0, u16 *, 0x30) = (u16) zero;
        M2C_FIELD(arg0, u16 *, 0x100) = 0xF;
        return 1;
    case 6:
        M2C_FIELD(arg0, u16 *, 0x2E) = 2;
        M2C_FIELD(arg0, u16 *, 0x30) = (u16) zero;
        M2C_FIELD(arg0, u16 *, 0x100) = 0x12;
        return 1;
    }
    return zero;
}

#include "m2c.h"
extern void func_0207d3c8();
extern void func_02003970();
extern volatile s32 data_0214cd14;
extern void *data_0214d628;
s32 func_02073a6c(s32, s32);
s32 func_020739c8(s32);
s32 func_02003798(s32 *arg0, s16 arg1) {
    u8 local[0xC];

    M2C_FIELD(local, s16 *, 0) = arg1;
    M2C_FIELD(local, s16 *, 2) = 0;
    M2C_FIELD(local, s32 *, 4) = 0;
    switch (*arg0) {
    case 0x45585048:
        func_0207d3c8(arg0, (s32) func_02003970, &local);
        break;
    case 0x46524D48:
        break;
    }
    return M2C_FIELD(local, s32 *, 4);
}

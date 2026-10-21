#include "m2c.h"
s32 func_02073a6c(s32, s32);
s32 func_020739c8(s32);
extern void func_0207d3c8();
extern void func_02003970();
extern volatile s32 data_0214cd14;
extern void *data_0214d628;
s32 func_02006b9c(s32 arg0) {
    s32 r4;
    r4 = func_02073a6c(arg0, 0x43484152) + 8;
    if ((*(u32 *) (r4 + 0x14) & 0xf000000) == 0) {
        func_020739c8(r4);
    }
    return r4;
}

#include "m2c.h"
extern void *data_02159e70;
s32 func_0209fe30(s32 arg0);
void func_0209dc18(s32 arg0) {
    s32 x = func_0209fe30(arg0);
    s32 r = -0x20 - x % 0x60;

    if (M2C_FIELD(data_02159e70, s32 *, 0xAC) == 3) {
        r = 0;
    }
    M2C_FIELD(0x4001018, s32 *, 0) = 0x1FF0000 & (r << 16);
}

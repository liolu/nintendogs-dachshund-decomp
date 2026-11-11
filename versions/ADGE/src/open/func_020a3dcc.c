#include "m2c.h"
s32 func_0209fe30(s32 arg0);
void func_020a3dcc(s32 arg0) {
    s32 x = func_0209fe30(arg0);

    M2C_FIELD(0x4001018, s32 *, 0) = 0x1FF0000 & ((-0x20 - x % 0x50) << 16);
}

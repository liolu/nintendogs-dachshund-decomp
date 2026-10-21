#include "m2c.h"
void func_0206a3c0(s32, s32, s32, s32, s32);
void func_0210b734(s32 arg0) {
    s32 state;
    s32 v;

    *(u32 *) 0x4001014 = ((M2C_FIELD(arg0, s32 *, 0xC) >> 12) << 16) & 0x1FF0000;
    state = M2C_FIELD(arg0, s32 *, 0);
    if (state == 0 || state == 4) {
        v = M2C_FIELD(arg0, s32 *, 0x10) >> 12;
        func_0206a3c0(0x4001050, 2, 4, v, 16 - v);
        return;
    }
    if (state == 1 || state == 3) {
        v = M2C_FIELD(arg0, s32 *, 0x18) >> 12;
        func_0206a3c0(0x4001050, 0x10, 2, v, 16 - v);
    }
}

#include "m2c.h"
void func_02022b6c(u8 *arg0) {
    s32 a;
    s16 b;
    u8 c;
    u8 d;

    if (M2C_FIELD(arg0, u8 *, 0xA3) == 0) {
        return;
    }
    a = M2C_FIELD(arg0, s16 *, 0xF2) + 0xC;
    c = M2C_FIELD(arg0, u8 *, 0xA6);
    b = M2C_FIELD(arg0, s16 *, 0xF0);
    if (b != a) {
        return;
    }
    d = M2C_FIELD(arg0, u8 *, 0xA5);
    if (d == c) {
        M2C_FIELD(arg0, u16 *, 0x122) += 1;
    }
}

#include "m2c.h"
extern u8 data_0214d624[];
s32 func_020d3b58(void) {
    s32 r = -1;
    u8 b;
    u8 a;

    if ((M2C_FIELD(data_0214d624, u16 *, 2) & 2) != 0) {
        b = M2C_FIELD(data_0214d624, u8 *, 1);
        a = M2C_FIELD(data_0214d624, u8 *, 0);
        if (b >= 0x9A && b <= 0xB7) {
            if (a >= 0x20 && a <= 0x6F) {
                r = 0;
            } else if (a >= 0x90 && a <= 0xDF) {
                r = 1;
            }
        }
    }
    return r;
}

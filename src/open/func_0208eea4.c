#include "m2c.h"
extern u8 data_0215446c[];
extern u8 data_0215422c[];
s32 func_02091bb8(void);
void func_0208eea4(s32 arg0) {
    u8 *p;

    if (func_02091bb8() == 0xff) {
        return;
    }
    p = data_0215446c;
    M2C_FIELD(p, u16 *, 4) = 0;
    if (arg0 == 0x18) {
        M2C_FIELD(p, u32 *, 0x14) = 1;
        return;
    }
    if (arg0 == 0xd && M2C_FIELD(data_0215422c, u32 *, 0x40) == 0) {
        return;
    }
    M2C_FIELD(p, u32 *, 0x14) = 0;
}

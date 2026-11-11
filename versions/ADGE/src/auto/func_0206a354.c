/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a354(s32 arg0, s32 arg1) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0);
    if (arg1 < 0) {
        if ((temp_r3 & 0xC0) == 0x80) {
            M2C_FIELD(arg0, u16 *, 0) = (u16) ((temp_r3 & ~0xC0) | 0xC0);
        }
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0 - arg1);
        return;
    }
    if ((temp_r3 & 0xC0) == 0xC0) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) ((temp_r3 & ~0xC0) | 0x80);
    }
    M2C_FIELD(arg0, s16 *, 4) = (s16) arg1;
}

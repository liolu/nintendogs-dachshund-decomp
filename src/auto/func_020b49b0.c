/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039d0();                                /* extern */
extern void *data_02153740;

void func_020b49b0(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02153740, s32 *, 0xB4);
    if (temp_r0 == 3) {
        if (func_020039d0() == 0) {
            return;
        }
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
        return;
    }
    if (temp_r0 == 4) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
        return;
    }
    if (M2C_FIELD(data_02153740, u16 *, 0xFDD0) == 0) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
    }
}

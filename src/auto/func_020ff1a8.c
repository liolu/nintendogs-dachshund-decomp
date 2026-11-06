/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039ec();                                /* extern */
M2C_UNK func_0208cd9c();                            /* extern */
M2C_UNK func_02105f70();                            /* extern */
extern void *data_02153740;

void func_020ff1a8(void) {
    if (M2C_FIELD(data_02153740, u16 *, 0xFDD0) != 0) {
        return;
    }
    if (M2C_FIELD(data_02153740, s32 *, 0xB4) == 0x17) {
        if (func_020039ec() == 0) {
            return;
        }
        func_0208cd9c();
        func_02105f70();
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
}

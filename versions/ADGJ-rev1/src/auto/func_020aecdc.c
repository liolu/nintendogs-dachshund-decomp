/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153740;
extern void *data_02153894;

void func_020aecdc(s32 arg0) {
    M2C_FIELD(data_02153740, s32 *, 0x98C) = 2;
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 2) {
        M2C_FIELD(data_02153894, s32 *, 0x48) = 1;
    }
    M2C_FIELD(data_02153740, s32 *, 0xFDD8) = arg0;
}

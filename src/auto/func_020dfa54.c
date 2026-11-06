/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020039d0();                                /* extern */
extern void *data_02153740;

void func_020dfa54(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x900) == -1) {
        if (func_020039d0() == 0) {
            return;
        }
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
}

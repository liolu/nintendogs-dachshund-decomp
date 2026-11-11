/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153740;

void func_020bf87c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
    }
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02128f80;

void func_0207e95c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02128f80;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
}

/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;
extern void *data_02159fc4;

void func_020e19a0(s32 arg0) {
    M2C_FIELD(data_02159e70, s32 *, 0x1D1C) = 2;
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 2) {
        M2C_FIELD(data_02159fc4, s32 *, 0x48) = 1;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x11168) = arg0;
}

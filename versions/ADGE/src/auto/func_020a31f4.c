/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e23fc(M2C_UNK);

void func_020a31f4(s32 arg0) {
    func_020e23fc(1);
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) M2C_FIELD(arg0, s32 *, 0x10);
}

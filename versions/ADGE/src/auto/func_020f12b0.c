/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f0fd8(M2C_UNK);

void func_020f12b0(s32 arg0) {
    func_020f0fd8(arg0 + 0x40);
    func_020f0fd8(arg0 + 0x60);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

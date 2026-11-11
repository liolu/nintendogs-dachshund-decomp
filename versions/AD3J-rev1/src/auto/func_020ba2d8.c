/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02003d1c(M2C_UNK);
void func_020be13c(M2C_UNK);

void func_020ba2d8(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    func_020be13c(arg0 + 0xBC);
    func_020be13c(arg0 + 0xDC);
    func_020be13c(arg0 + 0xFC);
    func_02003d1c(0x10);
}

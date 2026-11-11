/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003d80(M2C_UNK);
void func_020f1098(M2C_UNK);

void func_020ed1f8(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    func_020f1098(arg0 + 0xBC);
    func_020f1098(arg0 + 0xDC);
    func_020f1098(arg0 + 0xFC);
    func_02003d80(0x10);
}

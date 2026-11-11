/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207d234(M2C_UNK, M2C_UNK);
void func_020ca530(M2C_UNK, M2C_UNK);

void func_020ca6f4(s32 arg0) {
    func_020ca530(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_0207d234(arg0 + 0x24, 0x1C);
    func_0207d234(arg0 + 0x30, 0x1C);
    func_0207d234(arg0 + 0x3C, 0x1C);
}

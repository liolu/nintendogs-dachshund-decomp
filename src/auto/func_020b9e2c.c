/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0207d0e0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0213f304;
extern M2C_UNK data_0213f314;

void func_020b9e2c(s32 arg0) {
    func_0207d0e0(0x1F, 0, M2C_FIELD(arg0, s32 *, 0xC), 0xE0);
    func_0207d0e0(M2C_FIELD(&data_0213f304, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 8), 0x4000);
    func_0207d0e0(M2C_FIELD(&data_0213f314, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0x18), 0x800);
    M2C_FIELD(arg0, s32 *, 0) = 0;
}

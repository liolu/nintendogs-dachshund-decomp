/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02022b6c(M2C_UNK);
M2C_UNK func_02027530(M2C_UNK);
void func_0203e5e8(M2C_UNK, M2C_UNK);
M2C_UNK func_0208a56c(M2C_UNK, M2C_UNK);

void func_0200dee8(s32 arg0) {
    func_02022b6c(arg0);
    if (((u32) M2C_FIELD(arg0, u16 *, 0xFC) > 1U) && (M2C_FIELD(arg0, s32 *, 0x464) == 0) &&
        (M2C_FIELD(arg0, s32 *, 0x2A4) == 0)) {
        func_0208a56c(func_02027530(arg0), 0x44);
        func_0208a56c(func_02027530(arg0), 0x43);
        M2C_FIELD(arg0, s32 *, 0x464) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u16 *, 0xFC) <= 0x3CU) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2A4) != 0) {
        return;
    }
    func_0203e5e8(arg0, 0x412);
}

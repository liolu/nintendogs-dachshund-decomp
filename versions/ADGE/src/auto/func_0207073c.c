/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02072340(M2C_UNK);
M2C_UNK func_0207d038(M2C_UNK, M2C_UNK);
void func_0207d050(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02150264;

s32 func_0207073c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = (arg0 * 0x24) + (s32) &data_02150264;
    temp_r0 = func_0207d038(temp_r5 + 0xC, 0);
    if (temp_r0 == 0) {
        return 0;
    }
    func_0207d050(temp_r5 + 0xC, temp_r0);
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg1;
    M2C_FIELD(arg1, s32 *, 8)      = temp_r0;
    func_02072340(M2C_FIELD(temp_r0, s32 *, 8));
    return M2C_FIELD(temp_r0, s32 *, 8);
}

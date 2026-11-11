/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02070638(M2C_UNK);
void func_02070698(M2C_UNK, M2C_UNK);
void func_0207d050(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214fe18;

void func_02070430(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 != 0) {
        func_0207d050(temp_r4, arg0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_0207d050((s32) &data_0214fe18, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = (s8) arg1;
    if (temp_r4 != 0) {
        func_02070698(temp_r4, arg0);
    }
    func_02070638(arg0);
}

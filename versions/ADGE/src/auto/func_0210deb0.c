/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02044710(M2C_UNK, M2C_UNK);
M2C_UNK func_020449ac(M2C_UNK);
M2C_UNK func_020c7b00(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020d04c0(M2C_UNK, M2C_UNK);

extern void *data_0215a044;

void func_0210deb0(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = M2C_FIELD(data_0215a044, s32 *, 0x24);
    temp_r4 = func_020449ac(0);
    func_020d04c0(temp_r5, arg0);
    func_02044710(0, temp_r5);
    if (temp_r4 == 0) {
        return;
    }
    func_020c7b00(temp_r4, (s32) M2C_FIELD(temp_r5, u16 *, 0), (s32) M2C_FIELD(temp_r5, u8 *, 2));
}

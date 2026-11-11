/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d5c44(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020e2ba0(s32 arg0) {
    s32 temp_r2;

    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 - 1);
    temp_r2           = *(M2C_UNK *) arg0;
    if (temp_r2 < 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    func_020d5c44(2, arg0 + 0xF0, temp_r2, 0x10);
}

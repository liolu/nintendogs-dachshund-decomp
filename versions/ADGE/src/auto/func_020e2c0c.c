/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d5c44(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020d6a1c(void);

void func_020e2c0c(s32 arg0) {
    s32 temp_r2;

    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    temp_r2           = *(M2C_UNK *) arg0;
    if (temp_r2 > 0x10) {
        func_020d6a1c();
        return;
    }
    func_020d5c44(2, arg0 + 0xF0, temp_r2, 0x10);
}

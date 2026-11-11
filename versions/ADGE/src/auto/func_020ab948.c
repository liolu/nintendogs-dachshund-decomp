#include "engine.h"
#include "m2c.h"

void func_020a7460(M2C_UNK);

void func_020ab948(s32 arg0) {
    void *temp_r2;

    temp_r2                         = *M2C_FIELD(arg0, void ***, 0x214);
    M2C_FIELD(temp_r2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x20) | 1);
    func_020a7460(arg0);
}

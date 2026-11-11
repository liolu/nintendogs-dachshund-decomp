#include "engine.h"
#include "m2c.h"

extern void *data_02159e38;

void func_020cecb0(s32 arg0) {
    void *temp_r1;

    temp_r1                          = M2C_FIELD(data_02159e38, void **, 0x141C);
    M2C_FIELD(temp_r1, s16 *, 0x7E)  = (s16) arg0;
    M2C_FIELD(temp_r1, u16 *, 0x6AE) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x6AE) | 1);
}

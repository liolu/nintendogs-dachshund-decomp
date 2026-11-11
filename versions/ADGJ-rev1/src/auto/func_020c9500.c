#include "m2c.h"

extern void *data_02154c48;

void func_020c9500(s16 arg0) {
    void *temp_r1;

    temp_r1                          = M2C_FIELD(data_02154c48, void **, 0x141C);
    M2C_FIELD(temp_r1, s16 *, 0x7E)  = arg0;
    M2C_FIELD(temp_r1, u16 *, 0x6AE) = (u16) (M2C_FIELD(temp_r1, u16 *, 0x6AE) | 1);
}

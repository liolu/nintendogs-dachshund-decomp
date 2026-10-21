#include "m2c.h"
extern void *data_0215a04c;
extern void func_02111b88();
void func_021110a0(void) {
    M2C_UNK *temp_r4;
    M2C_UNK *temp;

    temp_r4 = data_0215a04c;
    func_02111b88(temp_r4, 0xD);
    M2C_FIELD(temp_r4, u16 *, 4) = 8;

    temp = data_0215a04c;
    M2C_FIELD(temp, u16 *, 0x20) |= 1;
    M2C_FIELD(temp, u16 *, 0x20) |= 2;

    temp = (M2C_UNK *) ((s8 *) data_0215a04c + 0x20);
    M2C_FIELD(temp, u16 *, 0x14) |= 1;
    M2C_FIELD(temp, u16 *, 0x14) |= 2;

    temp = (M2C_UNK *) ((s8 *) data_0215a04c + 0x20);
    M2C_FIELD(temp, u16 *, 0x28) |= 1;
    M2C_FIELD(temp, u16 *, 0x28) |= 2;

    M2C_FIELD(temp_r4, u16 *, 0x1C) = 0;
}

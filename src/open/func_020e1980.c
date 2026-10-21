#include "m2c.h"
extern void *data_02159e70;
void func_020e1980(void) {
    void *temp_r0;
    temp_r0 = (char *) data_02159e70 + 0xC4;
    M2C_FIELD(temp_r0, s32 *, 0x254) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x268) = 0;
}

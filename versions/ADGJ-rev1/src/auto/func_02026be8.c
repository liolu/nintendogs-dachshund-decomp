#include "m2c.h"

void func_02026be8(void *arg0, s32 arg1) {
    s16 temp_ip;

    temp_ip                       = M2C_FIELD(arg0, s16 *, 0x108);
    M2C_FIELD(arg0, s16 *, 0x108) = (s16) (temp_ip + ((s32) (M2C_FIELD(arg0, s32 *, 0x474) * (arg1 - temp_ip)) >> 0xC));
}

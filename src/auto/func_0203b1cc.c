#include "m2c.h"

void func_0203b1cc(void *arg0) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_r3;

    temp_r3                       = M2C_FIELD(arg0, s32 *, 0x2F4);
    M2C_FIELD(arg0, s32 *, 0x3D8) = (s32) (temp_r3 + ((M2C_FIELD(arg0, s32 *, 0x300) - temp_r3) * 0x10));
    temp_ip                       = M2C_FIELD(arg0, s32 *, 0x2F8);
    M2C_FIELD(arg0, s32 *, 0x3DC) = (s32) (temp_ip + ((M2C_FIELD(arg0, s32 *, 0x304) - temp_ip) * 0x10));
    temp_ip_2                     = M2C_FIELD(arg0, s32 *, 0x2FC);
    M2C_FIELD(arg0, s32 *, 0x3E0) = (s32) (temp_ip_2 + ((M2C_FIELD(arg0, s32 *, 0x308) - temp_ip_2) * 0x10));
    M2C_FIELD(arg0, s16 *, 0x108) = 0;
}

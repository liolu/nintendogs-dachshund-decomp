#include "engine.h"
#include "m2c.h"

void func_0203b40c(s32 arg0) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_r3;

    temp_r3                       = M2C_FIELD(arg0, s32 *, 0x2DC);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) (temp_r3 + ((M2C_FIELD(arg0, s32 *, 0x2E8) - temp_r3) * 0x10));
    temp_ip                       = M2C_FIELD(arg0, s32 *, 0x2E0);
    M2C_FIELD(arg0, s32 *, 0x3B8) = (s32) (temp_ip + ((M2C_FIELD(arg0, s32 *, 0x2EC) - temp_ip) * 0x10));
    temp_ip_2                     = M2C_FIELD(arg0, s32 *, 0x2E4);
    M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) (temp_ip_2 + ((M2C_FIELD(arg0, s32 *, 0x2F0) - temp_ip_2) * 0x10));
    M2C_FIELD(arg0, s16 *, 0x12E) = 0;
}

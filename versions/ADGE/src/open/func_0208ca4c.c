#include "m2c.h"
extern u8 data_02154350[];
void func_020733c0(u8 *, s32);
void func_02070bb4(u8 *, s32, s32);
void func_0208ca4c(s16 arg0) {
    s32 n = arg0 * 0x12C;
    s32 v = (n << 8) / 127;

    M2C_FIELD(data_02154350, u16 *, 0x30) = arg0;
    M2C_FIELD(data_02154350, u32 *, 0x3C) = v;
    func_020733c0(data_02154350, 0x40);
    func_02070bb4(data_02154350, 0xF, M2C_FIELD(data_02154350, s16 *, 0x30));
    M2C_FIELD(data_02154350, u32 *, 0x40) = 1;
}

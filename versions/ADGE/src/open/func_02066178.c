#include "m2c.h"
extern s8 data_0214ec20[];
extern s8 data_0214f220[];
void func_0206cfe0();
void func_020661d0();
#pragma opt_propagation off
void func_0206cfe0(s32, s32, s32, s32);
void func_020661d0(u32, u32);
#pragma opt_propagation off
#pragma opt_propagation off
void func_02066178(void) {
    s8 *base;
    u32 reg;

    base = data_0214ec20;
    func_0206cfe0(M2C_FIELD(base, s32 *, 0x24), 0x4100010, M2C_FIELD(base, s32 *, 0x1C), 0x200);
    reg = M2C_FIELD(base, u32 *, 0x18);
    func_020661d0((reg >> 8) | 0xB7000000, reg << 24);
    *(u32 *) 0x40001A4 = M2C_FIELD(data_0214f220, u32 *, 4);
}

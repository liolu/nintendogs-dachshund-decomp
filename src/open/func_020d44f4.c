#include "m2c.h"
extern void *data_02159e64;
void func_0206bcb0(s32, s32, s32);
void func_0206bc48(s32, s32, s32);
void func_0206b3dc(s32, s32, s32);
void func_0206b5e4(s32, s32, s32);
void func_0206b71c(s32, s32, s32);
void func_0206b924(s32, s32, s32);
void func_020d44f4(void) {
    M2C_FIELD(data_02159e64, u16 *, 0x6C) = 0;
    M2C_FIELD(data_02159e64, u16 *, 0x7A) = 0xFFFF;
    func_0206bcb0((s32) ((s8 *) data_02159e64 + 0x1C), 0x1C0, 0x40);
    func_0206bc48((s32) ((s8 *) data_02159e64 + 0x1C), 0x1C0, 0x40);
    func_0206b3dc((s32) M2C_FIELD(M2C_FIELD(data_02159e64, void **, 0), void **, 0x14), 0x1800, 0x800);
    func_0206b5e4((s32) M2C_FIELD(M2C_FIELD(data_02159e64, void **, 0), void **, 0x14), 0x1800, 0x800);
    func_0206b71c((s32) ((s8 *) M2C_FIELD(data_02159e64, void **, 4) + 0xC), 0, 0x800);
    func_0206b924((s32) ((s8 *) M2C_FIELD(data_02159e64, void **, 4) + 0xC), 0, 0x800);
    *(u32 *) 0x04000000 &= ~0x800;
    *(u32 *) 0x04001000 &= ~0x100;
    M2C_FIELD(data_02159e64, s32 *, 0xA8) = 1;
}

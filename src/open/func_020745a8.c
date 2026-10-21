#include "m2c.h"
extern s32 data_0213cb14;
extern s32 data_0213cb10;
extern s32 data_0213cb0c;
extern void func_0206cbf8(u32 value, void *dest, u32 size);
void func_020745a8(M2C_UNK arg0, M2C_UNK arg1) {
    volatile s32 zero;

    zero = 0;
    func_0206cbf8(zero, (void *) arg0, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC) = data_0213cb14;
    M2C_FIELD(arg0, s32 *, 0x14) = data_0213cb10;
    M2C_FIELD(arg0, s32 *, 0x1C) = data_0213cb0c;
    M2C_FIELD(arg0, s32 *, 0x4) = arg1;
}

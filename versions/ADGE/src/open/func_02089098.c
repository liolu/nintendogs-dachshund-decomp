#include "m2c.h"
extern M2C_UNK data_0215424c;
extern M2C_UNK data_02154350;
extern M2C_UNK data_0215422c;
void func_0208dd94(M2C_UNK a, M2C_UNK b);
void func_02073328(M2C_UNK a, s32 b, s32 c);
void func_02070bb4(void *a, s32 b, s32 c);
void func_02089098(void) {
    M2C_UNK *p = &data_0215424c;

    if (*p != 0) {
        return;
    }
    func_0208dd94(0, 0);
    func_02073328((M2C_UNK) p, (s32) M2C_FIELD(&data_02154350, s16 *, 0x20), 0x14);
    func_02070bb4(p, 8, (s32) M2C_FIELD(&data_0215422c, s16 *, 0x24));
}

#include "m2c.h"
extern M2C_UNK data_02150e58;
extern void func_02009dec(void *, void *, void *);
void func_0202a308(s32 arg0) {
    u32 local[3];

    local[0] = M2C_FIELD(&data_02150e58, u32 *, 0x54);
    local[1] = M2C_FIELD(&data_02150e58, u32 *, 0x60);
    local[2] = M2C_FIELD(&data_02150e58, u32 *, 0x6C);
    func_02009dec(local, (void *) (arg0 + 0x1A4), (void *) (arg0 + 0x18C));
}

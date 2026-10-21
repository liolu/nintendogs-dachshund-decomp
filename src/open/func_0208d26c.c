#include "m2c.h"
extern u8 data_02154350[];
void func_02070f88(void *, s32);
void func_02070e7c(void *, s32, s32);
extern void func_02070f88(void *p, s32 arg);
extern void func_02070e7c(void *p, s32 a, s32 b);
s32 func_0208d26c(s32 arg0) {
    u8 *p = data_02154350;
    u8 *q;
    s32 diff;

    if (M2C_FIELD(p, u32 *, 0x2C) != 0) {
        func_02070f88(p + 4, arg0);
        M2C_FIELD(p, u32 *, 0x2C) = 0;
        q = data_02154350;
        diff = 0x3C;
        M2C_FIELD(q, u16 *, 0xE) = 0x64;
        if (M2C_FIELD(q, u32 *, 0) != 0) {
            if (M2C_FIELD(q, u32 *, 0x1C) != 0) {
                u16 a = M2C_FIELD(q, u16 *, 0x1A);
                u16 b = M2C_FIELD(q, u16 *, 0x18);

                M2C_FIELD(q, u16 *, 0x18) = 0;
                M2C_FIELD(q, u32 *, 0x1C) = 0;
                diff = a - b;
            }
            func_02070e7c(q, M2C_FIELD(q, s16 *, 0xC) * 100 / 100, diff);
        }
        return 1;
    }
    return 0;
}

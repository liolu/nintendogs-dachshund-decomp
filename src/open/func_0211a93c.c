#include "m2c.h"

u32 func_02080978(void);
void func_0211aee8(void);
void func_0211aa40(void);

void func_0211a93c(s32 arg0) {
    u16 state = M2C_FIELD(arg0, u16 *, 4);
    u32 rand;

    switch (state) {
    case 0:
        M2C_FIELD(arg0, u16 *, 4) = 0x500;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        break;
    case 0x500:
        M2C_FIELD(arg0, s16 *, 6) += 1;
        if (M2C_FIELD(arg0, s16 *, 6) > 0x1E) {
            func_0211aee8();
        }
        if (M2C_FIELD(arg0, s16 *, 6) >= 0x1E && M2C_FIELD(arg0, s16 *, 6) % 0x1E == 0) {
            rand = func_02080978() * 0x10DCD + 1;
            M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (((u32) (u16) rand * 0x15) >> 16);
        }
        if (M2C_FIELD(arg0, s16 *, 0x1C) > 0) {
            M2C_FIELD(arg0, s16 *, 0x1C) -= 1;
        }
        if (M2C_FIELD(arg0, s16 *, 0x1C) == 0) {
            M2C_FIELD(arg0, s16 *, 0x1C) = -1;
            func_0211aa40();
        }
        if (M2C_FIELD(arg0, s16 *, 6) > 0xC8) {
            M2C_FIELD(arg0, u16 *, 4) = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
        break;
    }
}

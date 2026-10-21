#include "m2c.h"
extern void *data_0215a048;
void func_020b2d2c(void *, s32, s32, s32);
void func_020c2fec(void *, s32);
void func_020c2ea8(s32 arg0) {
    s32 newMode;
    s32 step;

    step = (M2C_FIELD(data_0215a048, u16 *, 6) != 0x12) ? 0x19A : 0xCD;
    switch (M2C_FIELD(arg0, u8 *, 0x2C)) {
    case 1:
        M2C_FIELD(arg0, u16 *, 0x38) = M2C_FIELD(arg0, u16 *, 0x38) + 8;
        func_020b2d2c((void *) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x3C));
        break;
    case 0:
        M2C_FIELD(arg0, u16 *, 0x38) = M2C_FIELD(arg0, u16 *, 0x38) - 8;
        func_020b2d2c((void *) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x3C));
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(arg0, s32 *, 0x34) + step;
        func_020b2d2c((void *) (arg0 + 4), M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, u16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x3C));
        M2C_FIELD(arg0, s32 *, 0x18) = M2C_FIELD(arg0, s32 *, 0x18) + 0x14000;
        break;
    }
    M2C_FIELD(arg0, s16 *, 0x40) = M2C_FIELD(arg0, s16 *, 0x40) - 1;
    if (M2C_FIELD(arg0, s16 *, 0x40) < 0) {
        switch (M2C_FIELD(arg0, u8 *, 0x2C)) {
        case 2:
            newMode = M2C_FIELD(arg0, s32 *, 0x30) != 0;
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
            newMode = 2;
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
            newMode = 2;
            break;
        }
        func_020c2fec((void *) arg0, newMode);
    }
}

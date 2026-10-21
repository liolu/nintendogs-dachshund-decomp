#include "m2c.h"
void func_02027644(M2C_UNK, M2C_UNK);
void func_01ff832c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern u32 *data_0214da84;
void func_0204d5d4(s32 arg0, s32 arg1) {
    u32 *seed;
    u32 r;
    u16 sel;

    if (arg1 == 0) {
        return;
    }
    switch (M2C_FIELD(arg0, s32 *, 0x464)) {
    case 0:
        func_02027644(arg1, arg0 + 0x3B4);
        func_01ff832c(0x6000, arg0 + 0x18C, arg0 + 0x3B4, arg0 + 0x3B4);
        break;
    case 1:
        func_02027644(arg1, arg0 + 0x3B4);
        func_01ff832c(-0x6000, arg0 + 0x18C, arg0 + 0x3B4, arg0 + 0x3B4);
        break;
    case 2:
        func_02027644(arg1, arg0 + 0x3B4);
        func_01ff832c(-0x3000, arg0 + 0x198, arg0 + 0x3B4, arg0 + 0x3B4);
        func_01ff832c(0x6000, arg0 + 0x18C, arg0 + 0x3B4, arg0 + 0x3B4);
        break;
    case 3:
        func_02027644(arg1, arg0 + 0x3B4);
        func_01ff832c(-0x3000, arg0 + 0x198, arg0 + 0x3B4, arg0 + 0x3B4);
        func_01ff832c(-0x6000, arg0 + 0x18C, arg0 + 0x3B4, arg0 + 0x3B4);
        break;
    }
    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    sel = (u16) (((u16) r * 60u) >> 16);
    if (sel != 0) {
        return;
    }
    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    M2C_FIELD(arg0, s32 *, 0x464) = (u16) ((r << 16) >> 30);
}

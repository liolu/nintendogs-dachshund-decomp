#include "m2c.h"
extern u32 *data_0214da84;
void func_0203e5e8(M2C_UNK, M2C_UNK);
s32 func_02036258(M2C_UNK);
s32 func_0204469c(void);
s32 func_0202fa5c(M2C_UNK);
s32 func_0204f918(s32 arg0) {
    u32 *seed;
    u32 r;
    u16 sel;
    u16 bit;
    s32 tmp;

    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    sel = (u16) (((u16) r * 10u) >> 16);
    switch (sel) {
    case 0:
        func_0203e5e8(arg0, 0x2CF);
        return 1;
    case 1:
        func_0203e5e8(arg0, 0x2D0);
        return 1;
    case 2:
        func_0203e5e8(arg0, 0x2D1);
        return 1;
    case 3:
        func_0203e5e8(arg0, 0x2D2);
        return 1;
    case 4:
        func_0203e5e8(arg0, 0x2D3);
        return 1;
    case 5:
        func_0203e5e8(arg0, 0x2D4);
        return 1;
    case 6:
        func_0203e5e8(arg0, 0x2D6);
        return 1;
    case 7:
        func_0203e5e8(arg0, 0x2D7);
        return 1;
    }
    tmp = func_02036258(arg0);
    if (!(func_0204469c() & 0x20)) {
        return func_0202fa5c(arg0);
    }
    if (tmp == 0) {
        return 0;
    }
    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    bit = (u16) ((r << 16) >> 31);
    switch (bit) {
    case 0:
        func_0203e5e8(arg0, 0x2CD);
        return 1;
    case 1:
        func_0203e5e8(arg0, 0x2CE);
        return 1;
    default:
        return 0;
    }
}

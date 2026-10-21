#include "m2c.h"
extern void *data_02159fe4;
extern void *data_02159e70;
s32 func_0206cbc4(u16, s32, s32);
s32 func_020034f0(s32, s32);
extern s16 data_02147e8c[];
void func_020e8194(s32 arg0, s32 arg1) {
    volatile u16 z = 0;
    s32 v;
    s32 size;

    data_02159fe4 = (void *) arg0;
    func_0206cbc4(z, arg0, 0xA8);
    v = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    size = 0x19000;
    switch (v) {
    case 9:
        size = 0x40000;
        break;
    case 0xA:
        size = 0x1B800;
        break;
    }
    M2C_FIELD(data_02159fe4, s32 *, 4) = func_020034f0(arg1, size);
}

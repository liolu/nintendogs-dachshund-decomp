#include "m2c.h"
s32 func_01ffdb08(s32);
s32 func_020280f0();
s32 func_0202816c();
s32 func_020cabcc(s32, s32);
extern void *data_0215a04c;
extern u8 data_0214cad0[];
s32 func_0211cda0(s32 arg0, s32 arg1) {
    s32 r4 = (s32) data_0214cad0;
    s32 t = func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE));

    switch (arg0) {
        case 0x30002:
            r4 = func_0202816c() + 0x78;
            break;
        case 0x30005:
            if (t != 0) {
                r4 = func_020cabcc(func_020280f0(), arg1);
            }
            break;
    }
    return r4;
}

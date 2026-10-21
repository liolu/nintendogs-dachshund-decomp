#include "m2c.h"
extern void *data_0215a064;
extern u8 data_0214caec[];
s32 func_020ce86c(void);
s32 func_020e5458(void);
s32 func_01ffdb08(s32);
s32 func_0202816c(s32);
s32 func_020280f0(s32);
s32 func_020cabcc(s32, s32);
s32 func_0212472c(u32 arg0, s32 arg1) {
    s32 r = (s32) data_0214caec;

    switch (arg0) {
    case 0x30000:
        r = func_020ce86c();
        break;
    case 0x30002:
        if (arg1 != 0) {
            r = func_020e5458();
        } else {
            r = func_0202816c(func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x11C))) + 0x78;
        }
        break;
    case 0x3000D: {
        s32 base = func_0202816c(func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x11C))) + 0x90;
        r = M2C_FIELD(data_0215a064, s16 *, 0x11E) * 0x3C + base;
        r += 0x12;
        break;
    }
    case 0x30005: {
        s32 v = func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x11C));
        if (v != 0) {
            r = func_020cabcc(func_020280f0(v), arg1);
        }
        break;
    }
    }
    return r;
}

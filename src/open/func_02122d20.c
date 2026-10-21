#include "m2c.h"
extern void *data_0215a064;
extern u8 data_0214cae8[];
s32 func_01ffdb08(s32);
s32 func_0202816c(s32);
s32 func_020280f0(s32);
s32 func_020cabcc(s32, s32);
s32 func_020e5458(void);
s32 func_02122d20(s32 arg0, s32 arg1) {
    s32 r = (s32) data_0214cae8;

    switch (arg0) {
    case 0x30002:
        r = func_0202816c(func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x112))) + 0x78;
        break;
    case 0x30005: {
        s32 v = func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x112));
        if (v != 0) {
            r = func_020cabcc(func_020280f0(v), arg1);
        }
        break;
    }
    case 0x3000D:
        r = func_020e5458();
        break;
    }
    return r;
}

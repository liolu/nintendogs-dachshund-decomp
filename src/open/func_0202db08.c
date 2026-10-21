#include "m2c.h"

extern void *data_0215a064;
u16 func_02068480();
s32 func_0202dbc4();
s32 func_0202dff8();
s32 func_0202e1e0();

#pragma opt_propagation off

#pragma opt_propagation off
s32 func_0202db08(s32 arg0, s32 arg1) {
    u16 ret;
    s32 ok;
    s32 r;

    if (M2C_FIELD(data_0215a064, s32 *, 0x94) * M2C_FIELD(data_0215a064, s32 *, 0x94) +
        M2C_FIELD(data_0215a064, s32 *, 0x98) * M2C_FIELD(data_0215a064, s32 *, 0x98) > 0x19) {
        ret = func_02068480(M2C_FIELD(data_0215a064, s32 *, 0x94), M2C_FIELD(data_0215a064, s32 *, 0x98));
        ok = 1;
    } else {
        ok = 0;
    }
    if (ok) {
        if (func_0202dbc4(arg0) != 0) {
            return func_0202e1e0(arg0, arg1, ret);
        }
        r = func_0202dff8(arg1, ret);
        if (r == 0) {
            return 0;
        }
        M2C_FIELD(arg0, u16 *, 0xEA) = r + 0x1DE + (s16) arg1 * 5;
        return 1;
    }
    return 0;
}

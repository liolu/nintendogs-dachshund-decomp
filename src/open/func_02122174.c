#include "m2c.h"

extern u16 *data_0215a04c;
extern void *data_0215a064;
extern u16 data_0214d5fc;
extern void func_0208e824(s32);

s32 func_02122174(s32 arg0) {
    s32 ret;
    s32 obj;
    s32 v;
    s32 r;

    ret = 0;
    if (*data_0215a04c == 0) {
        v = 0;
        if (M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) {
            v = 1;
        } else if ((u16) (M2C_FIELD(&data_0214d5fc, u16 *, 2) & 0xCF3) != 0) {
            v = 1;
        }
    } else {
        v = 1;
    }
    if (func_020429fc() != 0 && v != 0) {
        obj = func_01ffdb08(func_02042a2c());
        r = func_02027f68(obj, 3);
        if (*data_0215a04c == 0) {
            func_0208e824(0x3D);
        }
        if (r >= 0x2710 && *data_0215a04c == 0) {
            func_020cffa8(func_0202816c(obj), -1);
            func_02028174(obj);
            func_020426ec();
        } else {
            ret = 1;
            func_02116dec(arg0, 0x10);
            func_02116d20(arg0, 0);
            if (*data_0215a04c != 9) {
                func_02118c10(arg0);
            }
        }
    }
    return ret;
}

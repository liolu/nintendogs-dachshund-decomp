#include "m2c.h"
s32 func_01ffdb08(s32 arg0);
s32 func_0202816c(s32 arg0);
void *func_020ce154(s32 arg0);
s32 func_020cbbe8(s32 arg0, s32 arg1, s32 arg2);
extern void *data_0215a04c;
extern void *data_0215a050;
extern void *data_02159e30;
extern u8 data_02131358[];

s32 func_021211d8(s32 arg0, s32 arg1) {
    s32 ret = 0;
    s16 found = -1;
    s16 i;
    u8 *base;
    u16 *p;

    base = data_0215a04c;
    p = (u16 *) (base + 0x20);
    for (i = 0; i < 3; i++, p = (u16 *) ((u8 *) p + 0x14)) {
        u16 f = *p;
        if (f & 1) {
            if (f & 2) {
                found = i;
                break;
            }
        }
    }
    switch (arg0) {
    case 0x30002:
        {
            s32 x = 0;
            switch (arg1) {
            case 0:
                x = func_01ffdb08(M2C_FIELD(base, s16 *, 0xE));
                break;
            case 1:
                x = func_01ffdb08(found);
                break;
            default:
                break;
            }
            ret = func_0202816c(x) + 0x78;
        }
        break;
    case 0x30000:
        if (arg1 == 1) {
            s32 tmp = M2C_FIELD(data_02159e30, s32 *, 0x38);
            s16 *q = (s16 *) func_020ce154(M2C_FIELD(data_0215a050, s16 *, 4));
            ret = func_020cbbe8(tmp, M2C_FIELD(data_02131358 + q[0] * 0xC, s32 *, 8), 1);
        }
        break;
    }
    return ret;
}

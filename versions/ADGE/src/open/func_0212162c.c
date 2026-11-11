#include "m2c.h"
extern void *data_0215a04c;
s32 func_0212162c(s32 arg0) {
    s32 result = 0;

    if (arg0 == 0x30000) {
        func_01ffdb08((s32) M2C_FIELD(data_0215a04c, s16 *, 0x1C));
        func_0202816c();
        result = func_020cf098() + 0xC;
    }
    return result;
}

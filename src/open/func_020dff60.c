#include "m2c.h"
extern s16 *data_0215a04c;
extern s16 data_02159ec4[];
s32 func_01ffdb08(s16);
s32 func_0202816c(s32);
void func_020d5de4(s32, s32);
void *func_020dff60(void) {
    s32 v = func_0202816c(func_01ffdb08(data_0215a04c[7]));
    s16 sel = data_0215a04c[3];
    s32 res = 0;

    switch (sel) {
    case 0:
        res = v + 0x7D0;
        break;
    case 1:
        res = v + 0x7D8;
        break;
    case 2:
        res = v + 0x7E0;
        break;
    }
    func_020d5de4(*(s16 *) ((s8 *) res + 4), (s32) data_02159ec4);
    return data_02159ec4;
}

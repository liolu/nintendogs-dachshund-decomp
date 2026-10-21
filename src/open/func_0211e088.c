#include "m2c.h"
extern u8 data_0214cad4[];
extern u8 *data_0215a04c;
extern s32 func_01ffdb08(s32 arg0);
extern void *func_0202816c(void);
extern void *func_020280f0(void);
extern s32 func_020cabcc(void *arg0, s32 arg1);
s32 func_0211e088(s32 arg0, s32 arg1) {
    s32 r = (s32) data_0214cad4;

    switch (arg0) {
    case 0x30002:
        if (arg1 == 0 && func_01ffdb08(*(s16 *) (data_0215a04c + 0xE)) != 0) {
            r = (s32) func_0202816c() + 0x78;
        }
        break;
    case 0x30005:
        if (func_01ffdb08(*(s16 *) (data_0215a04c + 0xE)) != 0) {
            r = func_020cabcc(func_020280f0(), arg1);
        }
        break;
    }
    return r;
}

#include "m2c.h"
extern u8 data_0214c978[];
extern s32 func_020a5d54(void);
extern s32 func_01ffdb08(s32 arg0);
extern void *func_0202816c(void);
extern void *func_020280f0(void);
extern s32 func_020cabcc(void *arg0, s32 arg1);
s32 func_02117b90(s32 arg0, s32 arg1) {
    s32 r = (s32) data_0214c978;

    switch (arg0) {
    case 0x30002:
        if (func_01ffdb08(func_020a5d54()) != 0) {
            r = (s32) func_0202816c() + 0x78;
        }
        break;
    case 0x30005:
        if (func_01ffdb08(func_020a5d54()) != 0) {
            r = func_020cabcc(func_020280f0(), arg1);
        }
        break;
    }
    return r;
}

#include "m2c.h"
extern void *data_02159e70;
extern s32 func_01ffdb08(s32);
extern s32 func_020280f0(s32);
extern s32 func_020cabcc(s32, s32);
extern u8 *func_020e8384(s32, s32);
extern s32 func_020d640c(s32, s32, s32, s32);
s32 func_0209d824(s32 arg0, s32 arg1) {
    s32 r;
    u8 *p;
    u8 *v;

    r = 0;
    p = (u8 *) data_02159e70 + 0x1d84;
    v = func_020e8384(*(s16 *) (p + 8), *(s16 *) (p + 0xa));
    switch (arg0) {
    case 0x30006:
        switch (*(s32 *) p) {
        case 0:
        case 1:
        case 2:
            r = func_020d640c(2, 0, *(u16 *) (v + 6), 0);
            break;
        case 3:
        case 4:
            r = func_020d640c(2, 1, *(u16 *) (v + 6), 0);
            break;
        }
        break;
    case 0x30005:
        r = func_020cabcc(func_020280f0(func_01ffdb08(*(s16 *) ((u8 *) data_02159e70 + 0x1dac))), arg1);
        break;
    }
    return r;
}

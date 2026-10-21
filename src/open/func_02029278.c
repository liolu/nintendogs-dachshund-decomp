#include "m2c.h"
extern void *data_0215a064;
s32 func_02029278(s32 arg0, s32 arg1, s32 arg2) {
    s32 v;

    if (arg1 <= 0) {
        return 1;
    }
    if (arg1 >= 0x6F) {
        return 0;
    }
    switch (arg1) {
    default:
        return 1;
    case 1:
        switch (M2C_FIELD(arg0, s8 *, 0x8B)) {
        case 0:
        case 4:
            return 1;
        case 1:
        case 3:
            return 1;
        case 2:
            return 0;
        case 5:
            return ((s32) M2C_FIELD(data_0215a064, s32 *, 0x50) >> 13) > 0x12C;
        }
    case 2:
        if (arg2 != 0) {
            return 1;
        }
        v = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x2A);
        v += (s32) M2C_FIELD(data_0215a064, s32 *, 0x50) >> 13;
        return v > 0x3E8;
    case 3:
        if (arg2 != 0) {
            return 1;
        }
        v = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x30);
        v += (s32) M2C_FIELD(data_0215a064, s32 *, 0x50) >> 13;
        return v > 0x3E8;
    }
}

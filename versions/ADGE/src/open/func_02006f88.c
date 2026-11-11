#include "m2c.h"
extern s16 data_02124e68[];
s32 func_02006f88(s32 arg0) {
    s32 i;

    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    i = (u16) (arg0 << 2) >> 4;
    return data_02124e68[i * 2];
}

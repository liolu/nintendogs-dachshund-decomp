#include "m2c.h"
extern s16 data_02124e68[];
s32 func_02006e70(s32 arg0) {
    s64 p;
    s32 i;

    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    i = (u16) (arg0 << 3) >> 4;
    i = i * 2 + 1;
    p = (s64) data_02124e68[i] * 0x800 + 0x800;
    return 0x800 - (s32) (p >> 12);
}

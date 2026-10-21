#include "m2c.h"
extern s16 data_02124e68[];
s32 func_02006ed8(s32 arg0) {
    s32 i;
    s64 v;

    if (arg0 <= 0) {
        return 0;
    }
    if (0x1000 <= arg0) {
        return 0x1000;
    }
    i = (u16) (((arg0 << 15) >> 12) - 0x4000) >> 4;
    v = (s64) data_02124e68[i * 2] * 0x800;
    v += 0x800;
    return (s32) ((u64) v >> 12) + 0x800;
}

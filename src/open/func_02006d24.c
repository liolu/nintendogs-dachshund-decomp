#include "m2c.h"
extern void func_0207d3c8();
extern void func_02003970();
extern volatile s32 data_0214cd14;
extern void *data_0214d628;
s32 func_02073a6c(s32, s32);
s32 func_020739c8(s32);
s32 func_0205df50(s32);
s32 func_02006d24(s32 arg0) {
    s32 t;
    s32 a;
    s32 b;
    s32 c;

    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    t = arg0 - 0x800;
    a = (s32) ((((s64) t << 13) + 0x800) >> 12);
    b = (s32) (((s64) a * a + 0x800) >> 12);
    c = (s32) (((s64) b * a + 0x800) >> 12);
    return (s32) ((((s64) c << 11) + 0x800) >> 12) + 0x800;
}

#include "m2c.h"
s32 func_02028120(s32 arg0);
s32 func_0200ce3c(s32 arg0) {
    s32 dx = M2C_FIELD(arg0, s32 *, 0x26C) - M2C_FIELD(arg0, s32 *, 0x2A0);
    s32 dz = M2C_FIELD(arg0, s32 *, 0x274) - M2C_FIELD(arg0, s32 *, 0x2A8);
    s32 t1 = func_02028120(arg0) >> 1;
    s32 var2 = M2C_FIELD(arg0, s32 *, 0x26C) - M2C_FIELD(arg0, s32 *, 0x2E8)
             - (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x1A4) * t1 + 0x800) >> 12);
    s32 t2 = func_02028120(arg0) >> 1;
    s32 resultA = (s32) (((s64) dx * var2 + 0x800) >> 12);
    s32 result2 = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x1AC) * t2 + 0x800) >> 12);
    s32 resultC = (s32) (((s64) dz * (M2C_FIELD(arg0, s32 *, 0x274) - M2C_FIELD(arg0, s32 *, 0x2F0) - result2) + 0x800) >> 12);
    return (resultA + resultC) <= 0;
}

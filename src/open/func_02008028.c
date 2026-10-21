#include "m2c.h"
typedef struct {
    int x;
    int y;
    int z;
} T3;

s32 *func_01ffdb08(s32 arg0);
s32 func_02028120(s32 arg0);
void func_02008028(s32 arg0) {
    s32 *base;
    T3 a;

    base = func_01ffdb08(1);
    if (base == 0) {
        return;
    }
    if (arg0 == 0) {
        return;
    }
    a = *(T3 *) ((u8 *) base + 0x2E8);
    a.y = 0;
    M2C_FIELD(arg0, s32 *, 0x20) =
        a.x + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x24) =
        a.y + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x28) =
        a.z + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), void **, 0), s32 *, 0xC);
}

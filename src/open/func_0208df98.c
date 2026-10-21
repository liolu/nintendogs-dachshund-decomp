#include "m2c.h"
extern u8 data_02154350[];
extern u8 data_02154330[];
s32 func_0208c9ac(void);
void func_02070f88(u8 *, s32);
s32 func_0208df98(s32 arg0) {
    u8 *p = data_02154350;
    s32 r;

    r = func_0208c9ac();
    M2C_FIELD(data_02154330, s32 *, 8) = -1;
    if (M2C_FIELD(p, u32 *, 0) != 0 && r == 0) {
        func_02070f88(p, arg0);
        M2C_FIELD(p, u32 *, 0x100) = 0;
        return 1;
    }
    return 0;
}

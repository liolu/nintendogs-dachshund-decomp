#include "m2c.h"
extern void *data_02159fc4;
extern s32 data_02130e18[];
extern s8 data_02140ec4[];
s32 func_0205ece8(s8 *buffer, s32 bufsz, const s8 *format, ...);
M2C_UNK func_0207e0d0(M2C_UNK);
void *func_02078714(void *, u32);
void func_020e3df0(void) {
    s8 *p = (s8 *) data_02159fc4;
    s32 v;

    if (M2C_FIELD(p, s32 *, 0) == 0) {
        return;
    }
    v = M2C_FIELD(p, s32 *, 8);
    if (v == 0) {
        return;
    }
    if (v == 5) {
        return;
    }
    if (v == 6) {
        return;
    }
    M2C_FIELD(p, s32 *, 8) = 5;
}

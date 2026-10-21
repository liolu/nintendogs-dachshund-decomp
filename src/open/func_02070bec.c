#include "m2c.h"
extern s32 func_020c5d1c(s32, s32);
M2C_UNK func_0205e15c(M2C_UNK, M2C_UNK);
extern void func_020cf19c();
void *func_0207d038(void *arg0, void *arg1);
s32 func_02070bec(void **arg0, s32 arg1, s16 *arg2) {
    void *p;

    p = *arg0;
    if (p == NULL) {
        return 0;
    }
    if (M2C_FIELD(p, u8 *, 0x2D) == 0) {
        *arg2 = -1;
        return 1;
    }
    *arg2 = func_020c5d1c(M2C_FIELD(p, u8 *, 0x3C), arg1);
    return 1;
}

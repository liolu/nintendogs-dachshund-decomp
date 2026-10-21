#include "m2c.h"
extern void *data_0215a044;
extern void *data_0215a064;
extern s32 func_02114a1c(void);
extern void func_020e4558(s32);
void func_020e4454(s32 arg0) {
    void *p;

    M2C_FIELD(arg0, s16 *, 0xA4) = (s16) (func_02114a1c() >> 12);
    p = M2C_FIELD(data_0215a044, void **, 4);
    M2C_FIELD(arg0, s16 *, 0xA6) = (s16) ((M2C_FIELD(p, s16 *, 2) + 0x3B) / 60);
    M2C_FIELD(arg0, s16 *, 0xA8) = (s16) M2C_FIELD(data_0215a064, s16 *, 0x56);
    func_020e4558(arg0);
}

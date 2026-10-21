#include "m2c.h"
extern u8 data_02154354[];
extern u8 data_02154350[];
s32 func_02070c84(void *);
void func_02070f88(void *, s32);
void func_02070cec(void *, s32);
void func_0208d030(s32 arg0) {
    u8 *q = data_02154350;
    u8 *p = data_02154354;

    if (*(u32 *) p == 0) {
        return;
    }
    if (*(u32 *) (q + 0x2C) == 0) {
        return;
    }
    if (func_02070c84(p) != 0x7E) {
        return;
    }
    if (arg0 < 0x50) {
        func_02070f88(p, 0x1E);
        *(u32 *) (q + 0x2C) = 0;
        return;
    }
    func_02070cec(p, arg0 >> 3);
}

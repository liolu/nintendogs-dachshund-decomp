#include "m2c.h"
extern M2C_UNK data_02154350;
void func_02070d1c(s32, s32, s32);
void func_02070d4c(s32, s32, s32);

void func_0208c67c(s32 arg0) {
    u8 *p = (u8 *) &data_02154350;
    s32 a;
    s32 b;

    if (M2C_FIELD(p, s32 *, 0x40) == 0) {
        return;
    }
    if (arg0 >= 0) {
        a = arg0;
        b = arg0 * 7;
    } else {
        a = -arg0;
        b = -arg0 * 7;
    }
    if (a > 0x1E) {
        a = 0xFF;
    }
    if (b > 0xFF) {
        b = 0xFF;
    }
    func_02070d1c((s32) p, 0xFFFF, a);
    func_02070d4c((s32) p, 0xFFFF, b);
}

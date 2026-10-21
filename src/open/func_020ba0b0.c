#include "m2c.h"
void func_020b777c(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);
void func_020ba0b0(s32 arg0, s32 arg1) {
    typedef struct {
        s32 a;
        s32 b;
        s32 c;
    } Vec3;

    func_020b777c(arg0, arg0 + 0xC, arg1 + 0x1C, arg1 + 0x18, arg1 + 0x1A);
    *(Vec3 *) (arg1 + 0) = *(Vec3 *) (arg0 + 0xC);
    *(Vec3 *) (arg1 + 0xC) = *(Vec3 *) (arg0 + 0x18);
    *(s32 *) (arg1 + 0x20) = *(s32 *) (arg0 + 0x24);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Vec3;

s32 func_02028114(void *);
void func_0202fa5c(void *);
void *func_020361ac(void *);
void func_02037130(void *, s32);

void func_ov003_0218dd40(void *arg0) {
    u8 *p = (u8 *) arg0;
    u8 *q;

    q = (u8 *) func_020361ac(arg0);
    if (q != 0) {
        *(Vec3 *) (p + 0x26C) = *(Vec3 *) (q + 0xBC);
        *(Vec3 *) (p + 0x278) = *(Vec3 *) (p + 0x26C);
        func_02037130(arg0, 0x300);
    }
    if ((s32) * (u16 *) (p + 0xFC) <= (((s32) (0x1000 - func_02028114(arg0))) >> 8) + 0x19) {
        return;
    }
    func_0202fa5c(arg0);
}

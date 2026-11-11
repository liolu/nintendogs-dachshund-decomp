/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02022e04(void *, s32);
void func_02029248(void *);
u32 func_020382c4(void *);
void func_0203e5e8(void *, s32);
extern void *data_0215a064;

struct w3 {
    s32 a;
    s32 b;
    s32 c;
};

void func_ov003_0217a330(u8 *arg0) {
    s32 *src;
    u32 t;

    src                           = (s32 *) (*(u8 **) ((u8 *) data_0215a064 + 0x1C) + 0x30);
    *(struct w3 *) (arg0 + 0x3B4) = *(struct w3 *) src;
    if ((u32) * (u16 *) (arg0 + 0xFC) <= 0x50U) {
        return;
    }
    t = func_020382c4(arg0);
    switch (t) {
        default:
            break;
        case 0:
            func_0203e5e8(arg0, 0x30F);
            break;
        case 1:
            func_0203e5e8(arg0, 0x311);
            break;
        case 2:
            func_0203e5e8(arg0, 0x312);
            break;
        case 3:
            func_0203e5e8(arg0, 0x313);
            break;
    }
    if (*(s16 *) (arg0 + 0xF0) == 1) {
        func_02029248(arg0);
        return;
    }
    if (func_02022e04(arg0, 1) == 0) {
        return;
    }
    func_02029248(arg0);
}

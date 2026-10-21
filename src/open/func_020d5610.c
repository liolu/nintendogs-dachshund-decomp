#include "m2c.h"
extern u32 data_0214427c;
extern u8 *data_02159e68;
u32 func_020026c4(void *, void *);
u8 *func_020038a8(s32, s32);
void func_0206cbc4(u16, void *, s32);
void func_020d5610(s32 arg0) {
    s32 local;
    u8 *p;
    volatile u16 z;

    if (func_020026c4(&local, 0) == 0) {
        data_0214427c = local;
    }
    p = func_020038a8(arg0, 0x24);
    *(s16 *) (p + 0) = 0;
    *(s16 *) (p + 2) = 1;
    *(s16 *) (p + 4) = 0;
    *(s16 *) (p + 6) = 0;
    *(s32 *) (p + 8) = 0;
    *(s32 *) (p + 0xC) = 0;
    z = 0;
    func_0206cbc4(z, p + 0x10, 0x14);
    data_02159e68 = p;
}

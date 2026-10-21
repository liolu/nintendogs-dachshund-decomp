#include "m2c.h"
void func_020d2c64(u16, s32, s32, s32, s32);
s32 func_021179f8(s32, s32);
void func_02114c5c(void *arg0) {
    u8 *p;
    u8 *q;
    u16 id;
    s16 f;

    p = (u8 *) arg0 + 0x100;
    q = (u8 *) arg0 + 0x128;
    id = *(u16 *) (p + 0x28);
    if (id == 0xFFFF) {
        return;
    }
    f = *(s16 *) (q + 2);
    if (f != 0) {
        func_020d2c64(id, *(s32 *) (q + 4), 0, (s32) func_021179f8, 1);
    } else {
        func_020d2c64(id, *(s32 *) (q + 4), 0, (s32) func_021179f8, 0);
    }
    *(u16 *) q = 0xFFFF;
    *(u16 *) (q + 2) = 0;
    *(s32 *) (q + 4) = -1;
}

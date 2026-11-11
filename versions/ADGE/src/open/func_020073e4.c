#include "m2c.h"

void *func_020038a8(s32 arg0, s32 arg1);
void func_0206cbc4(u16 arg0, void *arg1, s32 arg2);
void func_02086528(void *arg0, void *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);

void *func_020073e4(s32 heap, s32 w1, s32 w2, s32 mode) {
    u16 a;
    u16 b;
    s32 size = 0;
    u8 *buf;
    void *obj;
    volatile u16 fill;

    a = (u16) (w1 << 3);
    b = (u16) (w2 << 3);
    if (mode != 0) {
        if (mode == 1) {
            size = (a * b) >> 1;
            size <<= 1;
        }
    } else {
        size = (a * b) >> 2;
        size <<= 1;
    }
    buf  = func_020038a8(heap, size);
    fill = 0;
    func_0206cbc4(fill, buf, size);
    obj = func_020038a8(heap, 0x14);
    func_02086528(obj, buf, a, b, mode, 0);
    M2C_FIELD(obj, s32 *, 0x10) = size;
    return obj;
}

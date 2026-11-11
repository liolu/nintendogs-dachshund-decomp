#include "m2c.h"
void func_0206823c(void *a, void *b, void *c);
s32 func_020681f8(void *a, void *b);
void func_020c9bf0(s32 arg0, s32 arg1, s32 *arg2) {
    u8 buf[0xC];

    func_0206823c((void *) arg1, (void *) (arg0 + 0x30), buf);
    arg2[0] = func_020681f8(buf, (void *) (arg0 + 0x60));
    arg2[1] = func_020681f8(buf, (void *) (arg0 + 0x54));
    arg2[2] = func_020681f8(buf, (void *) (arg0 + 0x48));
}

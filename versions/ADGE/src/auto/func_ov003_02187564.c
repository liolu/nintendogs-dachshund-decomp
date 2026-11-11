#include "m2c.h"

void func_ov003_0218758c(void *a, s32 b, s32 c, s32 d);

void func_ov003_02187564(void *arg0) {
    s32 flag;

    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 0x3C) {
        flag = 1;
    } else {
        flag = 0;
    }
    func_ov003_0218758c(arg0, 0, 0x1FF, flag);
}

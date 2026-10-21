#include "m2c.h"
void func_0206373c(void *arg0);
s32 func_0206377c(void *arg0, u8 *arg1, u32 *arg2) {
    u32 n;
    u32 i;

    n = *arg2;
    for (i = 0; i < n; i++) {
        func_0206373c(arg1 + i);
    }
    return 0;
}

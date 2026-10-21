#include "m2c.h"
void func_020bb0f0(void *arg0, s32 arg1, void *arg2) {
    typedef struct {
        u32 w[11];
    } Copy11;
    *(Copy11 *) arg2 = *(Copy11 *) ((u8 *) arg0 + arg1 * 0x2c + 0x20);
}

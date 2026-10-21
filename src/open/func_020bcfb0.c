#include "m2c.h"
void func_020bcfb0(u32 arg0, s32 arg1) {
    u32 base = *(u32 *) (arg0 + 0xc);
    *(u32 *) (base + arg1 * 4) = 0;
}

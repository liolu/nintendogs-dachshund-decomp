#include "m2c.h"
void func_0206ecc0(s32 arg0, s32 arg1) {
    (*(s32 *) (arg0 + 0x10))++;
    *(s32 *) (arg0 + 0xC) = arg1;
    {
        u32 *bits = *(u32 **) (arg0 + 0x14);
        bits[arg1 >> 5] |= 1 << (arg1 & 0x1F);
    }
}

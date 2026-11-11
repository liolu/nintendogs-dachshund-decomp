#include "m2c.h"
extern void *data_02159e70;
void func_020ebcb4(s32 arg0, s32 arg1, s16 arg2, s16 arg3) {
    s8 *p = (s8 *) data_02159e70 + 0x283c + arg0 * 0x800 + arg1 * 0x10;

    *(s16 *) (p + 0xa) = arg2;
    *(s16 *) (p + 0xc) = arg3;
}

#include "m2c.h"
extern void *data_02159e70;
void func_020e15dc(void) {
    u8 *p = data_02159e70;
    u8 *q;
    u8 *r;

    if (*(s32 *) (p + 0xB8) != 0xD) {
        return;
    }
    q = p + 0x1D48;
    *(u32 *) q = 1;
    *(s16 *) (q + 4) = -1;
    p = data_02159e70;
    r = p + 0x5028;
    if (*(u32 *) r != 0) {
        *(u32 *) (r + 4) = 1;
    }
}

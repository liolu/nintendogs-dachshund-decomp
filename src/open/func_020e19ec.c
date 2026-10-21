#include "engine.h"
#include "m2c.h"
extern void *data_02159e70;
void func_020e19ec(void) {
    s32 *p = (s32 *) ((s8 *) data_02159e70 + 0xC4);
    s32 *q = p + 0x268 / 4;

    q[0] = 1;
    q[1] = 0x1E;
}

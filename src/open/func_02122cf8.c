#include "m2c.h"
extern void *data_0215a064;
void func_02122cf8(s32 arg0, s32 arg1) {
    s16 *p = (s16 *) ((s8 *) data_0215a064 + 0x10E);
    p[0] = (s16) arg0;
    p[1] = (s16) arg1;
}

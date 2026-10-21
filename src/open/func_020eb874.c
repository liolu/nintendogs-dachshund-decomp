#include "m2c.h"
#include "engine.h"
extern void *data_02159e70;
extern s16 data_02139b78[];
void func_020eb874(s32 arg0, u16 *arg1, s16 arg2, s16 arg3) {
    s8 *p;
    u16 idx;

    if (*arg1 == 0xFFFF) {
        return;
    }
    do {
        p = (s8 *) data_02159e70 + 0x283C + arg0 * 0x800;
        idx = *(s16 *) arg1;
        *(s16 *) (p + idx * 0x10 + 6) = arg2;
        *(s16 *) (p + idx * 0x10 + 8) = arg3;
        arg1++;
    } while (*arg1 != 0xFFFF);
}

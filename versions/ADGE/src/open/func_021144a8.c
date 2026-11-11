#include "m2c.h"
void func_021144a8(void *arg0, void *arg1, s32 arg2) {
    typedef struct {
        s32 w[3];
    } Copy3;
    s16 idx = *(s16 *) ((u8 *) arg0 + arg2 * 2 + 0xc6);

    if (idx == -1) {
        *(Copy3 *) arg1 = *(Copy3 *) ((u8 *) arg0 + 0xe8);
        return;
    }
    *(Copy3 *) arg1 = *(Copy3 *) ((u8 *) arg0 + idx * 0xc + 0xd0);
}

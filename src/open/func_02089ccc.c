#include "m2c.h"
void func_02070f88(void *arg0, s32 arg1);
void func_02089ccc(s32 *arg0) {
    s16 i;
    s32 j;
    s32 *p;

    i = 0;
    if (arg0[0] > 0) {
        p = (s32 *) ((u8 *) arg0 + 0x18);
        j = i;
        do {
            if (*p != 0) {
                func_02070f88(p, j);
            }
            i = (s16) (i + 1);
            p++;
        } while (i < arg0[0]);
    }
    arg0[0] = 0;
}

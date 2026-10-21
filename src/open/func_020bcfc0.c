#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T;

void func_020bcfc0(void *arg0, s32 arg1, T *arg2) {
    s32 off;
    T *dst;
    T *zero;

    off = arg1 * 0xC;
    dst = (T *) (M2C_FIELD(arg0, s32 *, 4) + off);
    *dst = *arg2;
    zero = (T *) (M2C_FIELD(arg0, s32 *, 8) + off);
    zero->a = 0;
    zero->b = 0;
    zero->c = 0;
    ((s32 *) M2C_FIELD(arg0, s32 *, 0xC))[arg1] = 1;
}

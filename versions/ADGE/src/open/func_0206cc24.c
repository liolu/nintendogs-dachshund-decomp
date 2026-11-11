#include "m2c.h"
void func_0206cc24(s32 src, s32 dest, s32 count) {
    s32 end;
    u32 tmp;

    end = src + count;
    do {
        if (src < end) {
            tmp = *(u32 *) src;
            src += 4;
            *(u32 *) dest = tmp;
        }
    } while (src < end);
}

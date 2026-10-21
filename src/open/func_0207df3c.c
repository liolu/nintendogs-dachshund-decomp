#include "m2c.h"
void func_0207df3c(s32 arg0) {
    s32 *p = (s32 *) (arg0 + 0x24);
    s8 *v = *(s8 **) (p + 2);

    while (v != NULL) {
        *(s32 *) (v + 8) = *(s32 *) (arg0 + 0x1C);
        v = *(s8 **) (v + 0xC);
    }
    *(s32 *) (p + 1) = *(s32 *) (arg0 + 0x1C);
}

#include "m2c.h"
void func_020638f4(void) {
    volatile u16 *p = (volatile u16 *)0x027FFF96;
    u16 v = *p;

    if (v & 1) {
        *p = v & ~1;
    }
}

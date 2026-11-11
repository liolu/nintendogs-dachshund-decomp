/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020066c0(u16);

void func_ov009_0215ace4(void) {
    u16 i;

    i = 0;
    do {
        func_020066c0(i);
        i = (u16) (i + 1);
    } while (i < 2);
}

#include "m2c.h"
extern s32 data_0215a058;
void func_02113bd4(void) {
    data_0215a058 = 0;
    func_02004270();
    if (((*(volatile u16 *) 0x04000304 & 0x8000) >> 0xF) == 0) {
        *(volatile u16 *) 0x04000304 |= 0x8000;
    }
}

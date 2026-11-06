/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0214e180;
void func_0207fc10(void *);

void func_02066a28(s32 a, s32 b, s32 c) {
    u8 *r2;

    if (a != 0xB) {
        return;
    }
    if (c == 0) {
        return;
    }
    r2 = (u8 *) &data_0214e180;
    *(u32 *) (r2 + 0x34) &= ~0x20;
    func_0207fc10(*(void **) (r2 + 0xD0));
}

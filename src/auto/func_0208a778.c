/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_0208a85c(void *, s32);

void func_0208a778(u8 *arg0, s16 arg1) {
    *(u32 *) (arg0 + 0xC)  = *(u32 *) (arg0 + 0xC) | 4;
    *(u32 *) (arg0 + 0x2C) = *(u32 *) (arg0 + 8);
    *(u32 *) (arg0 + 0x34) = 0;
    *(u16 *) (arg0 + 0x32) = 0;
    *(s16 *) (arg0 + 0x30) = arg1;
    func_0208a85c(arg0, 2);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200c3ec(s32, s32);
extern u8 *data_ov005_02161dc0;

s32 func_ov005_0215dde0(s32 arg0) {
    u8 *p;

    func_0200c3ec(1, arg0);
    p = *(u8 **) (data_ov005_02161dc0 + arg0 * 4 + 0x2C);
    p = *(u8 **) (p + 0x2C);
    return *(s32 *) (p + 0x1C);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0200c488(s32, s32);
extern u8 *data_ov006_02164260;

s32 func_ov006_021612f0(s32 arg0) {
    u8 *p;

    func_0200c488(4, arg0);
    p = *(u8 **) (data_ov006_02164260 + arg0 * 4 + 0xE0);
    p = *(u8 **) (p + 0x2C);
    return *(s32 *) (p + 0x24);
}

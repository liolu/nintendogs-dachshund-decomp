/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov004_0216e3c0;

u16 func_ov004_0215a0a0(void) {
    u8 *p = *(u8 **) (data_ov004_0216e3c0 + 0x36C4);
    return (u16) (s8) p[0x2314];
}

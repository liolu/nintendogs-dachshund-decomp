/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov003_0216be20;

u16 func_ov003_02157c20(void) {
    u8 *p = *(u8 **) (data_ov003_0216be20 + 0x36C4);
    return (u16) (s8) p[0x2314];
}

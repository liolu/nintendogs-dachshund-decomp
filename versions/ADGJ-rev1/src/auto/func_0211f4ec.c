/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u16 data_021560f0;

u16 func_0211f4ec(u16 arg0) {
    u16 var_r0;

    var_r0 = arg0;
    if (data_021560f0 == 0) {
        return 0U;
    }
    do {
        var_r0 += 1;
        if ((u32) var_r0 > 0x10U) {
            var_r0 = 1;
        }
    } while (!(data_021560f0 & (1 << (var_r0 - 1))));
    return var_r0;
}

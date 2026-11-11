/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov019_0215f240();

s32 func_ov019_0215ad48(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 1)) {
        return 0;
    }
    return ((s32 *) func_ov019_0215f240())[arg0];
}

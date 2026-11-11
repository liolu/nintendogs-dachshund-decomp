/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02067c34();                                /* extern */

s32 func_02006dfc(s32 arg0) {
    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    return func_02067c34();
}

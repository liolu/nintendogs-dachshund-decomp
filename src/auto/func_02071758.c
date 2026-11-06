/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0214f358;

s32 func_02071758(s32 arg0) {
    if (arg0 & data_0214f358) {
        return 0;
    }
    data_0214f358 |= arg0;
    return 1;
}

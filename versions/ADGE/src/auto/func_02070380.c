/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_0214fe00;

s32 func_02070380(s32 arg0) {
    if (arg0 & data_0214fe00) {
        return 0;
    }
    data_0214fe00 |= arg0;
    return 1;
}

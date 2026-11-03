/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

extern s32 data_021473cc;
extern u8 data_02155070;
extern s32 data_02155094;

s32 func_020f7170(void) {
    if ((data_02155070 == 5) || (data_02155070 == 6) || (data_02155094 != 0)) {
        return -0xB;
    }
    return data_021473cc;
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_ov004_021627b0();                          /* extern */
extern s32 data_02143c58;

s32 func_02106f0c(void) {
    if (data_02143c58 != 0x16) {
        return 0;
    }
    return func_ov004_021627b0();
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_ov003_0216028c();                          /* extern */
extern s32 data_021440d4;

s32 func_020e2e40(void) {
    if (data_021440d4 != 0x16) {
        return 0;
    }
    return func_ov003_0216028c();
}

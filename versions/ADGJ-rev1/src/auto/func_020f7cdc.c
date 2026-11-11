/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001ea0();                            /* extern */
extern s32 data_02155494;
extern s32 data_02155498;

void func_020f7cdc(void) {
    if (data_02155494 == 0) {
        return;
    }
    if (data_02155498 == 0) {
        return;
    }
    func_02001ea0();
    data_02155498 = 0;
}

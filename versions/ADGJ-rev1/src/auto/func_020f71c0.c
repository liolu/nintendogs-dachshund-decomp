/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f7cdc();                            /* extern */
extern s32 data_021550ac;

void func_020f71c0(void) {
    if (data_021550ac != 1) {
        return;
    }
    func_020f7cdc();
    data_021550ac = 0;
}

/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f7cdc();                            /* extern */
extern s32 data_021550ac;
extern s32 data_021550bc;
extern s32 data_021550e8;

void func_020f748c(void) {
    if (data_021550e8 != 0) {
        return;
    }
    func_020f7cdc();
    data_021550bc = data_021550ac;
    data_021550e8 = 1;
}

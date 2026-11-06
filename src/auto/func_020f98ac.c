/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f98f0();                            /* extern */
extern s32 data_021558cc;
extern s32 data_021558d0;

void func_020f98ac(void) {
    if (data_021558d0 == 0) {
        return;
    }
    data_021558cc = 1;
    func_020f98f0();
}

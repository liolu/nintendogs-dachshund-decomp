/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070abc();                            /* extern */
M2C_UNK func_0211eda0();                            /* extern */
extern s32 data_02157b60;

void func_02121478(void) {
    if (data_02157b60 == 0) {
        return;
    }
    func_02070abc();
    func_0211eda0();
    data_02157b60 = 0;
}

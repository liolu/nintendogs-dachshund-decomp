/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02121478();                            /* extern */
extern s32 data_02154c78;

void func_020cfe64(void) {
    if (data_02154c78 == 0) {
        return;
    }
    func_02121478();
    data_02154c78 = 0;
}

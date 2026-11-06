/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208bbe0();                            /* extern */
extern s32 data_02153690;

void func_0208babc(s32 arg0) {
    if (data_02153690 != 0) {
        return;
    }
    data_02153690 = 1;
    func_0208bbe0(arg0);
}

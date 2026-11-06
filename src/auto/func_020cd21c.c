/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208be84(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0212d490;
extern s32 data_021440d4;

void func_020cd21c(void) {
    if (data_021440d4 == -1) {
        return;
    }
    func_0208be84(0, *((M2C_UNK *) ((s8 *) &data_0212d490 + (data_021440d4 * 8))));
    data_021440d4 = -1;
}

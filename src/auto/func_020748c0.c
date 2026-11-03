/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
M2C_UNK func_0207d7e8(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0214fd94;

void func_020748c0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    func_0207d7e8(&data_0214fd94, arg0);
    func_02081220(temp_r4);
}

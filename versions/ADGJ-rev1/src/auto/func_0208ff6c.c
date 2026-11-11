/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02090508(void *, s32);                 /* extern */
extern void *data_02153708;

void func_0208ff6c(s16 arg0, s16 arg1, s16 arg2) {
    void *temp_r4;

    temp_r4 = data_02153708;
    func_02090508(temp_r4, 0xC002);
    M2C_FIELD(temp_r4, s16 *, 4) = arg0;
    M2C_FIELD(temp_r4, s16 *, 6) = arg1;
    M2C_FIELD(temp_r4, s16 *, 8) = arg2;
}

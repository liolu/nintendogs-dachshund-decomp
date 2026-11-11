/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02090508(void *, M2C_UNK);             /* extern */
extern void *data_02153708;

void func_020904ac(void) {
    void *temp_r4;

    temp_r4 = data_02153708;
    func_02090508(temp_r4, 0xC000);
    M2C_FIELD(temp_r4, s16 *, 4) = 9;
}

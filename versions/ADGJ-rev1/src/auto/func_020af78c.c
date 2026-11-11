/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bdfe0(void *);                      /* extern */
extern void *data_02153740;

void func_020af78c(void) {
    void *temp_r4;

    temp_r4 = data_02153740 + 0x3C98;
    if (M2C_FIELD(data_02153740, s32 *, 0x3C98) == 0) {
        return;
    }
    func_020bdfe0(temp_r4 + 0x1D8);
    func_020bdfe0(temp_r4 + 0x1F8);
}

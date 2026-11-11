/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020af728(M2C_UNK);                     /* extern */
M2C_UNK func_020bdb00(void *);                      /* extern */
extern void *data_02153740;

void func_020a5c28(void) {
    void *temp_r4;

    if (M2C_FIELD(data_02153740, s32 *, 0xB8) != 6) {
        return;
    }
    temp_r4 = data_02153740 + 0xC4;
    func_020bdb00(temp_r4 + 4);
    func_020bdb00(temp_r4 + 0x40);
    func_020bdb00(temp_r4 + 0x7C);
    func_020bdb00(temp_r4 + 0xB8);
    func_020bdb00(temp_r4 + 0xF4);
    func_020af728(1);
}

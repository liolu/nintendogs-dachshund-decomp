/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eae68(M2C_UNK, s16, s16);           /* extern */
extern void *data_02159e70;

void func_020e8858(void *arg0) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) != 0xB) {
        return;
    }
    func_020eae68(0x14, M2C_FIELD(arg0, s16 *, 0x1C18), M2C_FIELD(arg0, s16 *, 0x1C1A));
}

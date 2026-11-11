/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001fb8(M2C_UNK *);                   /* extern */
extern s32 data_02154a04;
extern s32 data_02154a0c;
extern s32 data_02154a10;
extern M2C_UNK data_02154a14;

void func_020975ac(void) {
    if (data_02154a0c == 0) {
        return;
    }
    if (data_02154a10 != 0) {
        return;
    }
    func_02001fb8(&data_02154a14);
    data_02154a04 = M2C_FIELD(&data_02154a14, s32 *, 4);
    data_02154a10 = 1;
}

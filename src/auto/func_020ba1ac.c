/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3c40(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0213f358;
extern M2C_UNK data_0213f368;
extern M2C_UNK data_0213f378;
extern M2C_UNK data_0213f37c;
extern void *data_02153740;

void func_020ba1ac(void) {
    M2C_FIELD(data_02153740, s32 *, 0xB4A8) = 3;
    M2C_FIELD(data_02153740, s32 *, 0xB4AC) = 0;
    func_020a3c40(0x10, &data_0213f358, &data_0213f368, &data_0213f378, &data_0213f37c);
}

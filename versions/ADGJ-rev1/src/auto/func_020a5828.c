/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003d1c(M2C_UNK);                     /* extern */
M2C_UNK func_020a3c40(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020ab0e8();                            /* extern */
extern M2C_UNK data_0213be8c;
extern M2C_UNK data_0213bea0;
extern M2C_UNK data_0213beb4;
extern M2C_UNK data_0213beb8;
extern void *data_02153740;

void func_020a5828(s32 *arg0) {
    *arg0                                   = 0;
    M2C_FIELD(data_02153740, s32 *, 0xB4A8) = 3;
    M2C_FIELD(data_02153740, s32 *, 0xB4AC) = 0;
    func_020a3c40(0x2B, &data_0213be8c, &data_0213bea0, &data_0213beb4, &data_0213beb8);
    func_020ab0e8();
    func_02003d1c(0x10);
}

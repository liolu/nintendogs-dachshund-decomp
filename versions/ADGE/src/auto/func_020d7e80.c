/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003d80(M2C_UNK);                     /* extern */
M2C_UNK func_020d6240(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020dd8f4();                            /* extern */
extern M2C_UNK data_021444d8;
extern M2C_UNK data_021444ec;
extern M2C_UNK data_02144500;
extern M2C_UNK data_02144504;
extern void *data_02159e70;

void func_020d7e80(s32 *arg0) {
    *arg0                                   = 0;
    M2C_FIELD(data_02159e70, s32 *, 0xC838) = 3;
    M2C_FIELD(data_02159e70, s32 *, 0xC83C) = 0;
    func_020d6240(0x2B, &data_021444d8, &data_021444ec, &data_02144500, &data_02144504);
    func_020dd8f4();
    func_02003d80(0x10);
}

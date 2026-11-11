/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6240(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_02145668;
extern M2C_UNK data_02145678;
extern M2C_UNK data_02145688;
extern M2C_UNK data_0214568c;
extern void *data_02159e70;

void func_020ed0cc(void) {
    M2C_FIELD(data_02159e70, s32 *, 0xC838) = 3;
    M2C_FIELD(data_02159e70, s32 *, 0xC83C) = 0;
    func_020d6240(0x10, &data_02145668, &data_02145678, &data_02145688, &data_0214568c);
}

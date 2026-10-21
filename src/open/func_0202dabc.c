#include "m2c.h"
extern M2C_UNK data_0213b3e7;
extern M2C_UNK data_02139dd0;
extern M2C_UNK data_02150e58;
s32 func_0202f024(s32, s32, s32);
s32 func_0202eddc(s32, s32, s32);
extern u16 data_02139a9c[];
s32 func_0202dabc(M2C_UNK arg0) {
    s8 var_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x152);
    var_r1 = *((u8 *) ((s8 *) &data_0213b3e7 + (temp_r2 * 8)));
    return (s16) *((s32 *) ((s8 *) &data_02139dd0 + (var_r1 * 4)));
}

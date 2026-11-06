/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020684d4(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020686f4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_02068aac(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_02150330;
extern M2C_UNK data_0215037c;
extern M2C_UNK data_021503ec;
extern M2C_UNK data_02150460;
extern M2C_UNK data_02150490;

void func_02075b98(void) {
    func_020684d4(&data_021503ec, &data_0215037c, &data_02150460);
    func_02068aac(&data_02150460, &data_02150460, M2C_FIELD(&data_02150330, s32 *, 0xEC),
                  M2C_FIELD(&data_02150330, s32 *, 0xF0), M2C_FIELD(&data_02150330, s32 *, 0xF4));
    func_020686f4(&data_02150460, &data_02150490);
}

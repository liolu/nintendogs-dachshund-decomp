/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020670dc(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020672fc(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020676b4(M2C_UNK *, M2C_UNK *, s32, s32, s32); /* extern */
extern M2C_UNK data_02150e58;
extern M2C_UNK data_02150ea4;
extern M2C_UNK data_02150f14;
extern M2C_UNK data_02150f88;
extern M2C_UNK data_02150fb8;

void func_02074794(void) {
    func_020670dc(&data_02150f14, &data_02150ea4, &data_02150f88);
    func_020676b4(&data_02150f88, &data_02150f88, M2C_FIELD(&data_02150e58, s32 *, 0xEC),
                  M2C_FIELD(&data_02150e58, s32 *, 0xF0), M2C_FIELD(&data_02150e58, s32 *, 0xF4));
    func_020672fc(&data_02150f88, &data_02150fb8);
}

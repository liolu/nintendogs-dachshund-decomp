#include "m2c.h"
extern M2C_UNK data_02150e58;
extern M2C_UNK data_0213b3e7;
extern M2C_UNK data_02139dd0;
s32 func_0202f024(s32, s32, s32);
s32 func_0202eddc(s32, s32, s32);
extern u16 data_02139a9c[];
s32 func_0202a350(s32 arg0) {
    u32 local[3];

    local[0] = M2C_FIELD(&data_02150e58, u32 *, 0x54);
    local[1] = M2C_FIELD(&data_02150e58, u32 *, 0x60);
    local[2] = M2C_FIELD(&data_02150e58, u32 *, 0x6C);
    return func_02009f28(local, (void *) (arg0 + 0x18C)) ? 1 : 2;
}

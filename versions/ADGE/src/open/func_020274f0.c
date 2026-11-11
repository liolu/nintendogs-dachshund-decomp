#include "m2c.h"
extern M2C_UNK data_02150e58;
extern M2C_UNK data_0213b3e7;
extern M2C_UNK data_02139dd0;
s32 func_0202f024(s32, s32, s32);
s32 func_0202eddc(s32, s32, s32);
extern u16 data_02139a9c[];
s32 func_020274f0(void *arg0) {
    s32 x = M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s32 *, 8);

    return (s32) (((s64) x * 0xCD0 + 0x800) >> 12);
}

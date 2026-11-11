/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020672fc(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02150e58;
extern M2C_UNK data_02150ea4;
extern M2C_UNK data_02150f58;

s32 func_020747f8(void) {
    if (!(M2C_FIELD(&data_02150e58, s32 *, 0xFC) & 8)) {
        func_020672fc((s32) &data_02150ea4, (s32) &data_02150f58);
        M2C_FIELD(&data_02150e58, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_02150e58, s32 *, 0xFC) | 8);
    }
    return (s32) &data_02150f58;
}

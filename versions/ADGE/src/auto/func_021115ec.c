/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02111b88(M2C_UNK, M2C_UNK);

extern s32 data_0215a04c;

void func_021115ec(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = data_0215a04c;
    func_02111b88(temp_r4, 0xC002);
    M2C_FIELD(temp_r4, s16 *, 4) = (s16) arg0;
    M2C_FIELD(temp_r4, s16 *, 6) = (s16) arg1;
    M2C_FIELD(temp_r4, s16 *, 8) = (s16) arg2;
}

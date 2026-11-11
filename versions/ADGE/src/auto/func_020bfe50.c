/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02064bc8(M2C_UNK);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);
M2C_UNK func_020c05c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02140b3c;
extern s16 data_02155664;
extern s16 data_02155670;

s32 func_020bfe50(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02080c28();
    if (func_020c05c8((s32) &data_02140b3c, (s32) func_02064bc8, arg0, arg1) != 0) {
        data_02155670 = 0;
        data_02155664 = 0;
        func_02080c3c(temp_r4);
        return 1;
    }
    func_02080c3c(temp_r4);
    return 0;
}

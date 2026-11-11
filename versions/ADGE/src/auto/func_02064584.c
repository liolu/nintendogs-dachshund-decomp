/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063db4(void);
M2C_UNK func_02063dd0(void);
void func_0206cc88(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020801f4(M2C_UNK, M2C_UNK);

s32 func_02064584(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02063dd0();
    temp_r0 = func_02063db4();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_020801f4(M2C_FIELD(temp_r4, s32 *, 4), 0x7B8);
    func_0206cc88(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7B8);
    return 0;
}

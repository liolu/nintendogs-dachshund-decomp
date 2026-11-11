/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_01ffdb08(M2C_UNK);
void func_020276a4(M2C_UNK, M2C_UNK);

void func_020fe8f0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_01ffdb08((s32) M2C_FIELD(arg0, s16 *, 0x8C));
    if (temp_r0 == 0) {
        return;
    }
    func_020276a4(temp_r0, 0);
}

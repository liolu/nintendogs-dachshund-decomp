/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e3e2c(M2C_UNK);

extern void *data_02159e70;

void func_020e1fb8(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    if ((temp_r0 != 7) && (temp_r0 != 8)) {
        return;
    }
    func_020e3e2c(0xC);
}

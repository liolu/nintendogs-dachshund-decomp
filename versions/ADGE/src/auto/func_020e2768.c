/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e3e2c(M2C_UNK);
M2C_UNK func_020e5304(void);

extern void *data_02159e70;
extern s32 *data_02159fc4;

void func_020e2768(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    if ((temp_r0 != 0) && (temp_r0 != 4) && (temp_r0 != 0xE)) {
        return;
    }
    if (func_020e5304() != 0) {
        if (*data_02159fc4 == 6) {
            return;
        }
        func_020e3e2c(6);
        return;
    }
    if (*data_02159fc4 == 7) {
        return;
    }
    func_020e3e2c(7);
}

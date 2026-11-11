/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e3df0(void);

extern void *data_02159e70;
extern s32 *data_02159fc4;

void func_020e26f8(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    if ((temp_r0 != 0) && (temp_r0 != 4) && (temp_r0 != 0xE)) {
        return;
    }
    temp_r0_2 = *data_02159fc4;
    if ((temp_r0_2 != 6) && (temp_r0_2 != 7)) {
        return;
    }
    func_020e3df0();
}

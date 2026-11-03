/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020b1108(M2C_UNK);
M2C_UNK func_020b24e4(void);

extern void *data_02153740;
extern s32 *data_02153894;

void func_020afa94(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02153740, s32 *, 0xA8);
    if ((temp_r0 != 0) && (temp_r0 != 4) && (temp_r0 != 0xE)) {
        return;
    }
    if (func_020b24e4() != 0) {
        if (*data_02153894 == 6) {
            return;
        }
        func_020b1108(6);
        return;
    }
    if (*data_02153894 == 7) {
        return;
    }
    func_020b1108(7);
}

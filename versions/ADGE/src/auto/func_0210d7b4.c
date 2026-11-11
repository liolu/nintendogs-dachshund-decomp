/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_ov004_0215a1d0(void);

void func_0210d7b4(s32 arg0) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 **, 0x214);
    if (*temp_r1 != 0) {
        return;
    }
    *temp_r1 = 1;
    func_ov004_0215a1d0();
}

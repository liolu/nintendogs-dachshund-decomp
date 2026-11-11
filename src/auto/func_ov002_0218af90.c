/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020351a0(void *);                          /* extern */
M2C_UNK func_0203e2b8(void *, s32);                 /* extern */

void func_ov002_0218af90(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xFA) == 0x20) {
        M2C_FIELD(arg0, s16 *, 0xFA) = 0;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x435);
}

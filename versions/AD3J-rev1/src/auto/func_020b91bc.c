/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_02006b04(s32);                           /* extern */
extern s32 data_02153740;

void func_020b91bc(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg0 * 0x294) + (data_02153740 + 0xA5C);
    if (arg1 == 0) {
        M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
        M2C_FIELD(temp_r4, s32 *, 0)    = 0;
        return;
    }
    M2C_FIELD(temp_r4, s32 *, 0x10) = (s32) M2C_FIELD(func_02006b04(arg1), s32 *, 0xC);
    M2C_FIELD(temp_r4, s32 *, 0)    = 1;
}

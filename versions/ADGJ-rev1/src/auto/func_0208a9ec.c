/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fc44(void *);                      /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
M2C_UNK func_0208bb40(void *);                      /* extern */

void func_0208a9ec(void *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    func_0208bb40(arg0);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0xF);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_0207fc44(arg0 + 0x18);
    func_02081220(temp_r4);
}

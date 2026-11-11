/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020678bc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02081288();                            /* extern */
M2C_UNK func_02002708(s32);                         /* extern */

void func_02067920(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02002708(temp_r0);
    }
    func_020678bc(1, 1);
    func_02081288();
}

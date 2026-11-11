/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_020060f8();                                /* extern */
M2C_UNK func_020063ac(u16, M2C_UNK *);              /* extern */
extern M2C_UNK data_0214affc;

void func_020062ec(void) {
    u16 var_r0;

    if (M2C_FIELD(&data_0214affc, s32 *, 0x24) != 0) {
        var_r0 = func_020060f8();
    } else {
        var_r0 = ((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF;
    }
    func_020063ac(var_r0, &data_0214affc);
}

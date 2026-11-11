/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_0200615c();                                /* extern */
M2C_UNK func_02006410(u16, M2C_UNK *);              /* extern */
extern M2C_UNK data_0214d5fc;

void func_02006350(void) {
    u16 var_r0;

    if (M2C_FIELD(&data_0214d5fc, s32 *, 0x24) != 0) {
        var_r0 = func_0200615c();
    } else {
        var_r0 = ((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF;
    }
    func_02006410(var_r0, &data_0214d5fc);
}

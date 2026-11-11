/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207fb90(void);
M2C_UNK func_0207fbc4(void);
M2C_UNK func_0207fd10(void);

extern s32 data_0213ce34;

s32 func_0207fc98(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_0213ce34 == -1) {
        temp_r4 = func_0207fbc4();
        if (func_0207fd10() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0207fb90() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_0213ce34 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_0213ce34;
}

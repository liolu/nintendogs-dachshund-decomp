/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020642f4();                            /* extern */
M2C_UNK func_020644c0();                            /* extern */
M2C_UNK func_020807b4(M2C_UNK *);                   /* extern */
extern s32 data_0214b9d0;
extern M2C_UNK data_0214b9d4;

void func_02063b78(void) {
    if (data_0214b9d0 != 0) {
        return;
    }
    data_0214b9d0 = 1;
    func_020807b4(&data_0214b9d4);
    func_020642f4();
    func_020644c0();
}

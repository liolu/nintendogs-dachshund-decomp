/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207d6a4(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_0207d6f4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0209417c();                            /* extern */
M2C_UNK func_0209419c();                            /* extern */
extern void *data_021545d8;
extern s32 data_021545dc;
extern s32 data_021545e0;

void func_02094d24(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0       = func_0207d6f4(arg0, arg1, 0);
    data_021545e0 = temp_r0;
    data_021545d8 = func_0207d6a4(temp_r0, 0x18, 4);
    func_0209417c();
    M2C_FIELD(data_021545d8, void **, 0x14) = func_0207d6a4(data_021545e0, 0x13C, 4);
    data_021545dc                           = 1;
    func_0209419c();
}

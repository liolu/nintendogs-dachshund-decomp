/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
void *func_02027508();                              /* extern */
M2C_UNK func_020ed7a8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020ee5e0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020ef590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020f0a98(M2C_UNK);                     /* extern */
extern s32 data_0214b484;
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;

void func_020e9a70(M2C_UNK arg0) {
    s16 var_r5;

    if (data_0214b484 != 0) {
        var_r5 = 0;
    loop_2:
        if (func_01ffda04(var_r5) != 0) {
            M2C_FIELD(&data_02154dd8, s16 *, 0x20) = (s16) M2C_FIELD(func_02027508(), s16 *, 0xC);
            M2C_FIELD(&data_02154cb8, s16 *, 0x24) = var_r5;
        } else {
            var_r5 += 1;
            if ((s32) var_r5 < 3) {
                goto loop_2;
            }
        }
    }
    M2C_FIELD(&data_02154dd8, u16 *, 0x10) = (u16) M2C_FIELD(&data_02154dd8, u16 *, 0xE);
    func_020ee5e0(0, arg0);
    func_020ed7a8(0, arg0);
    func_020ef590(0, arg0);
    func_020f0a98(arg0);
    M2C_FIELD(&data_02154cb8, s32 *, 0x1C) = 1;
}

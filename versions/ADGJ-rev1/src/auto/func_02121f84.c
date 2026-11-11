/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02084a14(s32, M2C_UNK, s32);           /* extern */
extern s32 *data_02154c9c;

void func_02121f84(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    if (data_02154c9c != NULL) {
        var_r0 = *data_02154c9c;
    } else {
        var_r0 = 0;
    }
    func_02084a14(var_r0, 0x3A, arg0 + 0xBC);
    if (data_02154c9c != NULL) {
        var_r0_2 = *data_02154c9c;
    } else {
        var_r0_2 = 0;
    }
    func_02084a14(var_r0_2, 0x3B, arg0 + 0xBC);
    if (data_02154c9c != NULL) {
        var_r0_3 = *data_02154c9c;
    } else {
        var_r0_3 = 0;
    }
    func_02084a14(var_r0_3, 0x3C, arg0 + 0xBC);
}

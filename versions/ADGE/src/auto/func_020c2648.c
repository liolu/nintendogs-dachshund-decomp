/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208129c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 *data_0215a02c;

void func_020c2648(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    if (data_0215a02c != NULL) {
        var_r0 = *data_0215a02c;
    } else {
        var_r0 = 0;
    }
    func_0208129c(var_r0, 0x3A, arg0 + 0xBC);
    if (data_0215a02c != NULL) {
        var_r0_2 = *data_0215a02c;
    } else {
        var_r0_2 = 0;
    }
    func_0208129c(var_r0_2, 0x3B, arg0 + 0xBC);
    if (data_0215a02c != NULL) {
        var_r0_3 = *data_0215a02c;
    } else {
        var_r0_3 = 0;
    }
    func_0208129c(var_r0_3, 0x3C, arg0 + 0xBC);
}

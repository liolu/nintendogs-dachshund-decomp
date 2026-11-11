/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b89e8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020b8ab8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020b8b0c(s32, u16, s32);               /* extern */
extern M2C_UNK data_02141100;
extern M2C_UNK data_02141108;

void func_020bfec4(void) {
    s32 var_r5;
    s32 var_r5_2;

    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 0) {
        func_020b8ab8(0, &data_02141100, 0);
        func_020b8ab8(0, &data_02141108, 0);
        func_020b89e8(0, &data_02141100, 1);
        func_020b89e8(0, &data_02141108, 0);
        var_r5 = 0;
        do {
            func_020b8b0c(0, (u16) (var_r5 + 2), 0);
            var_r5 += 1;
        } while (var_r5 < 0xA);
        func_020b8b0c(0, 0xCU, 0);
        func_020b8b0c(0, 0xDU, 0);
        return;
    }
    func_020b8ab8(0, &data_02141100, 1);
    func_020b8ab8(0, &data_02141108, 1);
    func_020b89e8(0, &data_02141100, 1);
    func_020b89e8(0, &data_02141108, 0);
    var_r5_2 = 0;
    do {
        func_020b8b0c(0, (u16) (var_r5_2 + 2), 0);
        var_r5_2 += 1;
    } while (var_r5_2 < 0xA);
    func_020b8b0c(0, 0xCU, 0);
    func_020b8b0c(0, 0xDU, 0);
}

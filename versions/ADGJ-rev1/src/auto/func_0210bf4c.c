/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c2df8(M2C_UNK);                     /* extern */
M2C_UNK func_020c2e10(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020c2fcc();                            /* extern */
extern s16 data_02156088;

void func_0210bf4c(M2C_UNK arg0) {
    u32 temp_r0;

    func_020c2fcc();
    temp_r0 = data_02156088 - 0x35;
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_020c2e10(arg0, 0x2C, 1, 0x218);
            func_020c2e10(arg0, 0x2F, 1, 0x88);
            break;
        case 1:
            func_020c2e10(arg0, 0x2D, 1, 0x218);
            func_020c2e10(arg0, 0x30, 1, 0x88);
            break;
        case 2:
            func_020c2e10(arg0, 0x2E, 1, 0x218);
            func_020c2e10(arg0, 0x31, 1, 0x88);
            break;
        case 3:
            func_020c2e10(arg0, 0x2C, 1, 0x218);
            func_020c2e10(arg0, 0x32, 1, 0x88);
            break;
        case 4:
            func_020c2e10(arg0, 0x2C, 1, 0x218);
            func_020c2e10(arg0, 0x33, 1, 0x88);
            break;
    }
    func_020c2df8(arg0);
}

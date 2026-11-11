/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c83a0(M2C_UNK);
void func_020c83b8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c85b4(M2C_UNK);

extern s16 data_02155600;

void func_020abbcc(s32 arg0) {
    u32 temp_r0;

    func_020c85b4(arg0);
    temp_r0 = data_02155600 - 0x35;
    switch (temp_r0) {
        default:
            break;
        case 0:
            func_020c83b8(arg0, 0x2C, 1, 0x218);
            func_020c83b8(arg0, 0x2F, 1, 0x88);
            break;
        case 1:
            func_020c83b8(arg0, 0x2D, 1, 0x218);
            func_020c83b8(arg0, 0x30, 1, 0x88);
            break;
        case 2:
            func_020c83b8(arg0, 0x2E, 1, 0x218);
            func_020c83b8(arg0, 0x31, 1, 0x88);
            break;
        case 3:
            func_020c83b8(arg0, 0x2C, 1, 0x218);
            func_020c83b8(arg0, 0x32, 1, 0x88);
            break;
        case 4:
            func_020c83b8(arg0, 0x2C, 1, 0x218);
            func_020c83b8(arg0, 0x33, 1, 0x88);
            break;
    }
    func_020c83a0(arg0);
}

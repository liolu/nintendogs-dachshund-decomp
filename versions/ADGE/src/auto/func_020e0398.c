/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cbbe8(s32, s32, s32);               /* extern */
extern void *data_02159e30;

void func_020e0398(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = 0x3E7;
    var_r2 = 0x3E7;
    switch (arg0) {                                 /* irregular */
        case 0x20:
            var_r1 = 0x59B;
            var_r2 = 0;
            break;
        case 0x40:
            var_r1 = 0x59C;
            var_r2 = 0;
            break;
        case 0x1:
            var_r1 = 0x596;
            var_r2 = 0;
            break;
        case 0x2:
            var_r1 = 0x597;
            var_r2 = 0;
            break;
        case 0x4:
            var_r1 = 0x598;
            var_r2 = 0;
            break;
        case 0x8:
            var_r1 = 0x599;
            var_r2 = 0;
            break;
        case 0x10:
            var_r1 = 0x59A;
            var_r2 = 0;
            break;
    }
    func_020cbbe8(M2C_FIELD(data_02159e30, s32 *, 4), var_r1, var_r2);
}

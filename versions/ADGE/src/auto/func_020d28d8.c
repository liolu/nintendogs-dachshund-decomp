/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_02159e38;

s32 func_020d28d8(u32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    switch (arg0) {
        default:
            break;
        case 1:
            var_r2 = (arg1 * 0x18) + (data_02159e38 + 0x143C);
            break;
        case 2:
            var_r2 = (arg1 * 0x18) + (data_02159e38 + 0x1484);
            break;
        case 0:
            var_r2 = data_02159e38 + 0x140C;
            break;
        case 6:
            var_r2 = data_02159e38 + 0x1424;
            break;
        case 3:
            var_r2 = data_02159e38 + 0x14CC;
            break;
        case 4:
            var_r2 = (arg1 * 0x18) + (data_02159e38 + 0x14E4);
            break;
        case 5:
            var_r2 = (arg1 * 0x18) + (data_02159e38 + 0x155C);
            break;
    }
    return var_r2;
}

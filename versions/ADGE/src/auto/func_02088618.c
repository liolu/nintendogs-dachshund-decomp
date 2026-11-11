/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02065154(u16);                         /* extern */
M2C_UNK func_02065174(u16);                         /* extern */
extern s32 data_021541bc;

s32 func_02088618(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_02065174((u16) data_021541bc);
            return 0;
        case 10:
            func_02065154((u16) data_021541bc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}

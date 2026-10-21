#include "m2c.h"
extern u8 *data_02159fc4;
extern u8 data_021449ac[];
extern u8 data_021449c0[];
s32 func_020e3b2c(s32);
s32 func_020e0398(s32);
s32 func_020e38a4(void);
s32 func_020e1a58(void);

void *func_020e00d4(s32 arg0) {
    u8 *p = data_02159fc4 + 0x160;

    switch (func_020e3b2c((s32) data_02159fc4)) {
    case 1:
        if (arg0 == 0) {
            return (void *) func_020e0398(*(s32 *) (p + func_020e38a4() * 4 + 4));
        }
        if (arg0 == 0xA) {
            return (void *) func_020e1a58();
        }
        return (void *) func_020e0398(*(s32 *) (data_02159fc4 + arg0 * 4 + 0x164));
    case 2:
        if (arg0 == 0xA) {
            return (void *) func_020e1a58();
        }
        return (void *) func_020e0398(*(s32 *) (p + 4));
    case 3:
        return (void *) func_020e1a58();
    case 4:
        return (void *) data_021449ac;
    case 0:
    default:
        return (void *) data_021449c0;
    }
}

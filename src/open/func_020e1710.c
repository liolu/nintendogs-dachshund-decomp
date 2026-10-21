#include "m2c.h"
extern s32 data_02159e70;
void func_020d7880(s32); /* extern */
void func_020e1710(s32 arg0, u16 arg1) {
    s32 state = *(s32 *) ((u8 *) data_02159e70 + 0x1cf0);

    if (arg0 == 4 && state != 1) {
        func_020d7880(0xc);
        *(u16 *) ((u8 *) data_02159e70 + 0x1d44) = arg1;
    } else {
        func_020d7880(7);
        *(s32 *) ((u8 *) data_02159e70 + 0x1cec) = arg0;
        *(u16 *) ((u8 *) data_02159e70 + 0x1cf4) = arg1;
    }
}

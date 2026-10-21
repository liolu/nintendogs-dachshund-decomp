#include "m2c.h"
s32 func_02070bb4(s32, s32, s32);
extern u8 data_0215422c[];
extern u8 data_0215430c[];
s32 func_0208b81c(s32 arg0, s32 arg1, s32 arg2) {
    s32 r;
    u8 *tbl;

    r = 0;
    if (func_020969e4() != -0xB) {
        tbl = data_0215430c;
        if (*(u16 *) (data_0215422c + 0x18) == 0x1F) {
            r = func_0208fb70(tbl, *(s16 *) (arg0 + 0xC), 9, arg2);
        } else {
            r = func_0208fb70(tbl, *(s16 *) (arg0 + 0xC), 8, arg2);
        }
        func_02070bb4((s32) tbl, 0, arg1);
    }
    return r;
}

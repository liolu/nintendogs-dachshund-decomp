#include "m2c.h"
extern void *data_02159e70;
extern void func_020e77a4(s32);
extern void func_020e778c(s32);
extern void func_020d7880(s32);
void func_020e228c(s32 arg0, s32 arg1, s32 arg2) {
    u8 *wk;
    s32 type;
    s32 v;

    wk = (u8 *) data_02159e70 + 0x1D20;
    M2C_FIELD(wk, s32 *, 0xC) = arg2;
    M2C_FIELD(wk, s32 *, 8) = arg1;
    type = 2;
    if (arg0 <= 8) {
        type = 0;
    } else if (arg0 <= 0xB) {
        type = 1;
    }
    func_020e77a4(type);
    v = M2C_FIELD(data_02159e70, s32 *, 0xA8);
    if (v <= 10) {
        if (v >= 9) {
            if (v != 9 && v != 10) {
                return;
            }
        } else {
            if (v > 4) {
                return;
            }
            if (v < 0) {
                return;
            }
            if (v != 0 && v != 4) {
                return;
            }
        }
    } else {
        if (v != 14) {
            return;
        }
    }
    func_020e778c(0);
    func_020d7880(0x26);
}

#include "m2c.h"
s32 func_020721a0(s32);
s32 func_02072278(s32);
void func_02073034(s32, s32);
void func_020733c0(void *, s32);
extern s16 data_0212ba68[];
extern u8 data_0215422c[];
extern u8 data_0215433c[];
void func_0208e718(s32 arg0) {
    u8 *p;
    u8 *q;
    s16 v;
    s32 h;

    v = data_0212ba68[arg0];
    p = data_0215422c;
    q = data_0215433c;
    h = M2C_FIELD(p, s32 *, 4);
    if (v == -1) {
        return;
    }
    if (M2C_FIELD(p, s16 *, 0x16) != -1) {
        func_020721a0(h);
    }
    M2C_FIELD(p, s16 *, 0x16) = func_02072278(h);
    func_02073034(v, h);
    func_020733c0(q, v);
    M2C_FIELD(q, s32 *, 0xC) = 1;
}

#include "m2c.h"
extern s32 func_020e8384(s16 arg0, s16 arg1);
extern s32 func_0209b034(s16 *arg0, s32 arg1);
extern void func_020d2c64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0209d5f8(s32 arg0) {
    s32 v;
    s32 msg;
    s32 flag;
    u8 *p;

    p = (u8 *) arg0 + 0x1CC0;
    v = func_0209b034((s16 *) func_020e8384(*(s16 *) (p + 8), *(s16 *) (p + 0xa)), *(s32 *) p);
    msg = 0;
    flag = 0;
    if (*(s32 *) p == 2) {
        if ((M2C_FIELD(arg0, s32 *, 0x4) + 1) * v + M2C_FIELD(arg0, s32 *, 0x8) > 0x5F5E0FF) {
            msg = 0x2455;
            flag = 1;
        }
    } else {
        if (M2C_FIELD(arg0, s32 *, 0x4) >= 0x63 - M2C_FIELD(arg0, s32 *, 0x0)) {
            msg = 0x23F1;
        } else if (M2C_FIELD(arg0, s32 *, 0x8) < (M2C_FIELD(arg0, s32 *, 0x4) + 1) * v) {
            msg = 0x2329;
        }
    }
    if (msg == 0) {
        return;
    }
    func_020d2c64(8, msg, flag, 0, 0);
}

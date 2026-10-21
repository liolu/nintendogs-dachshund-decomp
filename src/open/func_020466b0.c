#include "m2c.h"
s32 func_02028714(u8 *, s32, s32);                  /* extern */
s32 func_020354a8(u8 *, s32);                       /* extern */
void func_020358c8(u8 *);                           /* extern */
void *func_02036258();                              /* extern */
void func_0203e5e8(u8 *, s16);                      /* extern */
void func_02027644(void *, u8 *);                   /* extern */
s32 func_020466b0(u8 *arg0, s32 arg1, s32 arg2) {
    void *temp;
    s16 v;
    s32 ok;

    temp = func_02036258();
    if (temp != 0 && arg2 != 0) {
        func_02027644(temp, arg0 + 0x3B4);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0xF, 0) != 0) {
        func_0203e5e8(arg0, (s16) (arg1 + 0x2F9));
        return 1;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return 1;
    }
    if (temp != 0) {
        v = *(s16 *) ((u8 *) temp + 0xEA);
        ok = (v >= 0x2CD) && (v <= 0x2D7);
        if (ok != 0) {
            goto check;
        }
    }
    func_0203e5e8(arg0, (s16) (arg1 + 0x2F9));
    return 1;
 check:
    if (*(s16 *) (arg0 + 0xFA) != 0x1F) {
        return 0;
    }
    func_0203e5e8(arg0, (s16) (arg1 + 0x2FB));
    *(s16 *) (arg0 + 0xFA) = 0;
    return 1;
}

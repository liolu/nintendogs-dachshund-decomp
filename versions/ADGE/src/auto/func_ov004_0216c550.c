/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020caa6c(void *, s32, s32);
void func_020ca750(s32, s32);
void func_020ca78c(s32, s32);
void func_020ca73c(s32, s32);
void func_020ca4b0(s32, void *);
void func_ov004_0216c22c(void);

s32 func_ov004_0216c550(void *arg0, s32 arg1) {
    s32 r;

    r = func_020caa6c(arg0, 0x8C, arg1);
    func_020ca750(r, 0x39CE);
    func_020ca78c(r, 0x7FFF);
    func_020ca73c(r, 3);
    func_020ca4b0(r, func_ov004_0216c22c);
    return r;
}

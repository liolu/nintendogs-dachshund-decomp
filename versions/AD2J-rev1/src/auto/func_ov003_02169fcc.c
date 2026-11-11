/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c5468(void *, s32, s32);
void func_020c514c(s32, s32);
void func_020c5188(s32, s32);
void func_020c5138(s32, s32);
void func_020c4eac(s32, void *);
void func_ov003_02169ca8(void);

s32 func_ov003_02169fcc(void *arg0, s32 arg1) {
    s32 r;

    r = func_020c5468(arg0, 0x8C, arg1);
    func_020c514c(r, 0x39CE);
    func_020c5188(r, 0x7FFF);
    func_020c5138(r, 3);
    func_020c4eac(r, func_ov003_02169ca8);
    return r;
}

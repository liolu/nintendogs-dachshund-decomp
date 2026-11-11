/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov028_0215b7f8(void);
void func_0206f62c(void *, s32, void *);

void func_ov028_0215ab24(void *arg0, void *arg1, s32 arg2) {
    if (func_ov028_0215b7f8() != 2) {
        return;
    }
    if (arg1 == 0) {
        return;
    }
    func_0206f62c(arg1, arg2, arg0);
}

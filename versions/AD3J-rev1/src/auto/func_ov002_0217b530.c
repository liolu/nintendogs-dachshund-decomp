/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020352c0(void *, s32);
void func_0203e2b8(void *, s32);
s32 func_ov002_0217bb6c(void *, s32, s32);

void func_ov002_0217b530(void *arg0) {
    if (func_ov002_0217bb6c(arg0, 8, 0) != 0) {
        return;
    }
    if (func_020352c0(arg0, 0x2E) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x20E);
}

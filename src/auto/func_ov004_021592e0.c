/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);
s32 func_ov004_02159428(void *);

void func_ov004_021592e0(void *arg0) {
    if (func_ov004_02159428(arg0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x43C);
}

/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02022b38(void *);
s32 func_0202c05c(void *, s32);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);

void func_ov002_021812a8(void *arg0) {
    func_02022b38(arg0);
    if (func_0202c05c(arg0, 8) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0xF4);
}

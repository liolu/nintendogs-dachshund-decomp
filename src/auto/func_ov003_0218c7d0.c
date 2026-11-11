/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020325f8(void *);
void func_02039128(void *);
void func_02037130(void *, s32);
s32 func_020350fc(void *);
void func_ov003_0219687c(void *, s32);

void func_ov003_0218c7d0(void *arg0) {
    if (func_020325f8(arg0) != 0) {
        func_02039128(arg0);
    }
    func_02037130(arg0, 0x300);
    if (*(s8 *) ((u8 *) arg0 + 0xA0) != 0) {
        return;
    }
    if (*(s8 *) ((u8 *) arg0 + 0xA1) != 0) {
        return;
    }
    func_ov003_0219687c(arg0, func_020350fc(arg0));
}

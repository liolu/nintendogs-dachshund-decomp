/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void func_ov004_02161ca8(void);
extern void func_ov004_021617b8(void);
extern void func_ov004_02161dfc(void);
void func_02107c9c(void *, s32);
void *func_02003844(void *, s32);

void func_ov004_02161e5c(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0;
    u8 *q;

    func_02107c9c(arg0, 0x6E);
    *(void **) (p + 0x1F4) = (void *) func_ov004_02161ca8;
    *(void **) (p + 0x1F8) = (void *) func_ov004_021617b8;
    *(void **) (p + 0x1F0) = (void *) func_ov004_02161dfc;
    *(void **) (p + 0x214) = func_02003844(arg1, 0xC);
    q                      = *(u8 **) (p + 0x214);
    *(s16 *) q             = -1;
    *(s32 *) (q + 4)       = 0;
}

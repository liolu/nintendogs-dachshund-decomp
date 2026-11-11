/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026b58(void *);
void func_0203b458(void *);
void func_02025ad0(void *);
void *func_020361ac(void *);
void func_02028174(void *);
s32 func_02027f68(void *, s32);
void func_02027f30(void *, s32, s32);

void func_ov003_0216c940(void *arg0) {
    u8 *b;
    u8 *t;
    s16 r4;

    b                    = (u8 *) arg0;
    *(s16 *) (b + 0x152) = 0x153;
    func_02026b58(arg0);
    func_0203b458(arg0);
    func_02025ad0(arg0);
    t = (u8 *) func_020361ac(arg0);
    if (t != NULL && *(s16 *) (t + 0x96) == 0) {
        r4 = *(s16 *) (t + 0x94);
        func_02028174(arg0);
        *(s16 *) (*(u8 **) (b + 0x9E8) + 0x70) = r4;
        if (func_02027f68(arg0, 3) <= 0x7D0) {
            return;
        }
        func_02027f30(arg0, 3, 0x7D0);
        return;
    }
    if (func_02027f68(arg0, 4) <= 0x3E8) {
        return;
    }
    func_02027f30(arg0, 4, 0x3E8);
}

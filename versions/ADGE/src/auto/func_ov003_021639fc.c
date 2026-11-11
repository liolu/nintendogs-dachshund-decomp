/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02026484(void *, void *, s32);
void func_02025850(void *);
void func_02033e78(void *);

void func_ov003_021639fc(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x9A;
    *(s16 *) ((u8 *) arg0 + 0x156) = 8;
    func_02026484(arg0, (u8 *) arg0 + 0x100, 8);
    func_02025850(arg0);
    func_02033e78(arg0);
}

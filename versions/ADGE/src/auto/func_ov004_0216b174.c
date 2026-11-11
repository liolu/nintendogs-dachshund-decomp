/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02025ba0(void *);
void func_02026984(void *);
s16 func_02037fb8();

void func_ov004_0216b174(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = func_02037fb8();
    func_02026984(arg0);
    func_02025ba0(arg0);
    *(s32 *) ((u8 *) arg0 + 0x484) = 0;
}

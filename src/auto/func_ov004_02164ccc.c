/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02027530(void *);
void func_0208a56c(s32, s32);
void func_ov004_02164d44(void *);

void func_ov004_02164ccc(void *arg0) {
    u16 temp = *(u16 *) ((u8 *) arg0 + 0xfc);
    if (temp == 0x14) {
        func_0208a56c(func_02027530(arg0), 1);
    } else if (temp == 0x20) {
        func_0208a56c(func_02027530(arg0), 0);
    }
    func_ov004_02164d44(arg0);
}

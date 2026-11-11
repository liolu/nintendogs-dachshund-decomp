/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02022b6c(void *);
void func_ov003_0218758c(void *, s32, s32, s32);

void func_ov003_02186050(void *arg0) {
    s32 r4;

    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 0x28) {
        r4 = 1;
    } else {
        r4 = 0;
    }
    func_02022b6c(arg0);
    func_ov003_0218758c(arg0, 5, 0x57, r4);
}
